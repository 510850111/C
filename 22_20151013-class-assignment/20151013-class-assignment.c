#include <stdio.h>
#include<windows.h>
int scanf_s(int a)//�������η��ĺ���
{
    int num=0;
    num=a*a*a;
    return num;
}

int main()// �ж�һ�����ǲ���ˮ�ɻ���
{
    int number0=0;
    int number1=0;//number0��1������ͬ����,number1��������
    int moded=0;
    int sum=0;

    printf("������һ����λ��:");
    scanf("%d",&number1);
    number0=number1;
    	while(number1!=0)
    	    {
    			moded=number1%10;//��ȡ�����������һλ
    			sum=scanf_s(moded)+sum;
    			number1=number1/10;//�޳����һλ,����µ���

    	    }
    	if(sum==number0)//�ж��ǲ���ˮ�ɻ���
    	    {
    	            printf("���Ǹ�ˮ�ɻ���!\n");		
    	    }
    	else
    	    {
    	            printf("�ⲻ��ˮ�ɻ���!\n");
    	    }
    	system ("pause");
    	
    return 0;
}
