//�û�����һ������N���������ͼ��
#include<windows.h>
#include <stdio.h>
int main()
{
	int num;
	printf("������һ����: ");
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
