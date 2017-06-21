#include <stdio.h>
#include<windows.h>
int main()//使用高斯公式计算从1+n的值....不就是等差数列求和么.......0.0b
{
	int input=0;
	int sum=0;

    printf("请输入一个整数值:");
    scanf("%d",&input);
		sum=((1+input)*input)/2; //等差数列求和公式
    printf("使用高斯公式计算的结果为:%d\n",sum);
    system ("pause");
    
    return 0;
}
