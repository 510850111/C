#include <stdio.h>
#include <windows.h>
int main()
{
	system("color a");
	int a,b;
	printf("==================\n");
	printf("������һ������: ");
	scanf ("%d",&a);
	b = a%2;
	if (b==0)
		{
			printf("�����������ż��.\n");
		}
	else
		{
			printf("���������������\n");
		}
	printf("==================\n");
	Sleep (5000);
	return 0;
}	
