#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<windows.h>
int main()//�����������������ַ���ֵ�ĺ�,����,a=0.01,b=0.02,c=0.03.......�Դ�����,z=0.26
{
   char input[255]="";     //������ַ���
   int i=0 ;            //ѭ������
   int sum=0;           //���յ�ֵ
   int lenth=0;         //�ַ�������
   int charnumber=0;

   printf("������Сд�ַ�����");
   scanf("%s",&input);
   lenth=strlen(input); //��ȡ�ַ�������
        while(i<lenth)
            {
                charnumber=input[i]-96;   
                sum=sum+charnumber;
                i=i+1;
            }      
    printf("���ռ����ֵΪ��%.3f\n",sum*0.01); //ֻ��ʾС������λ
    system ("pause");      
    return 0;
}
