#include<windows.h>
#include <stdio.h>
int main()
{
    int score=0;
    int count=0;
    for (int i = 1; i <= 20; i++)
    {
    	printf("�������%d��ѧ���ĳɼ�:", i);
    	scanf("%d",&score);
    	if(score<60)
    	    {
    	      count++;      
    	    }
    	
    }
    printf("���������%d��",count);
    system ("pause");
    return 0;
}
