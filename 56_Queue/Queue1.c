/*
	����n����վ��һ�ţ��������ҵı��Ϊ1-n,���ڴ������ҡ�1 2 1 2 ����������
	����1���˳��У�����2��������վ����������Ҷˡ�
	�������̷������У�ֱ��n���˶�����Ϊֹ��
	Ҫ��������ǵĳ���˳��
	�磺n=8����ʼ����Ϊ1 2 3 4 5 6 7 8  ��������Ϊ1 3 5 7 2 6 4 8 ��
��ʾ������ѭ�����У�
	1.�Ƚ�1��n������ӣ�
	2.Ȼ�󽫵�һ�����Ӳ�������ڶ������Ӳ���ӣ�3.�ظ���2����ֱ������Ϊ�ա�
����ԭ�ͣ�void Printnum(int n);
--------------------------------------------------------------------------------
����:
	A:��ʼ��һ������,Ԫ�������Ǵ�1��N
	B:����һ����ż�жϻ���:
		1.Ԫ��������,��ӡ����
		2.Ԫ����ż��,��������ĩβ,������ż��

����:
	��ʾ�н���ʹ��ѭ������,ѭ��������Ҫһ���̶���С������ռ�,�Ҿʹ���һ����СΪ1024������
	���Ƚ�����������n,�������������жϹ���:����������Ƿ���0��1024֮��
	�Ҳ�����Ҫʹ����Ŀ�еĺ���ԭ��,��Ҫ�½�һ������,������������

ʵ��:
	�����жϹ��ܿ��Ե���дһ������	int  JudgingNumber(int n); ����-1�������ݲ��Ϸ�

*/

#include <windows.h>
#include <stdio.h>
#define MaxSize 1024
#define OK 1;
#define Error 0;
typedef int QElemType;
typedef int Status;
/*ѭ�����е�˳�򴢴�ṹ*/
typedef struct
{
	QElemType Data[MaxSize];
	int Front;/*ͷָ��*/
	int Rear; /*βָ��,�����в���,ָ���βԪ�ص���һ��λ��*/
} SqQueue;

Status InitQueue(SqQueue *Q);/*ѭ�����еĳ�ʼ��*/
Status InitQueueElemPyte(SqQueue *Q, int n); /*��ʼ��ѭ������Ԫ��*/
int JudgingNumber(int n);	/*����������ж�*/
Status EnQueue(SqQueue *Q, QElemType e); /*ѭ�����е���Ӳ���*/
Status DeQueue(SqQueue *Q, QElemType *e);/*ѭ�����е�ɾ������*/
int QueueLength(SqQueue Q); /*ѭ�������󳤶�,���ص�ǰ���е�Ԫ�ظ���*/
void ShowQueue(SqQueue Q);	/*��ӡ�����е�����Ԫ��*/
void Printnum(SqQueue *Q, int n);	/*��ӡ�������е�Ԫ��,����ż����������ĩβ*/

int main()
{
	SqQueue Q;
	int n = 0;
	printf("����������:");
	scanf("%d", &n);
	if (JudgingNumber(n) == -1)	 main();
	InitQueue(&Q);
	InitQueueElemPyte(&Q, n);
	Printnum(&Q, n);
	ShowQueue(Q);
	system("pause");
	return 0;
}

Status InitQueue(SqQueue *Q)/*ѭ�����еĳ�ʼ��*/
{
	Q->Front = 0;
	Q->Rear = 0;
	return OK;
}

Status InitQueueElemPyte(SqQueue *Q, int n) /*��ʼ��ѭ������Ԫ��*/
{
	for (int i = 1; i <= n; i++)
	{
		Q->Data[Q->Rear] = i;
		Q->Rear = i;
	}
	return OK;
}

int JudgingNumber(int n)	/*����������ж�*/
{
	if (n < 0)	return -1;
	if ( n >= 1024 ) return -1;
	return 0;
}

Status EnQueue(SqQueue *Q, QElemType e) /*ѭ�����е���Ӳ���*/
{
	Q->Data[Q->Rear] = e;/*��Ԫ��e������β*/
	Q->Rear = (Q->Rear + 1) % MaxSize; /*��Rear�����ƶ�һ��λ��,������������ƶ�������[����ͷ��]*/
	return OK;
}

Status DeQueue(SqQueue *Q, QElemType *e)/*ѭ�����е�ɾ������*/
{
	*e = Q->Data[Q->Front];	/*����ͷԪ�ظ���e*/
	Q->Front = (Q->Front + 1) % MaxSize;/*��Front�����ƶ�һ��λ��,������������ƶ�������[����ͷ��]*/
	return OK;
}

int QueueLength(SqQueue Q)/*ѭ�������󳤶�,���ص�ǰ���е�Ԫ�ظ���*/
{
	return (Q.Rear - Q.Front + MaxSize) % MaxSize;
}

void ShowQueue(SqQueue Q)	/*��ӡ�����е�����Ԫ��*/
{
	int Goal = Q.Front;

	while ( Goal != Q.Rear )
	{
		printf(" Q.Data[%d]=%d \n", Goal, Q.Data[Goal] );
		Goal = (Goal + 1) % MaxSize;
	}
}

void Printnum(SqQueue *Q, int n)	/*��ӡ�����ӵ�Ԫ��,����ż����������ĩβ*/
{
	int flag = 0;/*���ڱ���Ƿ��ȫ����������*/
	int OddNumberCount = 0;/*��������������������,������ż��ʱ����*/
	int Goal = Q->Front;/*Ҫ��ӡ��Ŀ��*/
	int e = -1;/*���ڴ���Ѿ���ɾ����Ԫ��*/
	int HalfLength ;
	HalfLength = QueueLength(*Q) / 2;
	while (flag == 0)
	{
		Goal = Q->Front;
		if ((Q->Data[Goal] % 2) == 1)
		{
			DeQueue(Q, &e); /*��Front��Ԫ�ظ�e,ɾ��Front��Ԫ��,Front����һλ*/
			printf(" Q.Data[%d]=%d \n", Goal, e);
			OddNumberCount++;
		}
		if ((Q->Data[Goal] % 2) == 0)
		{
			DeQueue(Q, &e); /*��Front��Ԫ�ظ�e,ɾ��Front��Ԫ��,Front����һλ*/
			EnQueue(Q, e); /*��ż��Ԫ����Ӳ���*/
		}
		if (OddNumberCount >= HalfLength) flag = 1;
	}
	/*���´���δ����������,�Ǹ�����n-2*/
	DeQueue(Q, &e); /*��Front��Ԫ�ظ�e,ɾ��Front��Ԫ��,Front����һλ*/
	EnQueue(Q, e); /*��ż��Ԫ����Ӳ���*/
}
