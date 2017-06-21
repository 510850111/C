/*
	设有n个人站成一排，从左至右的编号为1-n,现在从左往右“1 2 1 2 …”报数，
	数到1的人出列，数到2的人立即站到队伍的最右端。
	报数过程反复进行，直到n个人都出列为止。
	要求给出他们的出列顺序。
	如：n=8，初始序列为1 2 3 4 5 6 7 8  出列序列为1 3 5 7 2 6 4 8 。
提示：利用循环队列，
	1.先将1—n的数入队；
	2.然后将第一个出队并输出，第二个出队并入队；3.重复第2步，直到队列为空。
函数原型：void Printnum(int n);
--------------------------------------------------------------------------------
需求:
	A:初始化一个数组,元素序列是从1到N
	B:建立一个奇偶判断机制:
		1.元素是奇数,打印出来
		2.元素是偶数,丢到队列末尾,最后输出偶数

分析:
	提示中建议使用循环队列,循环队列需要一个固定大小的数组空间,我就创建一个大小为1024的数组
	首先进行输入数据n,加入数据输入判断功能:输入的数字是否在0到1024之间
	我并不想要使用题目中的函数原型,我要新建一个函数,以完成输出功能

实现:
	数据判断功能可以单独写一个函数	int  JudgingNumber(int n); 返回-1就是数据不合法

*/

#include <windows.h>
#include <stdio.h>
#define MaxSize 1024
#define OK 1;
#define Error 0;
typedef int QElemType;
typedef int Status;
/*循环队列的顺序储存结构*/
typedef struct
{
	QElemType Data[MaxSize];
	int Front;/*头指针*/
	int Rear; /*尾指针,若队列不空,指向队尾元素的下一个位置*/
} SqQueue;

Status InitQueue(SqQueue *Q);/*循环队列的初始化*/
Status InitQueueElemPyte(SqQueue *Q, int n); /*初始化循环队列元素*/
int JudgingNumber(int n);	/*数据输入的判断*/
Status EnQueue(SqQueue *Q, QElemType e); /*循环队列的入队操作*/
Status DeQueue(SqQueue *Q, QElemType *e);/*循环队列的删除操作*/
int QueueLength(SqQueue Q); /*循环队列求长度,返回当前队列的元素个数*/
void ShowQueue(SqQueue Q);	/*打印出队列的所有元素*/
void Printnum(SqQueue *Q, int n);	/*打印出出队列的元素,并把偶数丢到队列末尾*/

int main()
{
	SqQueue Q;
	int n = 0;
	printf("请输入数字:");
	scanf("%d", &n);
	if (JudgingNumber(n) == -1)	 main();
	InitQueue(&Q);
	InitQueueElemPyte(&Q, n);
	Printnum(&Q, n);
	ShowQueue(Q);
	system("pause");
	return 0;
}

Status InitQueue(SqQueue *Q)/*循环队列的初始化*/
{
	Q->Front = 0;
	Q->Rear = 0;
	return OK;
}

Status InitQueueElemPyte(SqQueue *Q, int n) /*初始化循环队列元素*/
{
	for (int i = 1; i <= n; i++)
	{
		Q->Data[Q->Rear] = i;
		Q->Rear = i;
	}
	return OK;
}

int JudgingNumber(int n)	/*数据输入的判断*/
{
	if (n < 0)	return -1;
	if ( n >= 1024 ) return -1;
	return 0;
}

Status EnQueue(SqQueue *Q, QElemType e) /*循环队列的入队操作*/
{
	Q->Data[Q->Rear] = e;/*将元素e赋给队尾*/
	Q->Rear = (Q->Rear + 1) % MaxSize; /*将Rear往后移动一个位置,若到了最后则移动到队首[数组头部]*/
	return OK;
}

Status DeQueue(SqQueue *Q, QElemType *e)/*循环队列的删除操作*/
{
	*e = Q->Data[Q->Front];	/*将队头元素赋给e*/
	Q->Front = (Q->Front + 1) % MaxSize;/*将Front往后移动一个位置,若到了最后则移动到队首[数组头部]*/
	return OK;
}

int QueueLength(SqQueue Q)/*循环队列求长度,返回当前队列的元素个数*/
{
	return (Q.Rear - Q.Front + MaxSize) % MaxSize;
}

void ShowQueue(SqQueue Q)	/*打印出队列的所有元素*/
{
	int Goal = Q.Front;

	while ( Goal != Q.Rear )
	{
		printf(" Q.Data[%d]=%d \n", Goal, Q.Data[Goal] );
		Goal = (Goal + 1) % MaxSize;
	}
}

void Printnum(SqQueue *Q, int n)	/*打印出出队的元素,并把偶数丢到队列末尾*/
{
	int flag = 0;/*用于标记是否把全部奇数出队*/
	int OddNumberCount = 0;/*遍历中遇到的奇数个数,当遇到偶数时清零*/
	int Goal = Q->Front;/*要打印的目标*/
	int e = -1;/*用于存放已经被删除的元素*/
	int HalfLength ;
	HalfLength = QueueLength(*Q) / 2;
	while (flag == 0)
	{
		Goal = Q->Front;
		if ((Q->Data[Goal] % 2) == 1)
		{
			DeQueue(Q, &e); /*把Front的元素给e,删除Front的元素,Front后移一位*/
			printf(" Q.Data[%d]=%d \n", Goal, e);
			OddNumberCount++;
		}
		if ((Q->Data[Goal] % 2) == 0)
		{
			DeQueue(Q, &e); /*把Front的元素给e,删除Front的元素,Front后移一位*/
			EnQueue(Q, e); /*把偶数元素入队操作*/
		}
		if (OddNumberCount >= HalfLength) flag = 1;
	}
	/*以下处理未被操作的数,那个数是n-2*/
	DeQueue(Q, &e); /*把Front的元素给e,删除Front的元素,Front后移一位*/
	EnQueue(Q, e); /*把偶数元素入队操作*/
}
