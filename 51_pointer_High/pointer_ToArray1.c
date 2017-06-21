/*指向数组元素的普通指针变量*/
#include <windows.h>
#include <stdio.h>

int main()
{
    int a[2][3][4] = {{{1,2,3,4},{5,6,7,8},{9,10,11,12}},{{13,14,15,16},{17,18,19,20},{21,22,23,24}}};
    int *pa = a[0][0];
    for (int i = 0; i <2; i++ )
    {
    	for (int j = 0; j < 3; j++)
    	{
    		for (int k = 0; k < 4; k++)
    		{
    			printf("%d ", *(pa+i*3*4+j*4+k));
    		}
    	}
    }
    pa = a[0][0];
    printf("\n");
    for (int m = 0; m < sizeof(a)/sizeof(int); m++)
    {
    	printf("%d ", *pa);
    	pa++;
    }
    system("pause");
    return 0;
}

