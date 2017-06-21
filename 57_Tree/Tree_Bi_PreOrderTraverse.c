#include <windows.h>
#include <stdio.h>
typedef char TElemType;

/*链式二叉树的二叉链表结点结构定义*/
typedef struct BiTNode	/*节点结构定义*/
{
	TElemType data;	/*结点数据*/
	struct BiTNode *LChild, *RChild;	/*左右孩子指针*/
} BiTNode, *BiTree;

void CreatBiTree(BiTree *T);/*创建二叉树,用'#'表示空*/
void PreOrderTraverse(BiTree T);/*前序遍历算法*/

int main()
{
	BiTree T;
	CreatBiTree(&T);
	PreOrderTraverse(T);
	system("pause");
	return 0;
}

void CreatBiTree( BiTree *T )/*创建二叉树,用'#'表示空*/
{
	TElemType Temp;
	printf("\n__func__\n");
	TElemType ch;
	printf("请输入数据:");
	scanf("%c", &ch);
	Temp = getchar();
	if (ch == '\\')	return;
	if (ch == '#')	*T = NULL;
	else
	{
		*T = (BiTree)malloc(sizeof(BiTNode));
		if (! *T) exit(1);
		(*T) -> data = ch;/*生成根节点*/
		CreatBiTree(&(*T) -> LChild);/*构造左子树*/
		CreatBiTree(&(*T) -> RChild);/*构造右子树*/
	}
}

void PreOrderTraverse(BiTree T)	/*前序遍历算法*/
{
	if (T == NULL	) return;
	printf("data:%c\n", T->data);
	PreOrderTraverse(T->LChild);
	PreOrderTraverse(T->RChild);

}
