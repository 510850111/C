 #include<stdio.h>
#include<windows.h>
 int main()
 { 
 	int a,n,count=1;
    long int sn=0,tn=0;
    printf("������a��n��ֵ,���ÿո����:");
    scanf("%d%d",&a,&n);
    printf("a=%d,n=%d\n",a,n);
  	while(count<=n)
       { tn=tn+a;
         sn=sn+tn;
         a=a*10;
         ++count;
       }
       printf("a+aa+...=%ld\n",sn);
       system ("pause");
       return 0;
 }
