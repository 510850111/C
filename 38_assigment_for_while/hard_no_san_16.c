#include<windows.h>
#include <stdio.h>
int main()
{
    int score=0;
    int count=0;
    for (int i = 1; i <= 20; i++)
    {
    	printf("请输入第%d个学生的成绩:", i);
    	scanf("%d",&score);
    	if(score<60)
    	    {
    	      count++;      
    	    }
    	
    }
    printf("不及格的有%d个",count);
    system ("pause");
    return 0;
}
