#include <windows.h>
#include <stdio.h>

typedef int TElemType;
typedef struct BiTNode
{
	TElemType data;
	struct BiTNode *LChild, *RChild;
} BiTNode, *BiTree;

void PostOrderTraverse(BiTree T);/*后序遍历*/

int main()
{

	system("pause");
	return 0;
}

void PostOrderTraverse(BiTree T)/*后序遍历*/
{
	if (T == NULL) return;
	PostOrderTraverse(T -> LChild);
	PostOrderTraverse(T -> RChild);
	printf("data: %d\n", T -> data);
}
