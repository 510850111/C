#include <stdio.h>
#include<windows.h>
int main() //�˳��������������.
{
	int num,moded,;
 	printf("====================================\n");
 	printf("����������Ҫ�������������:");   
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
