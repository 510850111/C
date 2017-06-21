#include <windows.h>
#include <stdio.h>

void f(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int x = 3, y = 4;
    f(x,y);
    printf("%d,%d", x, y);
    system("pause");`
    return 0;
}
