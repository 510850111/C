int divisor (int a,int b)    /*�Զ��庯�������������Լ��*/
{
  int  temp;          /*�������ͱ���*/
  if(a<b)             /*ͨ���Ƚ�����������е����ֵ����Сֵ*/
    { temp=a;a=b;b=temp;} /*�����м����������������*/
   while(b!=0)           /*ͨ��ѭ����������������ֱ������Ϊ0*/
    {
      temp=a%b;
      a=b;              /*������ֵ����*/
      b=temp;
    }
  return (a);            /*�������Լ�������ú�����*/ 
}
int multiple (int a,int b)  /*�Զ��庯������������С������*/
{
  int divisor (int a,int b); /*�Զ��庯������ֵ����*/
  int temp;
  temp=divisor(a,b);  /*�ٴε����Զ��庯����������Լ��*/
  return  (a*b/temp); /*������С�������������������������*/
}
#include <stdio.h>   
#include<windows.h>
int main()  
{
    int m,n,t1,t2;     /*�������ͱ���*/
      printf("������������,�м��ÿո����:"); /*��ʾ������������*/
      scanf("%d %d",&m,&n);              /*ͨ���ն�����������*/
      t1=divisor(m,n);                    /*�Զ�����������*/
      t2=multiple(m,n);                 /*�Զ�����������*/
      printf("���Լ���� %d\n",t1);  /*������Լ��*/
      printf("��С�������� %d\n", t2);  /*�����С������*/
  system ("pause");
  return 0;

}
