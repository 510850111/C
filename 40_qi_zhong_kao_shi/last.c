#include<windows.h>
#include <stdio.h>
int main()
{
    int A=0;
    int B=0;
    int C=0;
 	int count=0;

 	for (int i = 0; i < 21; i++)
 	{
 		if(A==B && B==C)
 		    {
 		         count++;   
 		         printf("A=B=C=%d,count+1\n", A);
 		    }

 		else if(A != B && B!=C && A!= C)
 				 count+=3;
 				 printf("A=%d,B=%d,C=%d,count+3\n",A,B,C );
 		else 
 			{
 				 count+=2;
 				 printf("A=%d,B=%d,C=%d,count+2\n", A,B,C);
 			}
 		A+=5;
 		B+=6;
 		C+=7;
 	}
	printf("%d\n", count);
	system ("pause");
    return 0;
}
