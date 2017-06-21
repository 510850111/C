#include <windows.h>
#include <stdio.h>
#include "conio.h"
int main()
{
    int num = 9;
    int* pInt  = & num;
    printf("指针pInt的值为:%X\n", pInt);
    printf("指针pint所指向的内存区域为:%d\n", *pInt);
    *pInt = 10;
    printf("num=%d\n", num);
    system("pause");
    return 0;
}

	