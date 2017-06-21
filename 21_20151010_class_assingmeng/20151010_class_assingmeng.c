#include <stdio.h>
#include<windows.h>
int main()
{
    int number;		//初始变量
    int num1;		//个位
    int num10;		//十位
    int num100;		//百位
    int moded;
    int sum=0;
    
    printf("请输入您想要求和的数: ");
    scanf("%d",&number);
     		while(number != 0)
 			 {
 			  moded = number % 10;
		 	  sum =moded + sum;
 			  number = number / 10;
 			 }
 	printf("sum=%d\n", sum);
 	system ("pause");
 	
	/*scanf("%d",&number);
    	num1  =number%10;
    	num10 =(number/10)%10;
    	num100=number/100;
    printf("三位数的和为:%d \n",num1+num10+num100 );
    system ("pause"); */
    return 0;
}
