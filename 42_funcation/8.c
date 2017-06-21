#include <windows.h>
#include <stdio.h>
void f(int a[])
{
    int s = 1;
    for (int i = 0; i< 5; i++) 
    {
        s = s * a[i];
        printf(" %d ", s);
    }
}
int main()
{
    int x[5] = {1, 2, 3, 4, 5};
    f(x);
    system("pause");
    return 0;
}
