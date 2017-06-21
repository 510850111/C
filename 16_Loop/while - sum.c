#include <stdio.h>
#include<windows.h>
int main()
{
	//计算从1加到N的程序
	system ("color a");
     int sum=0,i=0,n,t,time;
     printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
     printf("请输入您要显示的时间(秒): "); 
        scanf("%d",&t);  
     printf("请输入一个数字: ");
     	scanf("%d",&n);
     	 while(i<=n)
     	     {
     	        sum=sum+i;
     	        printf("i=%d   sum=%d   n=%d \n", i,sum,n);
                i=i+1;                
     	     }
     	printf("sum\\%d= %d\n", n,sum);
     printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    Sleep(t*1000);
    return 0;
}
