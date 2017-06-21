#include <windows.h>
#include <stdio.h>

int main()
{
	char Array[512] = "0";
	int i = 0;
	printf("Please input:");
	gets(Array);
	for ( i = 0; i < 512; i++)
		if (Array[i] == '\0')
			break;
	for (; i >= 0; --i)
		printf("%c", Array[i]);
	printf("\n");
	system("pause");
	return 0;
}

