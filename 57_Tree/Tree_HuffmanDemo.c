#include <windows.h>
#include <stdio.h>

#define OK 1
#define Error 0

typedef int TElemType;
typedef int Status;


typedef struct
{
	TElemType data;
	struct Tree *Lchild;
	struct Tree *Rchild;
} Tree;

Status InitBiTree(Tree *T);

int main()
{

	system("pause");
	return 0;
}

Status InitBiTree(Tree *T)
{
	if (T)	return OK;
	
}