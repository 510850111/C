#include <stdio.h>
#include<windows.h>
int main()//这个程序是比较两个数的大小.
{	
	system ("color a");
	int a,b;
    printf("..................................................\n请输入一个数: ");
    	scanf("%d",&a);
    printf("请输入另一个数: ");
    	scanf("%d",&b);
    if(a>b)
        {
          printf("最大的是:%d\n", a);      
        }
    else
        {
          if(a<b)
            {
              printf("最大的是:%d\n", b);      
            }
          else
            {
              printf("两个数一样大.\n");      
            }
                      
        }
        printf("..................................................\n");
    Sleep(5000);
    return 0;
}
