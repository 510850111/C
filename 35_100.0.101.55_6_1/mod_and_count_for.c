#include <stdio.h>
#include<windows.h>

void found(int m,int n,int x);

int main()//�ҳ�M~N���ܹ���X��������������ͳ�Ƹ���
{
    int M=0;//����ķ�Χ���1
    int N=0;//����ķ�Χ���2
    int X=0;//������

    printf("�����뷶Χ,�м��� - ����: ");
    scanf("%d-%d",&M,&N);
    printf("��ϣ�����ܱ�ʲô��������: ");
    scanf("%d",&X);
    printf("\n");
    found(M,N,X);
    system ("pause");
    
    return 0;
}

void found(int m,int n,int x)
	  {
	  	int count=0;//����
	  	int temp=0;//�����м����,��ֹ��Χ����
	  	if(n<m)//������Χ��ֵ
        	{
              temp=m;
              m=n;
              n=temp;
        	}
        for (int i = m;i<=n ; i++)
        {
        	if(i%x == 0)
        	    {
        	       ++count;
        	       printf("%d ",i );
        	    }
        	
        }
        printf("\n\n========================================\n");
        printf("   ��%d��%d��,�ܹ���%d�����Ĺ���%d��   	\n",m,n,x,count );
        printf("========================================\n");
	  }
