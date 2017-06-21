#include <stdio.h>
#include<windows.h>
int main()
{
    system ("color a");
    int n;
     printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
     printf("ÇëÊäÈëµ¹¼ÆÊ±(Ãë): ");
      scanf("%d",&n);
    	while(n>=0)
    	    {
              printf(" \n");
              printf(" \n");
              printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    	      printf("               %d (s)\n", n);
              printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    	      n=n-1;
    	      Sleep(1000);
    	      system ("cls");
    	    }
    	
    return 0;
}
