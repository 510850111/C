#include <windows.h>
#include <stdio.h>

int main()
{
    int sz[9] = {1,2,3,4,5,6,7,8,9};
    for (int* p = &sz[0]; p <= &sz[8]; p++)
    {
    	printf("%d \n", *p);
    }
    system("pause");
    return 0;
}

