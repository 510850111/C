#include <stdio.h>
#include<windows.h>
int main()//ʹ�ø�˹��ʽ�����1+n��ֵ....�����ǵȲ��������ô.......0.0b
{
	int input=0;
	int sum=0;

    printf("������һ������ֵ:");
    scanf("%d",&input);
		sum=((1+input)*input)/2; //�Ȳ�������͹�ʽ
    printf("ʹ�ø�˹��ʽ����Ľ��Ϊ:%d\n",sum);
    system ("pause");
    
    return 0;
}
