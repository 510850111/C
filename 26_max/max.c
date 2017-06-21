#include <stdio.h>
#include<windows.h>
#include<math.h>

int maxcheck(int number1,int number2)
{
	//这个函数是在不用判断或条件语句下用来返回最大值的函数.
	int absnumber=0;//存放绝对值.
	int sum =0;//存放两个数的值的和.
	int maxnumber=0;//存放最大值.

	absnumber=abs(number1-number2);//使用绝对值函数计算
	sum=number1+number2;//计算两个数的值之和
	maxnumber=(absnumber+sum)/2;
	return maxnumber;
}

int main()
{
	int input1=0;//输入的第一个数
	int input2=0;//输入的第二个数	

    printf("请输入一个整数:  ");
    scanf("%d",&input1);
    printf("请输入另一个整数:");
    scanf("%d",&input2);
    printf("您输入的数中最大值为:%d\n",maxcheck(input1,input2));
    
    system ("pause");
    return 0;
}
