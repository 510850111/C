#include <stdio.h>
#include<windows.h>
int scanf_s(int a)//计算三次方的函数
{
    int num=0;
    num=a*a*a;
    return num;
}

int main()// 判断一个数是不是水仙花数
{
    int number0=0;
    int number1=0;//number0和1都是相同的数,number1用来运算
    int moded=0;
    int sum=0;

    printf("请输入一个三位数:");
    scanf("%d",&number1);
    number0=number1;
    	while(number1!=0)
    	    {
    			moded=number1%10;//获取输入数的最后一位
    			sum=scanf_s(moded)+sum;
    			number1=number1/10;//剔除最后一位,变成新的数

    	    }
    	if(sum==number0)//判断是不是水仙花数
    	    {
    	            printf("这是个水仙花数!\n");		
    	    }
    	else
    	    {
    	            printf("这不是水仙花数!\n");
    	    }
    	system ("pause");
    	
    return 0;
}
