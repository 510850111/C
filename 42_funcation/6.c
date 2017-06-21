#include <windows.h>
#include <stdio.h>

void f(int a[])
{
    int s = 0;
    for (int i = 0; i < 5; i++) {
        s = s + a[i];
        printf("%d", s);
    }
}

int main()
{
    int a[5] = {1, 3, 5, 7, 9};
    system("pause");
    return 0;
}

