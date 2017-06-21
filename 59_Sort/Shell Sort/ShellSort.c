#include <windows.h>
#include <stdio.h>

#define MaxSize 10

typedef struct
{
	int Data[MaxSize + 1];
	int Length;
} SqList;

void ShellSort(SqList *L);
void ShowData(SqList *L);
void InputData(SqList *L);
int main()
{
	system ("Title Ï£¶ûÅÅÐò");
	SqList L;
	InputData(&L);
	ShellSort(&L);
	ShowData(&L);
	system("pause");
	return 0;
}

void ShellSort(SqList *L)
{
	int  j;
	int Incresement = L-> Length;
	do
	{
		Incresement = Incresement / 3    + 1;
		printf("Incresement = %d\n",Incresement );
		for (int i = Incresement + 1; i <= L->Length ; i++)
		{
			//printf(" i = %d   j = %d\n",i,j);
			if (L->Data[i] < L->Data[i - Incresement])
			{
				L->Data[0] = L-> Data[i];
				for ( j = i - Incresement; i > 0 && L->Data[0] < L->Data[j]; j -= Incresement)
				{
					L->Data[j + Incresement] = L->Data[j];
				}
				L->Data[j + Incresement] = L->Data[0];
				ShowData(L);
			}

		}
	} while (Incresement > 1);
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
