#include <windows.h>
#include <stdio.h>
//定义0为说谎,1为说真话
int start()
{
	for (int ZS = 0; ZS < 2; ZS++)//张三
	{
		for (int LS = 0; LS < 2; LS++)//李四
		{
			for (int WW = 0; WW < 2; WW++)//王五
			{
				if((ZS&&!LS||!ZS&&LS)&&(LS&&!WW||!LS&&WW)&&(WW&&ZS+LS==0||!WW&&ZS+LS!=0))
				{
					printf("张三说的是: %s\n ",ZS?"真话":"假话");
					printf("李四说的是: %s\n ",LS?"真话":"假话");
					printf("王五说的是: %s\n ",WW?"真话":"假话");
				}
			}
		}	
	}
}

int main()
{
    start();
    system("pause");
    return 0;
}

/*
分析: 
	张三说的是真话:ZS=1,LS=0
	张三说的是假话:ZS=0,LS=1

	李四说的是真话:LS=1,WW=0
	李四说的是假话:LS=0,WW=1

	王五说的是真话:WW=1,ZS+LS=0
	王五说的是假话:WW=0,ZS+LS!=0

	因为王五说真话的时候,张三和王五都在说假话,所以ZS=0,LS=0 ==> ZS+LS=0
	因为王五说假话的时候,有三种情况:
		1.张三说真话,李四说假话:ZS=1,LS=0	==> ZS+LS=1
		2.张三说假话,李四说真话:ZS=0,LS=1 ==> ZS+LS=1
		3.张三说真话,李四说真话:ZS=1,LS=1 ==> ZS+LS=2,
		因为有1和2,所以干脆不等于零得了
*/
