#include <stdio.h>
#include <windows.h>
int main()
{
	system("color a");
	int a,b;
	printf("==================\n");
	printf("请输入一个数字: ");
	scanf ("%d",&a);
	b = a%2;
	if (b==0)
		{
			printf("您输入的数是偶数.\n");
		}
	else
		{
			printf("您输入的数是奇数\n");
		}
	printf("==================\n");
	Sleep (5000);
	return 0;
}	
