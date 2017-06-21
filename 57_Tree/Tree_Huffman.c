/*
����ͨ�� HuffmanTree() �����������������
Ȼ���������� main()���Ե����Ͽ�ʼ(Ҳ���Ǵ��������Ϊ��Ľ�㿪ʼ)���ϲ���жϣ�
���ڸ������࣬������Ϊ 0,
�����Ҳ�,������Ϊ 1��
���������ɵı���

��������һ���ṹ���� HuffNode ������������и�������Ϣ��
���ݶ����������ʿ�֪������n��Ҷ�ӽ��Ĺ����������� 2n-1 ����㣬
�������� HuffNode �Ĵ�С����Ϊ 2n-1 ��
HuffNode �ṹ���� Weight, lchild, rchild �� Parent ��
���У�Weight �򱣴����Ȩֵ,
 lchild �� rchild �ֱ𱣴�ý������Һ��ӵĽ�������� HuffNode �е���ţ�
 �Ӷ���������֮��Ĺ�ϵ��
 Ϊ���ж�һ������Ƿ��Ѽ��뵽Ҫ�����Ĺ��������У�
 ��ͨ�� Parent ���ֵ��ȷ����
 ��ʼʱ Parent ��ֵΪ -1��
 �������뵽����ȥʱ��
 �ý�� parent ��ֵΪ�丸��������� HuffNode �е���ţ��������� -1 �ˡ�

��Ҷ���ı��룺
�ù���ʵ���Ͼ������ѽ����Ĺ��������У�
��Ҷ��㿪ʼ���ؽ���˫��������˵�����㣬
ÿ����һ�������߹��˹���������һ����֧���Ӷ��õ�һλ��������ֵ��
����һ���ַ��Ĺ����������ǴӸ���㵽��ӦҶ�����������·���ϸ���֧����ɵ� 0��1 ���У�
����ȵõ��ķ�֧����Ϊ�������ĵ�λ��
��õ��ķ�֧����Ϊ�������ĸ�λ�롣
���ǿ�������һ���ṹ���� HuffCode ������Ÿ��ַ��Ĺ�����������Ϣ��
����Ԫ�صĽṹ����������bit �� start��
���У��� bit Ϊһά���飬���������ַ��Ĺ��������룬
start ��ʾ�ñ��������� bit �еĿ�ʼλ�á�
���ԣ����ڵ� i ���ַ������Ĺ������������� HuffCode[i].bit �еĴ� HuffCode[i].start �� n �� bit λ�С�

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
} HCodeType;	/* ����ṹ�� */

typedef struct
{
	int Weight;	//Ȩֵ
	int Parent;	//Parent ��
	int LChild;
	int RChild;
} HNodeType;	/* ���ṹ�� */

void CreatHuffmanTree(HNodeType HuffNode[MaxNode], int n);	/* ����һ�Ź������� */


int main()
{
	HNodeType HuffNode[MaxNode];            /* ����һ�����ṹ������ */
	HCodeType HuffCode[MaxLeaf],  cd;       /* ����һ������ṹ�����飬 ͬʱ����һ����ʱ���������������ʱ����Ϣ */
	int i, j, c, p, n;
	printf ("��������n:");
	scanf ("%d", &n);
	CreatHuffmanTree (HuffNode, n);

	for (i = 0; i < n; i++)
	{
		cd.Start = n - 1;
		c = i;
		p = HuffNode[c].Parent;
		while (p != -1)   /* �������� */
		{
			if (HuffNode[p].LChild == c)
				cd.Bit[cd.Start] = 0;
			else
				cd.Bit[cd.Start] = 1;
			cd.Start--;        /* �����ĵ�һλ */
			c = p;
			p = HuffNode[c].Parent;  /* ������һѭ������ */
		} /* end while */

		/* ���������ÿ��Ҷ���Ĺ���������ͱ������ʼλ */
		for (j = cd.Start + 1; j < n; j++)
		{ HuffCode[i].Bit[j] = cd.Bit[j];}
		HuffCode[i].Start = cd.Start;
	} /* end for */

	/* ����ѱ���õ����д��ڱ���Ĺ��������� */
	for (i = 0; i < n; i++)
	{
		printf ("%d �Ĺ���������Ϊ: ", i);
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

void CreatHuffmanTree(HNodeType HuffNode[MaxNode], int n)	/* ����һ�ù������� */
{
	/*
		i��j�� ѭ������
		m1��m2�д�������޸�����ҽ��Ȩֵ��С���������
	    	x1��x2���������������ͬ������������СȨֵ����������е���š�
	*/
	int i, j, m1, m2, x1, x2;

	/* ��ʼ����Ź����������� HuffNode[] �еĽ�� */
	for (i = 0; i < (2 * n) - 1; i++)
	{
		HuffNode[i].Weight = 0;
		HuffNode[i].Parent = -1;
		HuffNode[i].LChild = -1;
		HuffNode[i].RChild = -1;
	}
	/* ���� n ��Ҷ�ӽ���Ȩֵ */
	for (i = 0; i < n; i++)
	{
		printf("�������%d��Ҷ�ӽڵ��Ȩֵ:", i );
		scanf("%d", &HuffNode[i].Weight);
	}

	/* ѭ������ Huffman �� */
	for (i = 0; i < n - 1; i++)
	{
		m1 = m2 = MaxValue;	 /* m1��m2�д�������޸�����ҽ��Ȩֵ��С��������� */
		x1 = x2 = 0;
		/* �ҳ����н����Ȩֵ��С���޸�����������㣬���ϲ�֮Ϊһ�Ŷ����� */
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
			/* �����ҵ��������ӽ�� x1��x2 �ĸ������Ϣ */
			HuffNode[x1].Parent  = n + i;
			HuffNode[x2].Parent  = n + i;
			HuffNode[n + i].Weight = HuffNode[x1].Weight + HuffNode[x2].Weight;
			HuffNode[n + i].LChild = x1;
			HuffNode[n + i].RChild = x2;

			printf ("x1(%d).weight = %d , x2(%d).weight =%d in round(%d) \n", x1, HuffNode[x1].Weight, x2 , HuffNode[x2].Weight, i + 1); /* ���ڲ��� */
			printf ("-----------------------------------------------\n");

		}
	}
}


