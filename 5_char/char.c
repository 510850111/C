#include <stdio.h>
#include <windows.h>
int main()
{	
	system("color a ");
    char a;
    printf("==============================\n");
    printf("请输入字符:");
    scanf("%c",&a);
    printf("------------------------------\n");
    printf("你刚才输入的字符是:%c\n",a);
    Sleep(5000);
    return 0;

}
