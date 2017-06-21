#include <windows.h>
#include <stdio.h>
#include <time.h>
#define arrlenth 10

int array[arrlenth];
int make_number();
int max_min_find();

int main()
{
    make_number();
    max_min_find();
    for (int j = 0; j < arrlenth; j++)
	{
		printf(" %d ", array[j]);
	}
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

int max_min_find()
{
	int temp=0,k=0;
	for (int i = 0; i < arrlenth-1; i++)
	{
		if(array[i]>array[i+1])
		    {
		       temp=array[i];
		       array[i]=array[i+1];
		       array[i+1]=temp;
		       k=1;
		    }
		if(k!=0)
		    {
		        max_min_find();    
		    }
	}
	return 0;
}
