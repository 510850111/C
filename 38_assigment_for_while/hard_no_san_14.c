/*
 一农户在集市上卖西瓜，他总共有1020个西瓜，第一天卖掉一半多两个，第二天卖掉剩下的一半多两个，
 问照此规律卖下去，该农户几天能将所有的西瓜卖完？
 */
 #include<windows.h>
 #include <stdio.h>
 int main()
 {
     int total =1020;
     int day=0;
     for (total = 1020; total >0; day++)
     {
       total=total/2-2;
       printf("total=%d\n", total);
     }
     printf("day=%d\n", day);
     system ("pause");
     return 0;
 }
