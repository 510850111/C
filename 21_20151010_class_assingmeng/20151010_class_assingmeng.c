#include <stdio.h>
#include<windows.h>
int main()
{
    int number;		//��ʼ����
    int num1;		//��λ
    int num10;		//ʮλ
    int num100;		//��λ
    int moded;
    int sum=0;
    
    printf("����������Ҫ��͵���: ");
    scanf("%d",&number);
     		while(number != 0)
 			 {
 			  moded = number % 10;
		 	  sum =moded + sum;
 			  number = number / 10;
 			 }
 	printf("sum=%d\n", sum);
 	system ("pause");
 	
	/*scanf("%d",&number);
    	num1  =number%10;
    	num10 =(number/10)%10;
    	num100=number/100;
    printf("��λ���ĺ�Ϊ:%d \n",num1+num10+num100 );
    system ("pause"); */
    return 0;
}
