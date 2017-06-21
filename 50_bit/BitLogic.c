#include <windows.h>
#include <stdio.h>

int main()
{
    short czs1 = 521;
    short czs2 = 123;
    short ResAnd,ResOr,ResNot,Res;
    ResAnd = czs1 & czs2;
    ResOr = czs1 | czs2;
    ResNot = ~czs1;
    Res = czs1 ^ czs2;
    printf("ResAnd = %d  ResOr = %d  ResNot = %d   Res= %d\n",ResAnd,ResOr,ResNot,Res );
    system("pause");
    return 0;
}

