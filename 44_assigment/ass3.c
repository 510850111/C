#include <windows.h>
#include <stdio.h>
int judge();
int Zhang_San=1,Li_Si,Wang_Wu=1,Zhang_San_first=1;
int main()
{
    judge();
    system("pause");
    return 0;
}
int judge()//��������Ϊ��
{
	Li_Si=-Zhang_San;//����˵������˵��
	Wang_Wu=-Li_Si;//����˵������˵��
	Zhang_San=-Wang_Wu;
	Li_Si=-Wang_Wu;//����˵���������Ķ���˵��
	if(Zhang_San_first==Zhang_San) printf("����Ϊ��\n");
	else printf("����Ϊ��\n"); 
	if(Zhang_San==Zhang_San_first && Wang_Wu == Zhang_San) printf("����Ϊ��\n");      
	if(Zhang_San != Zhang_San_first || Wang_Wu != 1) printf("����Ϊ��\n");
	if(Wang_Wu ==1 && Zhang_San != Zhang_San_first && Zhang_San != Li_Si) printf("����Ϊ��\n");   
	else printf("����Ϊ��\n");  
	return 0;
}
