#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<windows.h>
int main()//本程序是用来计算字符的值的和,其中,a=0.01,b=0.02,c=0.03.......以此类推,z=0.26
{
   char input[255]="";     //输入的字符串
   int i=0 ;            //循环次数
   int sum=0;           //最终的值
   int lenth=0;         //字符串长度
   int charnumber=0;

   printf("请输入小写字符串：");
   scanf("%s",&input);
   lenth=strlen(input); //获取字符串长度
        while(i<lenth)
            {
                charnumber=input[i]-96;   
                sum=sum+charnumber;
                i=i+1;
            }      
    printf("最终计算的值为：%.3f\n",sum*0.01); //只显示小数后三位
    system ("pause");      
    return 0;
}
