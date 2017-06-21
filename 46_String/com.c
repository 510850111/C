#include <windows.h>
#include <stdio.h>
int Comp(char Arry[100],char Arry2[100]);
int main()
{
	char Arry[100]='\0';
	char Arry2[100]='\0';
    printf("请输入字符串1:");
    gets(Arry);
    getch();
    printf("请输入字符串2:");
    gets(Arry2);
    getch();
    Comp(Arry,Arry2);
    system("pause");
    return 0;
}

int Comp(char Arry[100],char Arry2[100])
{
	int i=0;
	char Arrycahr,Arry2char;
	while(Arry[i] != '\0' &&　Arry2[i] != '\0')
	{
	  if(Arry[i]-Arry2[i] == 0 )
	  {
	  	i++;
	  }
	  else
	  {
	  	printf("不相等!!!\n");
	  	break;
	  }
	  
	}


	
}