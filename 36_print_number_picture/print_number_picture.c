//用户输入一个整数N，输出数字图形
#include<windows.h>
#include <stdio.h>
int main()
{
	int num;
	printf("请输入一个数: ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		printf("\n");
		for (int j = 1; j < i; j++)
		{
			printf("*");
		}
		printf("*");
	}
	printf("\n");
	system ("pause");
	return 0;
}
