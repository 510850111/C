#include <stdio.h>
#include <windows.h>
int main()
{
    int a,b;
    system ("color a");
    printf("--------------------------------------------\n请输入一个数: ");
    scanf("%d",&a);
     b=a%10;
     	if(b==7)
     	    {
     	      printf("您输入的数个位是7\n");      
     	    }
     	else
     	    {
     	      printf("您输入的数个位不是7\n");      
     	    }
     printf("--------------------------------------------\n");
    Sleep(5000);
  return 0;
}
