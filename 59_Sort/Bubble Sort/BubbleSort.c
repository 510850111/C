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

//��˳���L��ð������
void BubbleSort(SqList *L)
{
	for (int i = 1; i < L -> length; i++)
	{
		for (int j = L -> length; j >= i; j--)	//ע��j�ǴӺ���ǰѭ��
		{
			ShowData(L);
			
			if ( (L->r[j]) > (L->r[j + 1]) )	//��ǰ�ߴ��ں���
				Swap(L, j, j + 1);		//��������ֵ
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

