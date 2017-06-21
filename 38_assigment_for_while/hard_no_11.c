#include<windows.h>
#include <stdio.h>
int main()
{
    for (int i = 0; i<5; i++)
     {
        for (int j = 0; j<5; j++)
         {
            printf("i=%d, j=%d\n", i, j);
            if (j == 1)
             {
                break;
             }
         }
        if (i == 2) 
        {
            break;
        }
    }
    system ("pause");
    return 0;
}
