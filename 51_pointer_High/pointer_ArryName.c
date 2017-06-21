#include <windows.h>
#include <stdio.h>

int main()
{
    int A[2][3][4]={0};
    printf("A is %p\n", A);
    printf("A[0] is %p\n", A[0]);
    printf("A[0][0] is %p\n", A[0][0]);
    printf("A[0][0][0] is %p\n", A[0][0][0]);
    printf("&A[0][0][0] is %p\n", &A[0][0][0]);
    system("pause");
    return 0;
}

