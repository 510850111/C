#include <windows.h>
#include <stdio.h>
#define MaxSize 10

typedef struct
{
	int r[MaxSize + 1];//���ڴ洢Ҫ���������,r[0]��Ϊ��ʱ����
	int length;
} SqList;

void swap(SqList *L, int i , int j);
void BubbleSort(SqList *L);

int main()
{

	system("pause");
	return 0;
}

//����L������r�±�r��j ��ֵ
void swap(SqList *L, int i , int j)
{
	int temp = L->r[i];
	L -> r[i] = L ->r[j];
	L -> r[j] = temp;
}

//��˳���L����������,ð�����������
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



