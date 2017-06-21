#include<windows.h>
#include <stdio.h>
int main()
{
	int i,j,count=0;
    for(i=5;i;i--)
    {
   		 for(j=0;j<4;j++)
    		{
    			count=count+1;
   			 }
   	}
    printf("%d\n", count);
    system ("pause");
    return 0;
}
