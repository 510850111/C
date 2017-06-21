#include<windows.h>
#include <stdio.h>
int avr(int a,int b);

int main()
{
	int a,b;
    printf("请输入两个数,用空格隔开:");
    scanf("%d%d",&a,&b);
    printf("average=%d\n",avr(a,b)); 
    system ("pause");
    
    return 0;
}

int avr(int a,int b)
{
	return (a+b)/2;
}
