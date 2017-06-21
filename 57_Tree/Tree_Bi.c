#include <windows.h>
#include <stdio.h>

#define OK 1
#define Error 0

typedef int TElemType;
typedef int Status;

typedef struct BiTreeNode
{
	TElemType	Data;
	struct BiTreeNode *LChild;
	struct BiTreeNode *RChild;
} Tree;

Status InitBiTree( Tree  *T);		/*初始化二叉树*/
Status DestroyBiTree(Tree *T);	/*销毁二叉树*/
Status CrearBiTree(Tree *T);		/*创建二叉树*/
bool 	BiTreeEmpty(Tree *T);	/*判断二叉树是否为空*/
int 	BiTreeDeep(Tree *T);		/*返回树的深度*/
TElemType Root(Tree *T);		/*返回二叉树的根*/

/*
	名称:
	功能:
	传入:	二叉链表地址
	传出:	OK / Error
*/



int main()
{

	system("pause");
	return 0;
}

/*
	名称:	InitBiTree(Tree *T)
	功能:	初始化二叉树
	传入:	二叉链表地址
	传出:	OK / Error
*/
Status InitBiTree(Tree *T)
{
	T = NULL;
	if (T )			return OK;
	else 			return Error;
}

/*
	名称:	DestroyBiTree(Tree *T)
	功能:	销毁二叉树
	传入:	二叉链表地址
	传出:	OK / Error
*/
Status DestroyBiTree(Tree *T)
{
	if (T)	/*判断是否为空树*/
	{
		if (T -> LChild)	DestroyBiTree(T -> LChild);
		if (T ->RChild)	DestroyBiTree(T -> RChild);
	}
	free(T);
	T = NULL;
	if (T)			return OK;
	else 			return Error;
}

/*
	名称:	CrearBiTree(Tree *T)
	功能:	按先序次序输入二叉树中节点的值，构造二叉链表示的二叉树T
	传入:	二叉链表地址
	传出:	OK / Error
*/
Status CrearBiTree(Tree *T)
{
	TElemType ch;

#ifdef CHAR
	scanf("%c", &ch);
#endif

#ifdef INT
	scanf("%d", &ch);
#endif

	if (ch == '#')	T = NULL;	/*空节点,不会有左右孩子了*/
	else
	{
		T = (Tree *) malloc (sizeof(struct BiTreeNode));
		if (!T) 	return Error;
		T -> Data = ch;
		CrearBiTree(T -> LChild);/*构造左子树*/
		CrearBiTree(T -> RChild);/*构造右子树*/
	}
}

/*
	名称:	BiTreeEmpty(Tree T)
	功能:	判断二叉树是否为空
	传入:	二叉链表
	传出:	true / false
*/
bool BiTreeEmpty(Tree *T)
{
	if (T)	return true;
	else 	return false;
}

/*
	名称:	BiTreeDeep(Tree T)
	功能:	返回树的深度
	传入:	二叉链表
	传出:	深度值
*/
int BiTreeDeep(Tree *T)
{
	int i, j;
	if (!T)	return 0;
	if (T -> LChild)	i = BiTreeDeep(T -> LChild);
	else 			i = 0;
	if (T -> RChild)	j = BiTreeDeep(T -> RChild);
	else 			j = 0;

	return ( i > j ) ? ( i + 1 ) : ( j + 1 );
}

/*
	名称:	Root(Tree *T)
	功能:	返回T的根
	传入:	二叉链表地址
	传出:	TElemType元素
*/
TElemType Root(Tree *T)
{
	if(BiTreeEmpty(T))	return 0;
	else 			return T -> Data;
}






