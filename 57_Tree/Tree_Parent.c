#include <windows.h>
#include <stdio.h>

/*树的双亲表示法节点结构定义*/

#define MaxTreeSize 100
typedef int TElemType;

typedef struct PTNode	/*结点结构*/
{
	TElemType Data;	/*节点数据*/
	int Parent;		/*双亲位置*/
} PTNode;

typedef struct 				/*树结构*/
{
	PTNode Nodes[MaxTreeSize];	/*结点数组*/
	int r, n;					/*根的位置(r)和结点数(n)*/
}Tree;

int main()
{

	system("pause");
	return 0;
}

