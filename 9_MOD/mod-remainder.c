#include <stdio.h>
#include<windows.h>
int main()//��������������ж����ض�λ���ϵ�ֵ,��ʮλ`��λ��.
{
    int a,b,c;
    system ("color a");
    printf("++++++++++++++++++++++++++++++++++++++++++++++\n������һ����: ");
        scanf("%d",&a);
    printf("��������Ҫ�ж�����λ�ϵ���(������10������): ");
        scanf("%d",&b);
     c=a%b;
     	printf("�����������%d ,����%dλ�ϵ���Ϊ%d\n",a,b,c);
    printf("++++++++++++++++++++++++++++++++++++++++++++++\n");
    Sleep(5000);
    return 0;
    /*���Ǹ�ʧ��Ʒ......*/
}