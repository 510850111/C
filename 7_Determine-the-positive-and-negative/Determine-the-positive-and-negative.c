#include <stdio.h>
#include <windows.h>
int main()
{
	int a;
	system ("color a");
	system ("title [runing]");
    printf("===========================\n");
    printf("������һ������: ");
    scanf ("%d",&a);
    	if (a>0)
    	{   
    		printf("���������������");
    	}
    	if (a<0)
    	{
    		printf("���������С����");
       	}
       	if (a==0)
       	{
       		printf("���������������\n");

       	}
       printf("===========================\n");
    Sleep(5000);
    return 0;
}
