#include<windows.h>
#include <stdio.h>
int main()
{
    int num=0;
    printf("请输入一个数:");
    scanf("%d",&num);
    for (int i = 0; i <=num; i++)
    {
    	for (int j = num; j >i ; j--)
    	{
    		printf("%d", j);
    	}
    	printf("\n");
    }
    system ("pause");
    return 0;
}
