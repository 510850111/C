#include <windows.h>
#include <stdio.h>
#include "conio.h"
int main()
{
    int num = 9;
    int* pInt  = & num;
    printf("ָ��pInt��ֵΪ:%X\n", pInt);
    printf("ָ��pint��ָ����ڴ�����Ϊ:%d\n", *pInt);
    *pInt = 10;
    printf("num=%d\n", num);
    system("pause");
    return 0;
}

	