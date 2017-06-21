#include <windows.h>
#include <stdio.h>

int main()
{
	char sz1[20] = {"I love "};
	char sz2[20] = {"You "};
	char* (*pFun)(char*, const char*);
	pFun = strcat;
	(*pFun) (sz1, sz2);
	printf("%s\n", sz1);
	system("pause");
	return 0;
}

