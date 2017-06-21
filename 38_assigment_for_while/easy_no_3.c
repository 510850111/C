#include<windows.h>
#include <stdio.h>
int main()
{
    int x=-1;
do
{
	printf("x=%d\n", x);
    x=x*x;
 	printf("%d\n",x );
}while (!x);	

system ("pause");
    return 0;
}
