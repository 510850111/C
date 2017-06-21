#include <windows.h>
#include <stdio.h>

#define MaxSize 10
typedef bool Status;

typedef struct
{
	int Data[MaxSize + 1];
	int Length;
} SqList;

void BubbleSort2(SqList *L);
void Swap(SqList *L, int i, int j);
void InputData(SqList *L);
void ShowData(SqList *L);

int main()
{
	SqList L;
	InputData(&L);
	BubbleSort2(&L);
	ShowData(&L);
	system("pause");
	return 0;
}

void BubbleSort2(SqList *L)
{
	Status flag = true;
	for (int i = 1; i < L->Length  && flag == true ;  i++)
	{
		flag = false;
		for (int j = L-> Length; j >= i; j++)
		{
			if (L->Data[j] > L->Data[j + 1])
			{
				Swap(L, j, j + 1);
				flag = true;
			}
		}
	}
}

void Swap(SqList *L, int i, int j)
{
	int temp = L -> Data[i];
	L -> Data[i] = L -> Data[j];
	L -> Data[j] = temp;
}

void InputData(SqList *L)
{
	for (int i = 1; i < MaxSize; i++)
	{
		printf("Data[%d] = ", i );
		scanf("%d", &L->Data[i]);
		L -> Length = i;
	}
}

void ShowData(SqList *L)
{
	for (int i = 1; i <= L -> Length; i++)
	{
		printf("  %d  ", L->Data[i] );
	}
	printf("\n");
}



