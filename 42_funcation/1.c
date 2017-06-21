#include <stdio.h>
#include<windows.h>	
int sum(int a, int b)
{
    return a + b;
}

int two(int n)
{
    return n * 2;
}

void test(int n)
{
    printf("%d\n", two(n));
}

int main()
{
    test( sum(10, 11) );
    system ("pause");
    return 0;
}
