#include <stdio.h>
#include<windows.h>
int mod(int a,int b )
{
	int number=0;//��¼����
	int exchange=0;//��¼��ֵ
		if(a==0||b==0)		return exchange;     
		if(a>=b) 
		    {
		      number=a/b;
		      exchange=a-b*number;
		    }
		else
		    {
		      number=b/a;
		      exchange=b-a*number;     
		    }
	return exchange;	
}

int main()
{
    int ipt0=0;//input
    int ipt1=0;

    printf("������һ������:");
    scanf("%d",&ipt0);
    printf("��������һ������");
    scanf("%d",&ipt1);
    	printf("����Ϊ: %d\n", mod(ipt0,ipt1));
    system ("pause");
    
    return 0;
}
