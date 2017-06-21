#include <windows.h>
#include <stdio.h>

int main()
{
	char sz1[20] = "I love ";
	char sz2[20] = "You";
	char*(*pFunc[2])(char*, const char*) = {strcat,strcpy};
	pFunc[0](sz1,sz2);
	printf("%s\n", sz1);
	pFunc[1](sz1,sz2);
	printf("%s\n", sz2);
	system("pause");
	return 0;
}

