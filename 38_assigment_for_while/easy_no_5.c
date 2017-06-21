#include<windows.h>
#include <stdio.h>
int main()
{
    int x=3,y=6,a=0;
    while (x++!=(y-=1))//1
    {
    	printf("x=%d,y=%d\n", x,y);
        3!=5;
        printf("---\n");
        a+=1;
        if (y<x) break;
printf("nobreak\n");
    }
    printf("x=%d,y=%d,a=%d\n",x,y,a);
    system ("pause");
    return 0;
}
