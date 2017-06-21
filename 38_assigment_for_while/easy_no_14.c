/*
 猴子吃桃问题。
 猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。
 第二天早上又将剩下的桃子吃掉一半，又多吃一个。
 以后每天早上都吃了前一天剩下的一半零一个。
 到第10天早上想再吃时，就只剩一个桃子了。
 求第一天共摘多少个桃子。
 */
 #include<windows.h>
 #include <stdio.h>
 int main()
 {
     int total=0;//第一天共计摘的桃子
     int i=10;//第i天吃的桃子
     for (i = 10; i >0; i--)
     {
     	total=total*2+1;
     	printf("这是第%d天,有%d个桃子\n", i,total);
     }
     printf("一共有%d个桃子\n",total );
     system ("pause");
     return 0;
 }
