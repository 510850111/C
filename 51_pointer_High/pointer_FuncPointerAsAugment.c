#include <windows.h>
#include <stdio.h>
typedef char* (*pFun)(char*, const char*);

int main()
{
	char sz1[20] = "I love ";
	char sz2[20] = "You";
	void funcation(char*, char*,pFun);
	funcation(sz1,sz2,strcat);
	funcation(sz1,sz2,strcpy);

	system("pause");
	return 0;
}

void funcation(char* a, char* b,pFun p)
{
	p(a,b);
	printf("%s\n", a);
}
