#include <windows.h>
#include <stdio.h>
union ComputerInfo
{
	char Typeid[20];
	float price;
}comp1,comp2;

int main()
{
    union ComputerInfo comp1={7000};
    int type = 0;
    printf("��װ��(0) Ʒ�ƻ�(1) ? ");
    scanf("%d",&type);
    if(type == 0)
    {
        printf("price:\n");
        scanf("%f",&comp1.price);
        printf("price=%.1f\n",comp1.price);      
    }
    if(type == 1)
    {
        printf("�ͺ�:\n");      
        scanf("%s",&comp1.Typeid);
        printf("�ͺ���:%s\n", comp1.Typeid);    
    }
    
    system("pause");
    return 0;
}

