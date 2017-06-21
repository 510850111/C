#include <stdio.h>
#include<windows.h>
int main() //此程序用来倒序输出.
{
	int num,moded,;
 	printf("====================================\n");
 	printf("请输入您想要倒序输出的数字:");   
 		scanf("%d",&num);
 		while(num != 0)
 			 {
 			  moded = num % 10;
		 	  printf("%d",moded);
 			  num = num / 10;
 			 }
 	printf(" \n");
 	printf("====================================\n");
 	system ("pause");
    return 0;
}
