#include <windows.h>
#include <stdio.h>
#define MaxSize 10

typedef struct
{
	int r[MaxSize + 1];//用于存储要排序的数组,r[0]作为临时变量
	int length;
} SqList;

void swap(SqList *L, int i , int j);
void BubbleSort(SqList *L);

int main()
{

	system("pause");
	return 0;
}

//交换L中数组r下标r和j 的值
void swap(SqList *L, int i , int j)
{
	int temp = L->r[i];
	L -> r[i] = L ->r[j];
	L -> r[j] = temp;
}

//对顺序表L做交换排序,冒泡排序初级版
void BubbleSort(SqList *L)
{
	for (int i = i; i < L -> length; i++)
	{
		for (int j = i + i; j < L -> length; j++)
		{
			if ( (L -> r[i]) > (L -> r[j]) )
				swap(L, i, j);
		}
	}
}



