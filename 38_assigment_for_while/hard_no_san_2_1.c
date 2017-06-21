#include <stdio.h>
#include<windows.h>
int gcd (int a,int b)
{  
	if(a%b==0)
	{
       return b;   
	}
	else  
    {
		return gcd(b,a%b);
	}	
  }

int main()/*本程序采用递归算法*/
{
 	int m,n,t1;
 	printf("请输入两个数,中间用空格隔开:");
 	scanf("%d%d",&m,&n);
	t1=gcd(m,n);
	printf("最大公约数是%d\n",t1);/*最大公约数*/
 	printf("最小公倍数%d\n",m*n/t1);/*最小公倍数*/
 	getch();
 	system ("pause");
 	return 0;
 }
