#include <stdio.h>
#include<windows.h>
void f(char *s)
{
    s = "hello whorld";
    printf("%s%s\n", __func__,s);
}
int main()
{
    char s[] = "hello c!";
    f(s);
    printf("%s", s);
        system ("pause");
    return 0;
}
