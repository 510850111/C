#include <windows.h>
#include <stdio.h>
#define int ElemType
typedef struct Node
{
	ElemType Data;
	struct Node *Next;
}Node;
typedef struct Node *LinkList;

int main()
{
    
    system("pause");
    return 0;
}

