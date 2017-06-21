#include<windows.h>
#include <stdio.h>
int main()
{
	int  i=0; 
	int n=0;
	int sum=0;
	int ji_shu=1;
	int ou_shu=0;
	scanf ("%d",&n);
	while(i<=n)
	   {
	     ou_shu=ou_shu+i;
	     i=i+2;
	   }
	   printf("ou_shu=%d\n", ou_shu);
	i=0;
	while(i<=n)
	        {
	          ji_shu=ji_shu+i;//1//3
	          i=i+3;//2//4
	        }
	printf("ji_shu=%d\n", ji_shu);
	sum=ji_shu - ou_shu;
	printf ( "%d\n" , sum );
	system ("pause");
    return 0;
}
