#include <windows.h>
#include <stdio.h>

/*����˫�ױ�ʾ���ڵ�ṹ����*/

#define MaxTreeSize 100
typedef int TElemType;

typedef struct PTNode	/*���ṹ*/
{
	TElemType Data;	/*�ڵ�����*/
	int Parent;		/*˫��λ��*/
} PTNode;

typedef struct 				/*���ṹ*/
{
	PTNode Nodes[MaxTreeSize];	/*�������*/
	int r, n;					/*����λ��(r)�ͽ����(n)*/
}Tree;

int main()
{

	system("pause");
	return 0;
}

