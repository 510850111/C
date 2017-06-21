#include<windows.h>
#include <stdio.h>
int main()
{
    for (int i = 0; i<10; i++) {
    	printf("i=%d,next,%d%%2=%d\n", i,i,i%2);
        if (i % 2) continue;
        printf("i=%d,pass,%d%%2=%d\n", i,i,i%2);
        if (i == 8) break;
        printf("i=%d\n", i);
    }
system ("pause");
    return 0;
}
