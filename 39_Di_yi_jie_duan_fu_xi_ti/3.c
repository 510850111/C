#include<windows.h>
#include <stdio.h>
int main()
{
    int book=5;
    int count=0;
    int i,j,k;
    for( i = 1; i <= book ; i++)
    {
    	for ( j = 1;  j <= book ; j++)
    	{
    		for ( k = 1; k <=book ; k++)
    		{
    			if(i!=j && i!=k && k!=j)
    		    {
    		        count++;
    				printf("A=%d,B=%d,C=%d\n", i,i,k); 
    		    }
    		
    			

    		}
    	}
    }
    printf("Ò»¸öÓÐ%d\n", count);
    system ("pause");
    return 0;
}
