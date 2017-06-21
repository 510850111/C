#include <windows.h>
#include <stdio.h>
/*树的孩子表示法结构定义*/
#define MaxTreeSize 100
typedef int TElemType;
typedef struct CTNode/*孩子结点*/
{
	int Child;
	struct CTNode *Next;
} *ChildPtr;

typedef struct /*表头结构*/
{
	TElemType Data;
	ChildPtr FirstChild;
} CTBox;

typedef struct /*树结构*/
{
	CTBox Nodes[MaxTreeSize];		/*结点数组*/
	int r, n;					/*根的位置和节点数*/
} CTree;
int main()
{

	system("pause");
	return 0;
}

