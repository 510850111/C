#include<windows.h>
#include <stdio.h>
int main()
{
     int n;
    for(n=1;n<=10;n++)
    { 
    	if(n%3==0)continue;
        printf("%d",n);
    }
    system ("pause");
    return 0;
}
