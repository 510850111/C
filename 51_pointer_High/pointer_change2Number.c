#include <windows.h>
#include <stdio.h>

int main()
{
	int X = 0, Y = 0;
	printf("Please Input 2 numbers:");
	scanf("%d %d", &X, &Y);
	void Change(int* , int* );
	Change(&X, &Y);
	printf("%d %d\n", X, Y );
	system("pause");
	return 0;
}

void Change(int *a, int *b)
{
	int Temp = *a;
	*a = *b;
	*b = Temp;
	printf("a=%d b=%d\n", *a,*b);
}
