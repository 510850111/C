#include <stdio.h>
#include<windows.h>			
int main()//�ж��������Ƿ����
{
	int a,b;	
    system ("color a");
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("������һ������ ");
     scanf("%d",&a);
    printf("����������һ������ ");
     scanf("%d",&b);
    	if(a!=b)
    	    {
    	      printf("�������������\n");      
    	    }
    	else
    	    {
    	      printf("�����������\n");      
    	    }
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    Sleep(5000);
    return 0;
}
