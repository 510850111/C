#include <stdio.h>
#include<windows.h>
int main()
{
	//�����1�ӵ�N�ĳ���
	system ("color a");
     int sum=0,i=0,n,t,time;
     printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
     printf("��������Ҫ��ʾ��ʱ��(��): "); 
        scanf("%d",&t);  
     printf("������һ������: ");
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
