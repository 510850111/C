#include <windows.h>
#include <stdio.h>

int main()
{
    void disp(void);
    printf("%p\n", disp);
    disp();

    system("pause");
    return 0;
}

void disp()
{
	printf("This is disp!\n");

}
