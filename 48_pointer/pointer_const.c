#include <windows.h>
#include <stdio.h>

int main()
{
    int num = 10;
    int num2 = 100;
    int num3 = 1000;
    int* const pIntnum = &num;/*��ֹ��дָ���ֵ*/
    /* 
    	�޷���дpintnum������ζ���޷�ͨ��������ø�дpintnumָ��ı���
    	eg(�Ϸ�����):
    		num = 10;
    		*pIntnum = 5;

    */
    const int* pIntnum2 = &num2;/*��ֹ��д�������*/
    /*
		��ֹ��д������ò�����ζ�Ÿ��ڴ�����޷�����д,ͨ�����������ʺ͸�д���ڴ������ǺϷ���
		eg(�Ϸ�����):
			num2 = 8;
			
    */
    const int* const pInt = &num3;/*��ֹ��дָ��,��ֹ��д�������*/
    system("pause");
    return 0;
}

