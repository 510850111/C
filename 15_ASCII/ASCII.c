#include<windows.h>
#include <stdio.h>
int main()
{
line:;    
    char char1;
      while(1)
  {
     	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");	
     	printf("请输入您要的单个字符: ");
     		scanf("%c",&char1);
     			printf("您输入的单个字符是: %c  对应的ASCII码是 %d\n", char1,char1);
     	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");	
goto line;
     	Sleep(500);	
  }
    return 0;
}
