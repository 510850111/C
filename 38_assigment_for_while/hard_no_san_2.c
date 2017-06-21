int divisor (int a,int b)    /*自定义函数求两数的最大公约数*/
{
  int  temp;          /*定义整型变量*/
  if(a<b)             /*通过比较求出两个数中的最大值和最小值*/
    { temp=a;a=b;b=temp;} /*设置中间变量进行两数交换*/
   while(b!=0)           /*通过循环求两数的余数，直到余数为0*/
    {
      temp=a%b;
      a=b;              /*变量数值交换*/
      b=temp;
    }
  return (a);            /*返回最大公约数到调用函数处*/ 
}
int multiple (int a,int b)  /*自定义函数求两数的最小公倍数*/
{
  int divisor (int a,int b); /*自定义函数返回值类型*/
  int temp;
  temp=divisor(a,b);  /*再次调用自定义函数，求出最大公约数*/
  return  (a*b/temp); /*返回最小公倍数到主调函数处进行输出*/
}
#include <stdio.h>   
#include<windows.h>
int main()  
{
    int m,n,t1,t2;     /*定义整型变量*/
      printf("请输入两个数,中间用空格隔开:"); /*提示输入两个整数*/
      scanf("%d %d",&m,&n);              /*通过终端输入两个数*/
      t1=divisor(m,n);                    /*自定义主调函数*/
      t2=multiple(m,n);                 /*自定义主调函数*/
      printf("最大公约数是 %d\n",t1);  /*输出最大公约数*/
      printf("最小公倍数是 %d\n", t2);  /*输出最小公倍数*/
  system ("pause");
  return 0;

}
