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

Status InitBiTree( Tree  *T);		/*��ʼ��������*/
Status DestroyBiTree(Tree *T);	/*���ٶ�����*/
Status CrearBiTree(Tree *T);		/*����������*/
bool 	BiTreeEmpty(Tree *T);	/*�ж϶������Ƿ�Ϊ��*/
int 	BiTreeDeep(Tree *T);		/*�����������*/
TElemType Root(Tree *T);		/*���ض������ĸ�*/

/*
	����:
	����:
	����:	���������ַ
	����:	OK / Error
*/



int main()
{

	system("pause");
	return 0;
}

/*
	����:	InitBiTree(Tree *T)
	����:	��ʼ��������
	����:	���������ַ
	����:	OK / Error
*/
Status InitBiTree(Tree *T)
{
	T = NULL;
	if (T )			return OK;
	else 			return Error;
}

/*
	����:	DestroyBiTree(Tree *T)
	����:	���ٶ�����
	����:	���������ַ
	����:	OK / Error
*/
Status DestroyBiTree(Tree *T)
{
	if (T)	/*�ж��Ƿ�Ϊ����*/
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
	����:	CrearBiTree(Tree *T)
	����:	�������������������нڵ��ֵ�������������ʾ�Ķ�����T
	����:	���������ַ
	����:	OK / Error
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

	if (ch == '#')	T = NULL;	/*�սڵ�,���������Һ�����*/
	else
	{
		T = (Tree *) malloc (sizeof(struct BiTreeNode));
		if (!T) 	return Error;
		T -> Data = ch;
		CrearBiTree(T -> LChild);/*����������*/
		CrearBiTree(T -> RChild);/*����������*/
	}
}

/*
	����:	BiTreeEmpty(Tree T)
	����:	�ж϶������Ƿ�Ϊ��
	����:	��������
	����:	true / false
*/
bool BiTreeEmpty(Tree *T)
{
	if (T)	return true;
	else 	return false;
}

/*
	����:	BiTreeDeep(Tree T)
	����:	�����������
	����:	��������
	����:	���ֵ
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
	����:	Root(Tree *T)
	����:	����T�ĸ�
	����:	���������ַ
	����:	TElemTypeԪ��
*/
TElemType Root(Tree *T)
{
	if(BiTreeEmpty(T))	return 0;
	else 			return T -> Data;
}






