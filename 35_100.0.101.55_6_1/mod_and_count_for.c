#include <stdio.h>
#include<windows.h>

void found(int m,int n,int x);

int main()//找出M~N中能够被X整除的数，并且统计个数
{
    int M=0;//输入的范围界点1
    int N=0;//输入的范围界点2
    int X=0;//整除数

    printf("请输入范围,中间用 - 隔开: ");
    scanf("%d-%d",&M,&N);
    printf("您希望它能被什么数整除呢: ");
    scanf("%d",&X);
    printf("\n");
    found(M,N,X);
    system ("pause");
    
    return 0;
}

void found(int m,int n,int x)
	  {
	  	int count=0;//计数
	  	int temp=0;//增设中间变量,防止范围出错
	  	if(n<m)//交换范围的值
        	{
              temp=m;
              m=n;
              n=temp;
        	}
        for (int i = m;i<=n ; i++)
        {
        	if(i%x == 0)
        	    {
        	       ++count;
        	       printf("%d ",i );
        	    }
        	
        }
        printf("\n\n========================================\n");
        printf("   从%d到%d中,能够被%d整除的共有%d个   	\n",m,n,x,count );
        printf("========================================\n");
	  }
