#include <windows.h>
#include <stdio.h>
/*����˵������˵�ѣ�����˵������˵�ѣ�����˵���������Ķ���˵�ѡ�
	������ ���������е���˭˵�����滰��˭˵���Ǽٻ���*/
int Zhang_San=1,Li_Si=1;Wang_Wu=1;
int Zhang_San_first=1;
int judge();//�жϺ���
int confirm(int Zhang_San,int Li_Si,int Wang_Wu);//ȷ������˭��˵�Ѻ�˭˵�滰.
int main()
{
    judge();
    system("pause");
    return 0;
}

int judge()
{
	     	Li_Si=-Zhang_San;//����˵������˵��
	     	Wang_Wu=-Li_Si;//����˵������˵��
	     	Zhang_San=-Wang_Wu;
	     	Li_Si=-Wang_Wu;//����˵���������Ķ���˵��
	     	confirm(Zhang_San,Li_Si,Wang_Wu);
}

int confirm(int Zhang_San,int Li_Si,int Wang_Wu)
{
	if(Wang_Wu==1 && Zhang_San==Zhang_San_first)
	    {
	       printf("������˵��\n");     
	    }
	else if(Wang_Wu==1 && Zhang_San != Zhang_San_first)
	    {
	          printf("������˵��\n");  
	    }
	else
	    {
	       
	    }
	
}