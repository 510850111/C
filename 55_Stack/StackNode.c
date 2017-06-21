#include <windows.h>
#include <stdio.h>
#define OK 1
#define Error 0

typedef int SElemType;
typedef int Status;

typedef struct StackNode
{
	SElemType Data;
	struct StackNode *Next;
} StackNode, *LinkStackNodePtr;

typedef struct LinkStack
{
	LinkStackNodePtr Top;
	int Count;
} LinkStack;

Status Push(LinkStack *S, SElemType e); /*对于链栈的Push操作,假设元素为e,新节点为s,Top为栈顶指针*/
Status Pop(LinkStack *S, SElemType *e);
Status StackEmpty(LinkStack *S);
int main()
{

	system("pause");
	return 0;
}

Status Push(LinkStack *S, SElemType e)
{
	LinkStackNodePtr s = (LinkStackNodePtr)malloc(sizeof(StackNode));
	s->Data = e;
	s->Next = S->Top;/*把当前栈顶元素赋值给新节点的直接后继*/
	S->Top = s;
	S->Count++;
	return OK;
}

Status Pop(LinkStack *S, SElemType *e)
{
	/*用变量p来存储要删除的栈顶结点,将栈顶指针下移一位,最后释放p

	  若栈内有元素,则删除S的栈顶元素,用e返回它的Data值,并返回OK;
	  若栈内无元素,返回Error;
	*/

	LinkStackNodePtr p;			
	if (StackEmpty(S) ) return Error;
	*e = S->Top->Data;
	p = S->Top;
	S->Top = S->Top->Next;
	free(p);
	S->Count--;
	return OK;
}

Status StackEmpty(LinkStack *S)
{
	if (S->Top != NULL) return OK;
	else 	return Error;
}
