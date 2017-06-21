#include <stdio.h>
#include<windows.h>
void fun(int *m,int *n)
{
    *m = *n;
    *n = *m;
}
int main()
{
    int x = 5, y = 7;
    fun(&x,&y);
    printf("%d,%d", x, y);
    system ("pause");
    return 0;
}
	