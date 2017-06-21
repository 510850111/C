#include <windows.h>
#include <stdio.h>
typedef struct LNode
{
	int data;
	struct LNode *Next;
} LNode, *LinklistNode;

LNode *Craet()
{
	LNode *Head = NULL;
	LNode *Tail = NULL;
	Head = (LNode*)malloc(sizeof(LNode));
	if (Head == NULL)
	{
		printf("内存申请失败!\n");
		return NULL;
	}
	Head->Next = NULL;
	Tail = Head;
	LNode *pNew = NULL;
	int data = 0;
	while (1)
	{
		printf("请输入数据:");
		scanf("%d", &data);
		pNew  = (LNode*)malloc(sizeof(LNode*));
		if(pNew == NULL )
		{
		    printf("内存申请失败!\n");
		    return NULL;      
		}
		pNew->data = data;
		pNew->Next = NULL;
		Tail->Next = pNew;
		Tail = pNew;
	}
	pNew = Head;
	Head = Head->Next;
	free(pNew);
	return Head;

}
int main()
{

	system("pause");
	return 0;
}

