#include <windows.h>
#include <stdio.h>

int main()
{
    int *p = (int *)malloc(10*sizeof(int));
    if(p == NULL)
    {
        printf("�ڴ�����ʧ��\n");      
    }
    printf("P��ֵΪ%p,size = %d\n", p,sizeof(p));
    free(p);
    printf("Free��P��ֵΪ%p,size = %d\n", p,sizeof(p));
    system("pause");
    return 0;
}

