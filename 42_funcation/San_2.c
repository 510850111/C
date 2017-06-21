#include <windows.h>
#include <stdio.h>

int main()
{
    int Total=0,people=5,count=0;
    int temp=0;
    for ( Total = 6;; Total++)
    {
    	temp=Total;
    	for (int j = 0; j < people; j++)
    	{
    		if(temp %5==1)
    		    {
    		      temp=(temp-1)*4/5;
    		      count++;
    		    }
    	}
    	if(count==people)
    	{
    		break;   
    	}
    	count=0;
    }

    system("pause");
    return 0;
}
