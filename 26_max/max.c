#include <stdio.h>
#include<windows.h>
#include<math.h>

int maxcheck(int number1,int number2)
{
	//����������ڲ����жϻ���������������������ֵ�ĺ���.
	int absnumber=0;//��ž���ֵ.
	int sum =0;//�����������ֵ�ĺ�.
	int maxnumber=0;//������ֵ.

	absnumber=abs(number1-number2);//ʹ�þ���ֵ��������
	sum=number1+number2;//������������ֵ֮��
	maxnumber=(absnumber+sum)/2;
	return maxnumber;
}

int main()
{
	int input1=0;//����ĵ�һ����
	int input2=0;//����ĵڶ�����	

    printf("������һ������:  ");
    scanf("%d",&input1);
    printf("��������һ������:");
    scanf("%d",&input2);
    printf("��������������ֵΪ:%d\n",maxcheck(input1,input2));
    
    system ("pause");
    return 0;
}
