#include <windows.h>
#include <stdio.h>

int main()
{
    short a=19889;
    short ls = 0,rs = 0;
    rs = a >> 4;
    ls = a << 4;
    printf("19889 << 4 = %d\n", rs);
    printf("19889 >> 4 = %d\n", ls);

    system("pause");
    return 0;
}

