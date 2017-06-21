/*
设计一个算法，判断一个字符序列是不是回文
（回文是指一个字符序列以中间字符为基准两边字符完全相同，
例如”abcddcba”,”xyzazyx” 均是回文，“abc”,”abbc”不是回文）

提示：以中间字符为基准把字符串的前一半字符入栈，
然后出栈并与字符串的后一半字符比较是否相等，
若全部相等则是回文，否则不是。
若是回文函数返回1，否则返回0.
函数原型：
int Palindrome(char str[],int n)；


需求:
	A:判断在数组栈内的字符串是否是回文数

分析:
	A:可以建立一个固定大小的数组,使用gets或者fgets函数输入
	B:建立一个指针,遍历整个数组,得到整个栈的长度
	C:建立一个判断机制:
		1.若为奇数,直接把长度除以2得到HalfLength,取前HalfLength和后HalfLength入A栈和B栈,中间那个字符直接舍弃.
		2.若为偶数,直接把长度除以2得到HalfLength,取前HalfLength和后HalfLength入A栈和B栈.
	D:建立一个循环结构,依次弹出A栈和B栈的数据,
		1.如果弹出的数据相同,继续弹出下一个直到末尾,返回值为1
		2.如果弹出的数据不同,立马结束比较,返回值为0
	







*/




#include <windows.h>
#include <stdio.h>
#define MaxNum 1024
typedef  int elemtype;

typedef struct
{
	elemtype stack[MaxNum];
	int Top;
} Stack;

void InitStack(Stack *S);/*初始化栈*/
int StackEmpty(Stack *S);/*检查栈是否为空,为空返回1,不为空返回0*/
int Push(Stack *S, elemtype e);/*把元素e入S栈*/
int Pop(Stack *S, elemtype *e);/*出栈,把top下的第一个元素赋值给e,然后删除e,top下移*/
elemtype GetTop(Stack *S);/*得到top元素*/
int length(Stack *S);/*得到栈的元素个数*/
int ClearStack(Stack *S);/*清空栈*/
void Display(Stack *S, int Top);/*打印所有元素*/

int main()
{
	Stack S;
	InitStack(&S);
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
		printf("上溢!\n");
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
		printf("下溢!\n");
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

