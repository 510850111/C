#include <windows.h>
#include <stdio.h>

int main()
{
    int sz[9] = {1,2,3,4,5,6,7,8,9};
    int *p1 = &sz[0];
    int *p2 = &sz[6];
    int d = p1 - p2;
    printf("p1=%X\n", p1);
    printf("p2=%X\n", p2);
    printf("*p1=%d\n", *p1);
    printf("*p2=%d\n", *p2);
    printf("d=%d\n", d);
    
    system("pause");
    return 0;
}

