#include <windows.h>
#include <stdio.h>
int main()
{
	int a,b,c;
	system("color a");
    printf("============================\n");
    printf("����һ��������\n");
    printf("============================\n");
    printf("����������:\n");
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
