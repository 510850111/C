#include<windows.h>
#include<stdio.h>
int work(int x)
{
	for(int i=0;i<5;i++)
	{
    	x=x+x/50+x/200;
    	x-=1000;
	}
	return x;
}
int main()
{
	int i=0;
	for(i=0;i<=10000;i++)
	{
    	if(work(i)==0)
    	{
    	printf("%d",i);
		}
	}
	system ("pause");
	return 0;
}
