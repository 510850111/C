#include <stdio.h>
#include<windows.h>
int main()
{
    int basic_wages=500;//��������
    float sales_wages=0.00;//���۶�
    float deduction_wages=0.00;//���
    float total_wages=0.00;//�ܹ���

    printf("���������۶�: ");
    scanf("%f",&sales_wages);

       if (sales_wages<0) 
       {
        printf("�㻹Ƿ��˾��Ǯ!!!\n");
        system ("pause");
        return 0;//�˳�����
    	}

    	switch((int)(sales_wages/1000))//�����۶����1000��ת��Ϊ����,�����۶���1858Ԫ,����1000����1.858,ת��Ϊ������1
    	 {
    		case 0: //���۶�С��1000Ԫ
    		case 1: //���۶���1000-1999Ԫ֮��
    		case 2: //���۶���2000-2999Ԫ֮��
    			total_wages=basic_wages+deduction_wages;
    			printf("��Ļ���������%dԪ,�����%.2fԪ,�ܹ�����%.2fԪ\n",basic_wages,deduction_wages,total_wages);
    			break;
    		case 3: //���۶���3000-3999Ԫ֮��
    		case 4: 
    		case 5: 
    			deduction_wages=sales_wages*0.08;
    			total_wages=deduction_wages+basic_wages;
    			printf("��Ļ���������%dԪ,�����%.2fԪ,�ܹ�����%.2fԪ\n",basic_wages,deduction_wages,total_wages);
    			break;
    		case 6: 
    		case 7: 
    		case 8: 
    		case 9: 
    		case 10: 
    			deduction_wages=sales_wages*0.10;
    			total_wages=deduction_wages+basic_wages;
    			printf("��Ļ���������%dԪ,�����%.2fԪ,�ܹ�����%.2fԪ\n",basic_wages,deduction_wages,total_wages);
    			break;
    		default://���۶����10000Ԫ
    			deduction_wages=sales_wages*0.12;
    			total_wages=deduction_wages+basic_wages;
    			printf("��Ļ���������%dԪ,�����%.2fԪ,�ܹ�����%.2fԪ\n",basic_wages,deduction_wages,total_wages);
    			break;
    	 }

    system ("pause");
    	
    return 0;
}
