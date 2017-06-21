#include <windows.h>
#include <stdio.h>
#include <time.h>
#define arrlenth 10

int array[arrlenth];
int make_number();
int min_find();

int main()
{
    make_number();
    min_find();
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

int min_find()
{
	int minnumber=array[0];
	for (int i = 0; i < arrlenth; i++)
	{
		if(array[i] <= minnumber)
		    {
		          minnumber=array[i];
		    }
	}
	printf("max=%d\n", minnumber);
	return 0;
}
