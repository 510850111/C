#include <stdio.h>
#include<windows.h>
int main()
{
    //�������������������.
	long num,num1,num10,num100;
	printf("Please input your number:");
    scanf("%ld",&num);
        num100=num / 100;//�����λ����
    	num10=(num-num100*100)/10;//����ʮλ����
        num1=num % 10;//�����λ����
            if(num1==0)
                {
                     if(num10==0)
                            {
                               printf("%d\n", num100);     
                            }
                        else
                            {
                                    printf("%d\n", num10*10+num100 );
                            }
                           
                }
            else
                {
                     num1=num % 10;
                     printf("%d\n", num1*100+num10*10+num100);   
                }

    system ("pause");
    return 0;
}
