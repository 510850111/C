/*
 һũ���ڼ����������ϣ����ܹ���1020�����ϣ���һ������һ����������ڶ�������ʣ�µ�һ���������
 ���մ˹�������ȥ����ũ�������ܽ����е��������ꣿ
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
