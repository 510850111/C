#include <stdio.h>
#include <windows.h>
int main()
{
    char a;
    system ("color a");
    printf("===================================\n");
    printf("请输入您的字符: ");
    scanf ("%c",&a);
    printf("+++++++++++++++++++++++++++++++++++\n");
    printf("您输入的字符是: %c\n",a);
    printf("下一个字符是: %c\n",a+1);
    printf("+++++++++++++++++++++++++++++++++++\n");
    Sleep (5000);
    return 0;
}
 