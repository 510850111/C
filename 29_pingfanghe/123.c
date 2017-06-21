#include <stdio.h>
#include<windows.h>
int main()
{
	int num1=0;
	int num2=0;
	int pingfanghe=0;

    printf("请输入一个整数:");
    scanf("%d",&num1);
    printf("请输入一个整数:");
    scanf("%d",&num2);
    pingfanghe=(num1+num2)*(num1+num2);
    if(pingfanghe>100)
        {
              printf("他们的平方和大于100\n");  
              printf("百位以上的数字是:%d\n",pingfanghe/100);
        }
    else
        {       printf("他们的平方和小于等于100\n");  
                printf("他们的和是:%d\n", num1+num2);
        }
    system ("pause");
    
    return 0;
}
