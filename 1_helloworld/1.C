#include <windows.h>
#include <stdio.h>

int main()
{
	int a, b, c, d, f;
	d  = 123;
	a = 123 / 100;
	b = (123 % 100) / 10;
	c = (123 % 100) % 10;
	f = a + b + c;
	printf("%f %f %f %f %f \n",d,a,b,c,f );
	system("pause");
	return 0;
}

