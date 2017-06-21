#include <windows.h>
#include <stdio.h>
typedef struct LNode
{
	int data;
	struct LNode *Next;
} LNode, *LinkList;

LinkList Creat()
{
	LinkList L, p;
	int i;
	L = (LinkList)malloc(sizeof(LNode));
	L -> Next = NULL;
	printf("Please Input Your data of Count:");
	for (scanf("%d", &i); i > 0; i--)
	{
		p = (LinkList)malloc(sizeof(LNode));
		printf("Please Input Your Count(%d) of data:", i);
		scanf("%d", &p -> data);
		p -> Next = L ->Next;
		L -> Next = p;
	}
void Show(LinkList L)
{
	int i = 0;
	LinkList p;
	p = L->Next;
	while (p)
	{
		i++;
		printf("data = %d    i = %d\n", p -> data,i );
		p = p->Next;
	}}

}

void Rrbuild(LinkList L)
{
	
}

int main()
{
	LinkList L = NULL;
	L = Creat();
	Show(L);
	system("pause");
	return 0;
}

