#include <stdio.h>
#include<windows.h>
int main()
{
	int num1=0;
	int num2=0;
	int pingfanghe=0;

    printf("������һ������:");
    scanf("%d",&num1);
    printf("������һ������:");
    scanf("%d",&num2);
    pingfanghe=(num1+num2)*(num1+num2);
    if(pingfanghe>100)
        {
              printf("���ǵ�ƽ���ʹ���100\n");  
              printf("��λ���ϵ�������:%d\n",pingfanghe/100);
        }
    else
        {       printf("���ǵ�ƽ����С�ڵ���100\n");  
                printf("���ǵĺ���:%d\n", num1+num2);
        }
    system ("pause");
    
    return 0;
}
