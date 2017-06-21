#include <windows.h>
#include <stdio.h>
#define MaxSize 10
#define OK 1;
#define Error 0;
typedef int QElemType;/*循环队列的顺序储存结构*/
typedef int Status;

typedef struct
{
	QElemType Data[MaxSize];
	int Front;/*头指针*/
	int Rear; /*尾指针,若队列不空,指向队尾元素的下一个位置*/
} SqQueue;

Status InitQueue(SqQueue *Q);/*循环队列的初始化*/
int QueueLength(SqQueue Q); /*循环队列求长度,返回当前队列的元素个数*/
int QueueFull(SqQueue Q);/*判断循环队列是不是已经满了,如果已满,返回1,如果未满,返回0*/
int QueueEmpty(SqQueue Q);/*判断循环队列是不是空的,如果为空,返回1,如果不空,返回0*/
Status EnQueue(SqQueue *Q, QElemType e); /*循环队列的入队操作*/
Status DeQueue(SqQueue *Q, QElemType *e);/*循环队列的删除操作*/

int main()
{
	SqQueue SqQueue;
	InitQueue(&SqQueue);
	printf("QueueLength = %d\n", QueueLength(SqQueue));
	system("pause");
	return 0;
}

Status InitQueue(SqQueue *Q)/*循环队列的初始化*/
{
	Q->Front = 0;
	Q->Rear = 0;
	return OK;
}

int QueueLength(SqQueue Q)/*循环队列求长度,返回当前队列的元素个数*/
{
	return (Q.Rear - Q.Front + MaxSize) % MaxSize;
}

int QueueFull(SqQueue Q)/*判断循环队列是不是已经满了,如果已满,返回1,如果未满,返回0*/
{
	if ((Q.Rear + 1) % MaxSize == Q.Front) return 1;
	else 	return 0;
} 

int QueueEmpty(SqQueue Q)/*判断循环队列是不是空的,如果为空,返回1,如果不空,返回0*/
{
	if (Q.Rear == Q.Front) return 1;
	else return 0;
}

Status EnQueue(SqQueue *Q, QElemType e) /*循环队列的入队操作*/
{
	/*如果队列未满,则在Q插入一个元素为e的新队尾元素*/
	if (QueueFull(*Q)) return Error; /*队列满的判断*/
	Q->Data[Q->Rear] = e;/*将元素e赋给队尾*/
	Q->Rear = (Q->Rear + 1) % MaxSize; /*将Rear往后移动一个位置,若到了最后则移动到队首[数组头部]*/
	return OK;
}

Status DeQueue(SqQueue *Q, QElemType *e)/*循环队列的删除操作*/
{
	if (QueueEmpty(*Q)) 	return Error; /*队列空的判断*/
	*e = Q->Data[Q->Front];	/*将队头元素赋给e*/
	Q->Front = (Q->Front + 1) % MaxSize;/*将Front往后移动一个位置,若到了最后则移动到队首[数组头部]*/
	return OK;
}

