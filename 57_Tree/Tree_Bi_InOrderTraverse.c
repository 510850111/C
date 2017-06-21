#include <windows.h>
#include <stdio.h>

typedef int TElemType;
typedef struct BiTNode
{
	TElemType data;
	struct BiTNode *LChild, *RChild;
} BiTNode, *BiTree;

/*ÖÐÐò±éÀúËã·¨*/
void InOrderTraverse(BiTree T);

int main()
{

	system("pause");
	return 0;
}

void InOrderTraverse(BiTree T)
{
	if(T == NULL) return;
	InOrderTraverse(T->LChild);
	printf("%d\n", T->data);
	InOrderTraverse(T->RChild);
}
