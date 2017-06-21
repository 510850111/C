#include <stdio.h>
#include <windows.h>	
int main()
{
	int a,b,c;
	system ("color a");
    printf("---------------------------\n");
    printf("这是一个加法计算器\n");
    printf("---------------------------\n");
    printf("请输入第一个数:\n");
    scanf("%d",&a);
    printf("请输入第二个数:\n");
    scanf("%d",&b);
    printf("---------------------------\n");
    c=a+b;
    printf("它们的和为: %d\n",c);
    printf("---------------------------\n");
    Sleep (5000);
    return 0;
} 
