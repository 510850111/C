#include <windows.h>
#include <stdio.h>
typedef char* (*pFun)(char*, const char*);
int main()
{
	char sz1[20] = "I love ";
	char sz2[20] = "You";
	pFun pf = strcat;
	pf(sz1, sz2);
	printf("%s\n", sz1);
	pf = strcpy;
	printf("pf=%p ,strcat=%p\n",pf,strcat );
	pf(sz1, sz2);
	printf("%s\n", sz1);
	system("pause");
	return 0;
}

