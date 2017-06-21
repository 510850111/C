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
int judge()//假设张三为真
{
	Li_Si=-Zhang_San;//张三说李四在说谎
	Wang_Wu=-Li_Si;//李四说王五在说谎
	Zhang_San=-Wang_Wu;
	Li_Si=-Wang_Wu;//王五说张三和李四都在说谎
	if(Zhang_San_first==Zhang_San) printf("张三为真\n");
	else printf("张三为假\n"); 
	if(Zhang_San==Zhang_San_first && Wang_Wu == Zhang_San) printf("李四为假\n");      
	if(Zhang_San != Zhang_San_first || Wang_Wu != 1) printf("李四为真\n");
	if(Wang_Wu ==1 && Zhang_San != Zhang_San_first && Zhang_San != Li_Si) printf("王五为真\n");   
	else printf("王五为假\n");  
	return 0;
}
