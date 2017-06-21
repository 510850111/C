#include <windows.h>
#include <stdio.h>
#include <time.h>

#define arrlenth 10
int array[arrlenth];

int make_number();
int paixu();
int print_paixu();
int main()
{
    make_number();
    paixu();
    print_paixu();
    system("pause");
    return 0;
}

int make_number()
{
	srand(time(0));
	for (int i = 0; i < arrlenth; i++)	
	{
		array[i]=rand() % 100;
	}
	return 0;
}
int paixu()
{
	int max=0;
	int k=0,temp=1;

	for (int i = 0; i < arrlenth; i++)
	{
		for (int j = 0; j < arrlenth; j++)
		{
			if(array[max]>array[max+1])
			    {
			      max=j+1;      
			    }
			else
			    {
			      temp=array[j];
		       	  array[j]=array[j+1];
		          array[j+1]=temp;      
			    }
		}
	}
	
}

int print_paixu()
{
	for (int i = 0; i < arrlenth; i++)
	{
		printf("%d,	",array[i] );
	}
	return 0;
}
