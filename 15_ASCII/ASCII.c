#include<windows.h>
#include <stdio.h>
int main()
{
line:;    
    char char1;
      while(1)
  {
     	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");	
     	printf("��������Ҫ�ĵ����ַ�: ");
     		scanf("%c",&char1);
     			printf("������ĵ����ַ���: %c  ��Ӧ��ASCII���� %d\n", char1,char1);
     	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");	
goto line;
     	Sleep(500);	
  }
    return 0;
}
