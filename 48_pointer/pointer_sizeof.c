#include <windows.h>
#include <stdio.h>

int main()
{
	short Snum = 100;
    long Dnum  = 100;
    int num = 99;
    short* pShort = &Snum;
    long* plong = &Dnum;
    int* pInt = &num;
    printf("pSnum=%X,size=%d\n",Snum,sizeof(pShort));
    printf("plong=%X,size=%d\n", plong,sizeof(plong));
    printf("pInt=%X,size=%d\n", pInt,sizeof(pInt));

    system("pause");
    return 0;
}

