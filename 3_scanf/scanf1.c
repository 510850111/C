#include <windows.h>
#include <stdio.h>
int main()
{
	int a,b,c;
	system("color a");
    printf("============================\n");
    printf("这是一个计算器\n");
    printf("============================\n");
    printf("请输入数字:\n");
    scanf ("%d %d",&a,&b);
    printf("============================\n");
    c=a+b;
    printf("%d+%d=%d\n",a,b,c );
    c=a-b;
    printf("%d-%d=%d\n",a,b,c );
    c=a*b;
    printf("%d*%d=%d\n",a,b,c );
    c=a/b;
    printf("%d/%d=%d\n",a,b,c );
    printf("============================\n");
    Sleep(5000);
    return 0;
} 
