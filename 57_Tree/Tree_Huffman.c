/*
着先通过 HuffmanTree() 函数构造哈夫曼树，
然后在主函数 main()中自底向上开始(也就是从数组序号为零的结点开始)向上层层判断，
若在父结点左侧，则置码为 0,
若在右侧,则置码为 1。
最后输出生成的编码

我们设置一个结构数组 HuffNode 保存哈夫曼树中各结点的信息。
根据二叉树的性质可知，具有n个叶子结点的哈夫曼树共有 2n-1 个结点，
所以数组 HuffNode 的大小设置为 2n-1 。
HuffNode 结构中有 Weight, lchild, rchild 和 Parent 域。
其中，Weight 域保存结点的权值,
 lchild 和 rchild 分别保存该结点的左、右孩子的结点在数组 HuffNode 中的序号，
 从而建立起结点之间的关系。
 为了判定一个结点是否已加入到要建立的哈夫曼树中，
 可通过 Parent 域的值来确定。
 初始时 Parent 的值为 -1。
 当结点加入到树中去时，
 该结点 parent 的值为其父结点在数组 HuffNode 中的序号，而不会是 -1 了。

求叶结点的编码：
该过程实质上就是在已建立的哈夫曼树中，
从叶结点开始，沿结点的双亲链域回退到根结点，
每回退一步，就走过了哈夫曼树的一个分支，从而得到一位哈夫曼码值。
由于一个字符的哈夫曼编码是从根结点到相应叶结点所经过的路径上各分支所组成的 0、1 序列，
因此先得到的分支代码为所求编码的低位，
后得到的分支代码为所求编码的高位码。
我们可以设置一个结构数组 HuffCode 用来存放各字符的哈夫曼编码信息，
数组元素的结构中有两个域：bit 和 start。
其中，域 bit 为一维数组，用来保存字符的哈夫曼编码，
start 表示该编码在数组 bit 中的开始位置。
所以，对于第 i 个字符，它的哈夫曼编码存放在 HuffCode[i].bit 中的从 HuffCode[i].start 到 n 的 bit 位中。

*/
#include <windows.h>
#include <stdio.h>
#include <conio.h>

#define Maxbit 100
#define MaxValue  10000
#define MaxLeaf     30
#define MaxNode    MaxLeaf*2 -1

typedef struct
{
	int Bit[Maxbit];
	int Start;
} HCodeType;	/* 编码结构体 */

typedef struct
{
	int Weight;	//权值
	int Parent;	//Parent 域
	int LChild;
	int RChild;
} HNodeType;	/* 结点结构体 */

void CreatHuffmanTree(HNodeType HuffNode[MaxNode], int n);	/* 构造一颗哈夫曼树 */


int main()
{
	HNodeType HuffNode[MaxNode];            /* 定义一个结点结构体数组 */
	HCodeType HuffCode[MaxLeaf],  cd;       /* 定义一个编码结构体数组， 同时定义一个临时变量来存放求解编码时的信息 */
	int i, j, c, p, n;
	printf ("请输入结点n:");
	scanf ("%d", &n);
	CreatHuffmanTree (HuffNode, n);

	for (i = 0; i < n; i++)
	{
		cd.Start = n - 1;
		c = i;
		p = HuffNode[c].Parent;
		while (p != -1)   /* 父结点存在 */
		{
			if (HuffNode[p].LChild == c)
				cd.Bit[cd.Start] = 0;
			else
				cd.Bit[cd.Start] = 1;
			cd.Start--;        /* 求编码的低一位 */
			c = p;
			p = HuffNode[c].Parent;  /* 设置下一循环条件 */
		} /* end while */

		/* 保存求出的每个叶结点的哈夫曼编码和编码的起始位 */
		for (j = cd.Start + 1; j < n; j++)
		{ HuffCode[i].Bit[j] = cd.Bit[j];}
		HuffCode[i].Start = cd.Start;
	} /* end for */

	/* 输出已保存好的所有存在编码的哈夫曼编码 */
	for (i = 0; i < n; i++)
	{
		printf ("%d 的哈夫曼编码为: ", i);
		for (j = HuffCode[i].Start + 1; j < n; j++)
		{
			printf ("%d", HuffCode[i].Bit[j]);
		}
		printf ("\n");
	}
	getch();
	return 0;



	system("pause");
	return 0;
}

void CreatHuffmanTree(HNodeType HuffNode[MaxNode], int n)	/* 构造一棵哈夫曼树 */
{
	/*
		i、j： 循环变量
		m1、m2中存放两个无父结点且结点权值最小的两个结点
	    	x1、x2：构造哈夫曼树不同过程中两个最小权值结点在数组中的序号。
	*/
	int i, j, m1, m2, x1, x2;

	/* 初始化存放哈夫曼树数组 HuffNode[] 中的结点 */
	for (i = 0; i < (2 * n) - 1; i++)
	{
		HuffNode[i].Weight = 0;
		HuffNode[i].Parent = -1;
		HuffNode[i].LChild = -1;
		HuffNode[i].RChild = -1;
	}
	/* 输入 n 个叶子结点的权值 */
	for (i = 0; i < n; i++)
	{
		printf("请输入第%d个叶子节点的权值:", i );
		scanf("%d", &HuffNode[i].Weight);
	}

	/* 循环构造 Huffman 树 */
	for (i = 0; i < n - 1; i++)
	{
		m1 = m2 = MaxValue;	 /* m1、m2中存放两个无父结点且结点权值最小的两个结点 */
		x1 = x2 = 0;
		/* 找出所有结点中权值最小、无父结点的两个结点，并合并之为一颗二叉树 */
		for (int j = 0; j < n + i; j++)
		{
			if (HuffNode[j].Weight < m1 && HuffNode[i].Parent == -1)
			{
				m2 = m1;
				x2 = x1;
				HuffNode[i].Weight = m1;
				x1 = j;
			}
			else if (HuffNode[j].Weight < m2 && HuffNode[j].Weight == -1)
			{
				m2 = HuffNode[j].Weight;
				x1 = j;
			}
			/* 设置找到的两个子结点 x1、x2 的父结点信息 */
			HuffNode[x1].Parent  = n + i;
			HuffNode[x2].Parent  = n + i;
			HuffNode[n + i].Weight = HuffNode[x1].Weight + HuffNode[x2].Weight;
			HuffNode[n + i].LChild = x1;
			HuffNode[n + i].RChild = x2;

			printf ("x1(%d).weight = %d , x2(%d).weight =%d in round(%d) \n", x1, HuffNode[x1].Weight, x2 , HuffNode[x2].Weight, i + 1); /* 用于测试 */
			printf ("-----------------------------------------------\n");

		}
	}
}


