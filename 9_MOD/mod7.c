#include <stdio.h>
#include <windows.h>
int main()
{
    int a,b;
    system ("color a");
    printf("--------------------------------------------\n������һ����: ");
    scanf("%d",&a);
     b=a%10;
     	if(b==7)
     	    {
     	      printf("�����������λ��7\n");      
     	    }
     	else
     	    {
     	      printf("�����������λ����7\n");      
     	    }
     printf("--------------------------------------------\n");
    Sleep(5000);
  return 0;
}
