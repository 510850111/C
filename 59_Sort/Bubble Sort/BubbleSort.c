#include <windows.h>
#include <stdio.h>
#define MaxSize 10

typedef struct
{
	int r[MaxSize + 1];
	int length;
} SqList;

void Swap(SqList *L, int i, int j);
void BubbleSort(SqList *L);
void InputData(SqList *L);
void ShowData(SqList *L);
int main()
{
	SqList L;
	InputData(&L);
	BubbleSort(&L);
	ShowData(&L);
	system("pause");
	return 0;
}

void Swap(SqList *L, int i, int j)
{
	int temp = L -> r[i];
	L -> r[i] = L -> r[j];
	L -> r[j] = temp;
}

//对顺序表L做冒泡排序
void BubbleSort(SqList *L)
{
	for (int i = 1; i < L -> length; i++)
	{
		for (int j = L -> length; j >= i; j--)	//注意j是从后往前循环
		{
			ShowData(L);
			
			if ( (L->r[j]) > (L->r[j + 1]) )	//若前者大于后者
				Swap(L, j, j + 1);		//交换两个值
		}
		printf("\n");
	}
}

void InputData(SqList *L)
{
	for (int i = 1; i < MaxSize; i++)
	{
		printf("r[%d] = ",i );
		scanf("%d",&L->r[i]);
		L -> length =i;
	}
}

void ShowData(SqList *L)
{
	for (int i = 1; i <= L -> length; i++)
	{
		printf("  %d  ",L->r[i] );
	}
	printf("\n");
}

