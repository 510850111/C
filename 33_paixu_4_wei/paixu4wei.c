#include <stdio.h>
#include<windows.h>
void minnumber(int a1,int b1,int c1,int d1);
void maxnumber(int a,int b,int c,int d);//�ڴ����������޷���ֵ�ĺ���

int main()
{
	int a,b,c,d;
    printf("������һ����: ");
    scanf("%d",&a);
    printf("������һ����: ");
    scanf("%d",&b);
    printf("������һ����: ");
    scanf("%d",&c);
    printf("������һ����: ");
    scanf("%d",&d);
    maxnumber(a,b,c,d);
    minnumber(a,b,c,d);
    system ("pause");
    
    return 0;
}

void maxnumber(int a,int b,int c,int d)
	{
		int max=0;
		if(a-b>=0)
		    {
		       max=a;
		       if(max-c>=0)
		           {
		               if(max-d>=0)
		                       {
		                          printf("���ֵΪ:%d\n",max );     
		                       }
		                else
		                       {
		                          printf("���ֵΪ:%d\n",d );
		                       }
		           }
		       else
		           {
		              max=c;
		              if(max-d>=0)
		                       {
		                          printf("���ֵΪ:%d\n",max );     
		                       }
		              else
		                       {
		                          printf("���ֵΪ:%d\n",d );
		                       }
		           }
		       
		    }
		else
		    {
		       max=b;
		        if(max-c>=0)
		           {
		               if(max-d>=0)
		                       {
		                          printf("���ֵΪ:%d\n",max );     
		                       }
		                else
		                       {
		                          printf("���ֵΪ:%d\n",d );
		                       }
		           }
		       else
		           {
		              max=c;
		              if(max-d>=0)
		                       {
		                          printf("���ֵΪ:%d\n",max );     
		                       }
		              else
		                       {
		                          printf("���ֵΪ:%d\n",d );
		                       }
		           }

		    }
		
	}

void minnumber(int a1,int b1,int c1,int d1)
	{
		int min=0;
		if(a1-b1<=0)
		    {
		       min=a1;
		       if(min-c1<=0)
		           {
		               if(min-d1<=0)
		                       {
		                          printf("��СֵΪ:%d\n",min );     
		                       }
		                else
		                       {
		                          printf("��СֵΪ:%d\n",d1 );
		                       }
		           }
		       else
		           {
		              min=c1;
		              if(min-d1<=0)
		                       {
		                          printf("��СֵΪ:%d\n",min );     
		                       }
		              else
		                       {
		                          printf("��СֵΪ:%d\n",d1 );
		                       }
		           }
		       
		    }
		else
		    {
		       min=b1;
		        if(min-c1<=0)
		           {
		               if(min-d1<=0)
		                       {
		                          printf("��СֵΪ:%d\n",min );     
		                       }
		                else
		                       {
		                          printf("��СֵΪ:%d\n",d1 );
		                       }
		           }
		       else
		           {
		              min=c1;
		              if(min-d1<=0)
		                       {
		                          printf("��СֵΪ:%d\n",min );     
		                       }
		              else
		                       {
		                          printf("��СֵΪ:%d\n",d1 );
		                       }
		           }

		    }
		
	}

