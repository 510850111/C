#include <windows.h>
#include <stdio.h>

int main()
{
	int i;
    int *p = (int *)malloc(10*sizeof(int));
    if(p == NULL)
    {
        printf("内存申请失败!\n");      
        return 0;
    }
    for ( i = 0; i < 10; i++)
    {
    	*(p + i) = i;
    }
    for ( i = 0; i < 10; i++)
    {
    	printf("%d \n",*(p+i) );
    }
    free(p);
    system("pause");
    return 0;
}

