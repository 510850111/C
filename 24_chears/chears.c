#include <stdio.h>
#include<windows.h>
int main()
{
    int people=0;//����
    int sum=0;

    printf("����������:");
    scanf("%d",&people);
    	sum=(people*(people-1))/2;
    printf("����Ҫ��%d�α�.\n",sum);
    system ("pause");
    
    return 0;
}
