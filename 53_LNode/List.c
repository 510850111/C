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

char Array_Head_NewElement_Error[N] = {"头节点内存申请失败!"};
char Array_NewElement_Error[N] = {"节点内存申请失败!"};
char Array_Creat_Input_num_score[N] = {"请输入该同学的学号和成绩:"};
char Array_insert_num_score[N] = {"请输入插入的学号和成绩:"};
char Array_Del_Input_num[N] = {"请输入要删除的同学的学号:"};
char Array_Del_NotFound[N] = {"没有找到要删除的结点!"};

STU *Creat(void);			/*新建一个链表*/
STU *insert(STU *Head);		/*插入一个元素*/
STU *Del(STU *Head, int num);
void Disp(STU *Head);

int main()
{
	STU *Head = NULL;	/*头指针设为空 空链表*/
	Head = Creat();		/*调用creat函数创建链表*/
	Disp(Head);			/*显示链表*/
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
	STU *Head = NULL;	/*头指针设为空 空链表*/
	STU *Tail = NULL;	/*尾指针*/
	Head = (STU*)malloc(sizeof(STU)) ; /*为头结点分配空间*/
	if (Head == NULL)	/*防错处理,检查内存分配是否为空*/
	{
		printf("%s", Array_Head_NewElement_Error);
		return NULL;
	}
	Head -> Next = NULL;	/*头结点Next指针置为空*/
	Tail = Head;			/*开始时尾结点指向头结点*/
	STU *pNewElement = NULL;/*新加结点的指针,用于为新加结点申请动态内存*/
	int num, score;
	while (1)
	{
		printf("%s", Array_Creat_Input_num_score);
		scanf("%d %d", &num, &score);
		if (num > 0 && score > 0)	/*如果学号和成绩都大于零*/
		{
			pNewElement = (STU*)malloc(sizeof(STU));/*新申请一块内存空间*/
			if (pNewElement == NULL)	/*防错处理,检查内存分配是否为空*/
			{
				printf("%s\n", Array_NewElement_Error);
				return NULL;
			}
			pNewElement->num = num;		/*为新申请的内存赋值*/
			pNewElement->score = score;
			pNewElement->Next = NULL;
			Tail->Next = pNewElement;	/*将新元素插入队尾*/
			Tail = pNewElement;			/*更新尾结点位置*/
		}
		else break;						/*如果学号成绩或学号有一个<=0,输入结束*/
	}
	pNewElement = Head;
	Head = Head->Next;		/*修正头指针位置*/
	free(pNewElement);		/*释放空间*/
	return Head;
}

void Disp(STU *Head)
{
	STU *p = Head;		/*遍历输出用的指针p*/
	while (1)
	{
		if (p == NULL) return;	/*输出到尾部,退出*/
		printf("num=%d,score=%d\n", p->num, p->score);
		p = p->Next;	/*指向下一结点*/
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
			while (num > I1->num && I1 -> Next != NULL)	/*寻找插入位置 在I1和I2之间*/
			{
				I2 = I1;
				I1 = I1 -> Next;
			}
			if (num <= I1 -> num)
			{
				if (Head == I1)		/*插入在头部*/
				{
					insert -> Next = I1;
					Head = insert;
				}
				else 	/*插入在中间*/
				{
					I2 -> Next = insert;
					insert -> Next = I1;
				}
			}
			else 	/*插在尾部*/
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
	STU *p1 = NULL, *p2 = NULL;		/*结点指针 用于寻找要删除的位置*/
	p1 = Head;
	while (num != p1->num && p1->Next != NULL)	/*删除位置的寻找*/
	{
		p2 = p1;
		p1 = p1->Next;
	}
	if (num == p1->num)			/*判断是否是待删除的结点*/
	{
		if (p1 == Head)			/*要删除的是首结点*/
		{
			Head = p1->Next;
			free(p1);
		}
		else 					/*要删除的是中间结点或尾结点*/
		{
			p2->Next = p1->Next;
			free(p1);
		}

	}
	else 						/*找不到要删除的结点*/
	{
		printf("%s\n", Array_Del_NotFound);
	}
	return Head;
}

