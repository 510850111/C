#include<windows.h>
#include <stdio.h>
int main()
{
    long num=13;
    for (int i = 0; i < 13; i++)
    {
    	num=num*num;
    }
    printf("%d\n",num % 1000 );
    system ("pause");
    return 0;
}
