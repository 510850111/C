#include<windows.h>
#include <stdio.h>
int jisuan(float a,char b,float c);

int main()
{
	float num1=0;
	float num2=0;
	char op;//�����

    printf("���������ʽ: ");
    scanf("%f%c%f",&num1,&op,&num2);
    printf("%f%d%f=%f",num1,op,num2,jisuan(num1,op,num2));
    system ("pause");
    
    return 0;
}

/*int jisuan(float a,char b,float c)
	{	
		switch (b)
			{
			case '+':
				printf("%f%c%f=%f\n", a,b,c,a+b);
				break;
			case '-':
				printf("%f%c%f=%f\n", a,b,c,a-b);
				break;
			case '*':
				printf("%f%c%f=%f\n", a,b,c,a*b);
				break;
			case '/': 
				if(c!=0)
			   	 {
			    	printf("%f%c%f=%f\n", a,b,c,a/b);	     
			     }
				else
			     {
			     	printf("��ĸ����Ϊ��!\n");    
			     }
				break;			
	
			default :
			printf("������ĸ�ʽ����ȷ!\n");
			}
	}
*/
float jisuan(float a,char b,float c)
{
	switch (b)
	{
		case '+':	return a+c;					
		case '-':	return a-c;
		case '*':	return a*c;
		case '/': 	
					if(c==0)
					{
					  printf("C��Ӧ��Ϊ0 !!!\n");      
					}
					else
					{
					        return a/c;
					}
					
		default   :
			printf("����Ƿ�!\n");
	}
	return 0;
}

