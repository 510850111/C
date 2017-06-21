#include <windows.h>
#include <stdio.h>
/*张三说李四在说谎，李四说王五在说谎，王五说张三和李四都在说谎。
	现在问 ：这三人中到底谁说的是真话，谁说的是假话？*/
int Zhang_San=1,Li_Si=1;Wang_Wu=1;
int Zhang_San_first=1;
int judge();//判断函数
int confirm(int Zhang_San,int Li_Si,int Wang_Wu);//确定到底谁在说谎和谁说真话.
int main()
{
    judge();
    system("pause");
    return 0;
}

int judge()
{
	     	Li_Si=-Zhang_San;//张三说李四在说谎
	     	Wang_Wu=-Li_Si;//李四说王五在说谎
	     	Zhang_San=-Wang_Wu;
	     	Li_Si=-Wang_Wu;//王五说张三和李四都在说谎
	     	confirm(Zhang_San,Li_Si,Wang_Wu);
}

int confirm(int Zhang_San,int Li_Si,int Wang_Wu)
{
	if(Wang_Wu==1 && Zhang_San==Zhang_San_first)
	    {
	       printf("李四在说谎\n");     
	    }
	else if(Wang_Wu==1 && Zhang_San != Zhang_San_first)
	    {
	          printf("张三在说谎\n");  
	    }
	else
	    {
	       
	    }
	
}