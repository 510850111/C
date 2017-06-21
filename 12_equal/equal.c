#include <stdio.h>
#include<windows.h>			
int main()//判断两个数是否相等
{
	int a,b;	
    system ("color a");
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("请输入一个数字 ");
     scanf("%d",&a);
    printf("请输入另外一个数字 ");
     scanf("%d",&b);
    	if(a!=b)
    	    {
    	      printf("这两个数不相等\n");      
    	    }
    	else
    	    {
    	      printf("这两个数相等\n");      
    	    }
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    Sleep(5000);
    return 0;
}
