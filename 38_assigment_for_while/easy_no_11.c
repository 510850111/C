#include <stdio.h>
#include<windows.h>
int main()
{
int 	x=7;
int	 i=0;
int 	count =0;
for (int i = 1;i<=100 ; i++)
        {
        	if(i%x != 0 && i % 10 !=7 && (int)(i/10) !=7 )
        	    {
        	       ++count;
        	       printf("%d\n", i);
        	    }
        }
    printf("%d\n", count);
    system ("pause");
    
    return 0;
}
