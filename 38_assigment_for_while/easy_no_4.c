#include<windows.h>
#include <stdio.h>
int main()
{
     int y=10;
    	do
    	{
        	y--;//10
    	}while(--y);

    printf("%d\n",y--);//0
	system ("pause");
    return 0;
}
