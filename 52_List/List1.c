#include <windows.h>
#include <stdio.h>

#define OK 1
#define True 1
#define Error 0
#define False 0
#define MaxSize 100

typedef int Status;
typedef int ElemType;

typedef struct 
{
	ElemType Data[MaxSize];
	int length;
} SqList;

Status GetElem(SqList L, int i, ElemType *e); /*获得SqList的i位置的元素e*/
Status InsertElem(SqList L, int i, ElemType e); /*插入元素e在SqList的i位置*/
Status DelectElem(SqList L, int i, ElemType e); /*在SqList的i位置删除元素e*/
int main()
{

	system("pause");
	return 0;
}

Status GetElem(SqList L, int i, ElemType *e)
{
	if (L.length == 0 || i < 0 || i > L.length)	return Error;
	*e = L.Data[i - 1];
	return OK;
}

Status InsertElem(SqList L, int i, ElemType e)
{
	if (L.length == MaxSize || i < 1 || i > L.length + 1)		return Error;
	if (i <= L.length) /*插入位置不在表尾*/
	{
		for (int j = L.length; j >= i - 1; j--)
			L.Data[j + 1] = L.Data[j];
		L.Data[i - 1] = e;
		L.length++;
	}
	return OK;
}

Status DelectElem(SqList L, int i, ElemType e)
{
	if (L.length == 0 || i < 1 || i > L.length + 1)		return Error;
	if (i <= L.length)	/*删除位置不在表尾*/
	{
		for (int j = i; j <L.length; j++)
			L.Data[j-1] = L.Data[j];
		L.length--;
	}
	return OK;
}



