//计算从1加到N的程序
	#include <stdio.h>
	int main()
	{
	    int An,sum;
	    	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	    	printf("请输入您要求和的数字: ");
	    		scanf("%d",&An);
	    			sum=((1+An)*An)/2; //等差数列求和公式
	    		printf("sum[%d]=%d\n",An,sum );
	    
	    return 0;
	}
