#include <windows.h>
#include <stdio.h>

int Yun_Suan(int m,char Yun_Suan_Fu,int n);

int main()
{
    int m=0,n=0;//输入两个数
    char Yun_Suan_Fu='+';
    
    printf("请输入计算式: ");
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
		          printf("分母不能为零!\n");
		          main();
		     }
		     break;
		default :
			printf("请按格式输入,如:6*3\n");
			main();
		}
	return 0;
}
