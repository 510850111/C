#include <windows.h>
#include <stdio.h>
#define MaxSize 10

typedef struct
{
	int Array[MaxSize + 1];
	int length;
} SqList;

void SelectSort(SqList *L);
void swap(SqList *L, int i, int Min);
void InputData(SqList *L);
void ShowData(SqList *L);

int main()
{
	SqList L;
	InputData(&L);
	SelectSort(&L);
	system("pause");
	return 0;
}

void SelectSort(SqList *L)
{
	int Min = 1;
	for (int i = 1; i < L->length; i++)
	{
		for (int j = i + 1; j < L->length; j++)
		{
			if (L->Array[Min] > L->Array[j])
			{	
				Min = j;
				//ShowData(L);
			}
		}
		if (i != Min)	swap(L, i, Min);
		//ShowData(L);
		//printf("\n");
	}
}

void swap(SqList *L, int i, int Min)
{
	L->Array[i] = (L->Array[i]) ^ (L->Array[Min]);
	L->Array[Min] = (L->Array[Min]) ^ (L->Array[i]);
	L->Array[i] = (L->Array[i]) ^ (L->Array[Min]);
	ShowData(L);
}

void InputData(SqList *L)
{
	int count = 1;
	while (count <= 10 || L->Array[count - 1] == -1)
	{
		printf("Count = %d Array[%d]=", count , count);
		scanf("%d", &L->Array[count]);
		count++;
	}
	L->length = count;
	ShowData(L);
}

void ShowData(SqList *L)
{
	for (int i = 1; i < L->length; i++)
	{
		printf(" %d ", L->Array[i] );
	}
	printf("\n");
}
