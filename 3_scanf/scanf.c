#include <stdio.h>
#include <windows.h>	
int main()
{
	int a,b,c;
	system ("color a");
    printf("---------------------------\n");
    printf("����һ���ӷ�������\n");
    printf("---------------------------\n");
    printf("�������һ����:\n");
    scanf("%d",&a);
    printf("������ڶ�����:\n");
    scanf("%d",&b);
    printf("---------------------------\n");
    c=a+b;
    printf("���ǵĺ�Ϊ: %d\n",c);
    printf("---------------------------\n");
    Sleep (5000);
    return 0;
} 
