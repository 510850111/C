#include <windows.h>
#include <stdio.h>
#define N 50
struct student
{
	int num;
	int score;
	struct student *Next;
};

typedef struct student STU;

char Array_Head_NewElement_Error[N] = {"ͷ�ڵ��ڴ�����ʧ��!"};
char Array_NewElement_Error[N] = {"�ڵ��ڴ�����ʧ��!"};
char Array_Creat_Input_num_score[N] = {"�������ͬѧ��ѧ�źͳɼ�:"};
char Array_insert_num_score[N] = {"����������ѧ�źͳɼ�:"};
char Array_Del_Input_num[N] = {"������Ҫɾ����ͬѧ��ѧ��:"};
char Array_Del_NotFound[N] = {"û���ҵ�Ҫɾ���Ľ��!"};

STU *Creat(void);			/*�½�һ������*/
STU *insert(STU *Head);		/*����һ��Ԫ��*/
STU *Del(STU *Head, int num);
void Disp(STU *Head);

int main()
{
	STU *Head = NULL;	/*ͷָ����Ϊ�� ������*/
	Head = Creat();		/*����creat������������*/
	Disp(Head);			/*��ʾ����*/
	Head = insert(Head);
	Disp(Head);
	int num;
	printf("%s", Array_Del_Input_num );
	scanf("%d", &num);
	Head = Del(Head, num);
	Disp(Head);
	system("pause");
	return 0;
}

STU *Creat(void)
{
	STU *Head = NULL;	/*ͷָ����Ϊ�� ������*/
	STU *Tail = NULL;	/*βָ��*/
	Head = (STU*)malloc(sizeof(STU)) ; /*Ϊͷ������ռ�*/
	if (Head == NULL)	/*������,����ڴ�����Ƿ�Ϊ��*/
	{
		printf("%s", Array_Head_NewElement_Error);
		return NULL;
	}
	Head -> Next = NULL;	/*ͷ���Nextָ����Ϊ��*/
	Tail = Head;			/*��ʼʱβ���ָ��ͷ���*/
	STU *pNewElement = NULL;/*�¼ӽ���ָ��,����Ϊ�¼ӽ�����붯̬�ڴ�*/
	int num, score;
	while (1)
	{
		printf("%s", Array_Creat_Input_num_score);
		scanf("%d %d", &num, &score);
		if (num > 0 && score > 0)	/*���ѧ�źͳɼ���������*/
		{
			pNewElement = (STU*)malloc(sizeof(STU));/*������һ���ڴ�ռ�*/
			if (pNewElement == NULL)	/*������,����ڴ�����Ƿ�Ϊ��*/
			{
				printf("%s\n", Array_NewElement_Error);
				return NULL;
			}
			pNewElement->num = num;		/*Ϊ��������ڴ渳ֵ*/
			pNewElement->score = score;
			pNewElement->Next = NULL;
			Tail->Next = pNewElement;	/*����Ԫ�ز����β*/
			Tail = pNewElement;			/*����β���λ��*/
		}
		else break;						/*���ѧ�ųɼ���ѧ����һ��<=0,�������*/
	}
	pNewElement = Head;
	Head = Head->Next;		/*����ͷָ��λ��*/
	free(pNewElement);		/*�ͷſռ�*/
	return Head;
}

void Disp(STU *Head)
{
	STU *p = Head;		/*��������õ�ָ��p*/
	while (1)
	{
		if (p == NULL) return;	/*�����β��,�˳�*/
		printf("num=%d,score=%d\n", p->num, p->score);
		p = p->Next;	/*ָ����һ���*/
	}
}

STU *insert(STU *Head)
{
	int num, score;
	STU *insert = NULL, *I1 = NULL, *I2 = NULL;
	I1 = Head;
	while (1)
	{
		printf("%s\n", Array_insert_num_score);
		scanf("%d %d", &num, &score);
		if (num > 0 && score > 0)
		{
			insert = (STU*)malloc(sizeof(STU));
			if (insert == NULL)
			{
				printf("%s\n", Array_NewElement_Error);
				return NULL;
			}
			insert -> num = num;
			insert -> score = score;
			while (num > I1->num && I1 -> Next != NULL)	/*Ѱ�Ҳ���λ�� ��I1��I2֮��*/
			{
				I2 = I1;
				I1 = I1 -> Next;
			}
			if (num <= I1 -> num)
			{
				if (Head == I1)		/*������ͷ��*/
				{
					insert -> Next = I1;
					Head = insert;
				}
				else 	/*�������м�*/
				{
					I2 -> Next = insert;
					insert -> Next = I1;
				}
			}
			else 	/*����β��*/
			{
				I1 -> Next = insert;
				insert -> Next = NULL;
			}
		}
		else break;
	}
	return Head;
}

STU *Del(STU *Head, int num)
{
	STU *p1 = NULL, *p2 = NULL;		/*���ָ�� ����Ѱ��Ҫɾ����λ��*/
	p1 = Head;
	while (num != p1->num && p1->Next != NULL)	/*ɾ��λ�õ�Ѱ��*/
	{
		p2 = p1;
		p1 = p1->Next;
	}
	if (num == p1->num)			/*�ж��Ƿ��Ǵ�ɾ���Ľ��*/
	{
		if (p1 == Head)			/*Ҫɾ�������׽��*/
		{
			Head = p1->Next;
			free(p1);
		}
		else 					/*Ҫɾ�������м����β���*/
		{
			p2->Next = p1->Next;
			free(p1);
		}

	}
	else 						/*�Ҳ���Ҫɾ���Ľ��*/
	{
		printf("%s\n", Array_Del_NotFound);
	}
	return Head;
}

