#include <windows.h>
#include <stdio.h>
#include <time.h>
#define arrlenth 10

int array[arrlenth];
int make_number();
int max_find();

int main()
{
    make_number();
    max_find();
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

int max_find()
{
	int maxnumber=array[0];
	for (int i = 0; i < arrlenth; i++)
	{
		if(array[i] >= maxnumber)
		    {
		          maxnumber=array[i];
		    }
	}
	printf("max=%d\n", maxnumber);
	return 0;
}
