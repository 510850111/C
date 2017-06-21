#include <windows.h>
#include <stdio.h>

int main()
{
    int sz[9] = {1,2,3,4,5,6,7,8,9};
    int* p = &sz[0];
    for (int i = 0; i < 9; i++)
    {
    	printf("%d ", *p);
    	p++;
    }
    system("pause");
    return 0;
}

