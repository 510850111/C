#include<windows.h>
#include<stdio.h>
int f()
{
    int x = 1;
    x = x +2;
    printf("%d", x);
}
int main()
{
    f();
    f();
    system ("pause");
    return 0;
}
