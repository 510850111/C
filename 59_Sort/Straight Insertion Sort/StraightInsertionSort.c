#include <windows.h>
#include <stdio.h>

#define MaxSize 10

typedef struct
{
	int Data[MaxSize + 1];
	int Length;
} SqList;

void InsertionSort(SqList *L);
void ShowData(SqList *L);
void InputData(SqList *L);
int main()
{
	system ("Title ÷±Ω”≤Â»Î≈≈–Ú");
	SqList L;
	InputData(&L);
	InsertionSort(&L);
	ShowData(&L);
	system("pause");
	return 0;
}

void InsertionSort(SqList *L)
{
	int j;
	for (int i = 2; i <= L->Length; i++)
	{
		if (L->Data[i]  < L->Data[i - 1])
		{
			L->Data[0] = L->Data[i];
			for ( j = i - 1; L->Data[j] > L->Data[0]; j--)
				L->Data[j + 1] = L->Data[j];
			L->Data[j + 1] = L->Data[0];

		}
		ShowData(L);
	}
}

void ShowData(SqList *L)
{
	for (int i = 1; i < L->Length; i++)
		printf(" %d ", L->Data[i] );
	printf("\n");
}

void InputData(SqList *L)
{
	L->Length = 1 ;
	for (int i = 1; i < MaxSize; i++)
	{
		printf("Data[%d] = ", i);
		scanf("%d", &L->Data[i]);
		L->Length++;
	}
	//printf("Length = %d \n",L->Length );

}
