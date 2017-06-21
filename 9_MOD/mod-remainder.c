#include <stdio.h>
#include<windows.h>
int main()//这个程序是用来判断在特定位数上的值,如十位`百位等.
{
    int a,b,c;
    system ("color a");
    printf("++++++++++++++++++++++++++++++++++++++++++++++\n请输入一个数: ");
        scanf("%d",&a);
    printf("请输入您要判断在哪位上的数(请输入10进制数): ");
        scanf("%d",&b);
     c=a%b;
     	printf("您输入的数是%d ,它在%d位上的数为%d\n",a,b,c);
    printf("++++++++++++++++++++++++++++++++++++++++++++++\n");
    Sleep(5000);
    return 0;
    /*这是个失败品......*/
}
