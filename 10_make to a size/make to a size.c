#include <stdio.h>
#include<windows.h>
int main()//��������ǱȽ��������Ĵ�С.
{	
	system ("color a");
	int a,b;
    printf("..................................................\n������һ����: ");
    	scanf("%d",&a);
    printf("��������һ����: ");
    	scanf("%d",&b);
    if(a>b)
        {
          printf("������:%d\n", a);      
        }
    else
        {
          if(a<b)
            {
              printf("������:%d\n", b);      
            }
          else
            {
              printf("������һ����.\n");      
            }
                      
        }
        printf("..................................................\n");
    Sleep(5000);
    return 0;
}
