#include <windows.h>
#include <stdio.h>
struct sample1
{
	char c;
	short s;
	float f;
};
struct sample2
{
	char c;
	float f;
	short s;

};
int main()
{
    struct sample1 Example1;
    struct sample2 Example2;
    printf("Example1 size = %d\n", sizeof(Example1));
    printf("Exampl2 size = %d\n", sizeof(Example2));
    system("pause");
    return 0;
}

