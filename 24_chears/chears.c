#include <stdio.h>
#include<windows.h>
int main()
{
    int people=0;//人数
    int sum=0;

    printf("请输入人数:");
    scanf("%d",&people);
    	sum=(people*(people-1))/2;
    printf("共计要碰%d次杯.\n",sum);
    system ("pause");
    
    return 0;
}
