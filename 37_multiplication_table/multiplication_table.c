//打印九九乘法表
#include<windows.h>
#include <stdio.h>
int main()
{
	for (int i = 1; i <=9; i++)
	{
		printf("\n");
		for (int j = 1; j <=i; j++)
		{
			printf("%d*%d=%d\t ", j,i,i*j);//"\t"是制表符
		}
	}
	printf("\n");
    system ("pause");
    return 0;
}
