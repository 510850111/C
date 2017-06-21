#include <windows.h>
#include <stdio.h>

int main()
{
    int *p = (int *)malloc(10*sizeof(int));
    if(p == NULL)
    {
        printf("内存申请失败\n");      
    }
    printf("P的值为%p,size = %d\n", p,sizeof(p));
    free(p);
    printf("Free后P的值为%p,size = %d\n", p,sizeof(p));
    system("pause");
    return 0;
}

