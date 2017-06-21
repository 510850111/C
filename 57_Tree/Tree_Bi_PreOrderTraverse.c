#include <windows.h>
#include <stdio.h>
typedef char TElemType;

/*��ʽ�������Ķ���������ṹ����*/
typedef struct BiTNode	/*�ڵ�ṹ����*/
{
	TElemType data;	/*�������*/
	struct BiTNode *LChild, *RChild;	/*���Һ���ָ��*/
} BiTNode, *BiTree;

void CreatBiTree(BiTree *T);/*����������,��'#'��ʾ��*/
void PreOrderTraverse(BiTree T);/*ǰ������㷨*/

int main()
{
	BiTree T;
	CreatBiTree(&T);
	PreOrderTraverse(T);
	system("pause");
	return 0;
}

void CreatBiTree( BiTree *T )/*����������,��'#'��ʾ��*/
{
	TElemType Temp;
	printf("\n__func__\n");
	TElemType ch;
	printf("����������:");
	scanf("%c", &ch);
	Temp = getchar();
	if (ch == '\\')	return;
	if (ch == '#')	*T = NULL;
	else
	{
		*T = (BiTree)malloc(sizeof(BiTNode));
		if (! *T) exit(1);
		(*T) -> data = ch;/*���ɸ��ڵ�*/
		CreatBiTree(&(*T) -> LChild);/*����������*/
		CreatBiTree(&(*T) -> RChild);/*����������*/
	}
}

void PreOrderTraverse(BiTree T)	/*ǰ������㷨*/
{
	if (T == NULL	) return;
	printf("data:%c\n", T->data);
	PreOrderTraverse(T->LChild);
	PreOrderTraverse(T->RChild);

}
