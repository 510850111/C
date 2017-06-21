//use for();
#include<windows.h>
#include <stdio.h>
int main()
{
    int i=0;
    int j=0;
    int num1=0;
    int num2=0;
     scanf("%d*%d",&num1,&num2);
   	 for ( j = 1; j <num2; j++)
   	 {
     	for ( i = 1; i < num1; i++)
     	{
     		printf("*");
     	}
    	printf("*\n");
   	 }
system ("pause");

    return 0;
}
