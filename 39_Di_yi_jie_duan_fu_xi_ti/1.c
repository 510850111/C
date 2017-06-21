#include<windows.h>
#include <stdio.h>
int found(long number);
int main()
{
    int yueshu=0;
    int number=0;
    printf("请输入一个数");
    scanf("%d",&number);
    yueshu=found(number);
    printf("在100-999中max=%d\n",yueshu);
    system ("pause");
    return 0;
}
int found(long number)
{
	for (int i = 999; i >=100; i--)
	{
		if(number%i==0)
		    {
		      return i;      
		    }
		
	}
}
