#include<windows.h>
#include <stdio.h>
int fun(int num);
int age=10;
int main()
{
	int num;
	printf("请输入是第几个人: ");
	scanf("%d",&num);
    age=fun(num);
    printf("%d \n", age);
    system ("pause");
    return 0;
}

int fun(int num)
{
	if(num==1)
	    {
	      return 10;      
	    }
	age=2+fun(num -1);
	return age;
}
