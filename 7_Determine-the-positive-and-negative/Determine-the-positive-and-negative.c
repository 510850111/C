#include <stdio.h>
#include <windows.h>
int main()
{
	int a;
	system ("color a");
	system ("title [runing]");
    printf("===========================\n");
    printf("请输入一个数字: ");
    scanf ("%d",&a);
    	if (a>0)
    	{   
    		printf("您输入的数大于零");
    	}
    	if (a<0)
    	{
    		printf("您输入的数小于零");
       	}
       	if (a==0)
       	{
       		printf("您输入的数等于零\n");

       	}
       printf("===========================\n");
    Sleep(5000);
    return 0;
}
