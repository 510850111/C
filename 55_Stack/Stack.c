#include <windows.h>
#include <stdio.h>
#define MaxNum 512
typedef  int elemtype;

typedef struct
{
	elemtype stack[MaxNum];
	int Top;
} Stack;

void InitStack(Stack *S);
int StackEmpty(Stack *S);
int Push(Stack *S, elemtype e);
int Pop(Stack *S, elemtype e);
elemtype GetTop(Stack *S);
int length(Stack *S);
int ClearStack(Stack *S);
void Display(Stack *S, int Top);

int main()
{
	Stack Stack;
	InitStack(&Stack);
	Push(&Stack,6);
	printf("Top = %d \n\n", GetTop(&Stack));
	printf("length = %d\n\n", length(&Stack));
	printf("length2 = %d\n\n", length(&Stack));
	system("pause");
	return 0;
}

void InitStack(Stack *S)
{
	S->Top = 0;
}

int StackEmpty(Stack *S)
{
	if (S->Top == 0) return 1;
	else 	return 0;
}

int Push(Stack *S, elemtype e)
{
	if (S->Top == MaxNum)
	{
		printf("ÉÏÒç!\n");
		return 0;
	}
	S->stack[S->Top] = e;
	S->Top++;
	return 1;
}

int Pop(Stack *S, elemtype e)
{
	if (S->Top == 0)
	{
		printf("ÏÂÒç!\n");
		return 0;
	}
	S->Top--;
	e = S->stack[S->Top];
	return 0;
}

elemtype GetTop(Stack *S)
{
	if (S->Top == 0) return 0;
	else return (S->stack[--S->Top]);
}

int length(Stack *S)
{
	return S->Top;
}

int ClearStack(Stack *S)
{
	S->Top = 0;
}

void Display(Stack *S, int Top)
{
	int i;
	for (i = Top; i >= 0; i--)
	{
		printf("%d  ", S->stack[i]);
	}
}

