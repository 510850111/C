#include <windows.h>
#include <stdio.h>

int Yun_Suan(int m,char Yun_Suan_Fu,int n);

int main()
{
    int m=0,n=0;//����������
    char Yun_Suan_Fu='+';
    
    printf("���������ʽ: ");
    scanf("%d%c%d",&m,&Yun_Suan_Fu,&n);
    Yun_Suan(m,Yun_Suan_Fu,n);
    system("pause");
    return 0;
}

int Yun_Suan(int m,char Yun_Suan_Fu,int n)
{
	switch ( Yun_Suan_Fu )
		{
		case '+': 
			printf("%d+%d=%d\n",m,n,m+n);
			break;
		case '-': 
			printf("%d-%d=%d\n",m,n,m-n); 
			break;
		case '*': 
			printf("%d*%d = %d\n",m,n,m*n);
			break;
		case '/': 
			if(n != 0)
		    {
		         printf("%d/%d=%d\n",m,n,m/n); 
		         break;   
		    }
		     else
		     {
		          printf("��ĸ����Ϊ��!\n");
		          main();
		     }
		     break;
		default :
			printf("�밴��ʽ����,��:6*3\n");
			main();
		}
	return 0;
}
