//�û�����һ������N���������ͼ��
#include<windows.h>
#include <stdio.h>
int main()
{
    int num;
    printf("������һ����: ");
    scanf("%d",&num);
    for (int i = 1; i <=num*2; i=i+2)
    {
    	printf("\n");
    	for (int j = 1; j<i; j++)
    	{
    		printf("*");
    	}
    	printf("*");
    }
    printf("\n");
	system ("pause");

    return 0;
}
