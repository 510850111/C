#include <stdio.h>
#include <windows.h>
#define num 13
int main()//在屏幕上打印杨辉三角形
{
    int i;
    int j;
    int a[num][num];
        for (i = 0; i < num; i++)
        {
            a[i][0] = 1;
            a[i][i] = 1;
        }
        for (i = 2; i < num; i++)
        {
            for (j = 1; j < i; j++)
             {
                a[i][j] = a[i-1][j-1] + a[i-1][j];
             }
        }
        for (i = 0; i < num; i++)
        {
            for (j = 0; j < (num * 2 - 2 * i); j++)
            {
                printf(" ");
            }
        for (j = 0; j <= i; j++)
            {
                printf("%4d", a[i][j]);
            }
        printf("\n");
    }
    system ("pause");
    
    return 0;
}
