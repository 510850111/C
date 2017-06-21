#include <windows.h>
#include <stdio.h>
/*张三说李四在说谎，李四说王五在说谎，王五说张三和李四都在说谎。
	现在问 ：这三人中到底谁说的是真话，谁说的是假话？*/
int start_judge();
int Judge_True_count();
int Judge_True_False_Result(int ZS,int LS,int WW);
int print_Result();

int Zhang_San=0,Li_Si=0,Wang_Wu=0;
int WW_Case;
int Zhang_San_first=1;
int True_count=0;

int main()
{
    start_judge();
    system("pause");
    return 0;
}

int start_judge()
{
	printf("%s\n\n", __func__);

	int judgereturn=0;
	for (int ZS = 0; ZS < 2; ZS++)
	{
		for (int LS = 0; LS < 2; LS++)
		{
			for (int WW = 0; WW < 2; WW++)
			{	
				printf("循环开始: ZS=%d LS=%d WW=%d WW_Case=%d\n",ZS,LS,WW,WW_Case );
				judgereturn=Judge_True_False_Result( ZS, LS, WW);
				if(judgereturn==1)
				    {
				      print_Result();
				    }
				else if(ZS == 2)
				    {
				    	printf("很遗憾,未能解决\n");
				    }
			}
		}
	}
	return 0;
}

int Judge_True_False_Result(int ZS,int LS,int WW)
{
	printf("%s\n\n", __func__);
	printf("判断开始: ZS=%d LS=%d WW=%d WW_Case=%d\n",ZS,LS,WW,WW_Case );
	if(ZS==0)//如果张三说假话
	    {
	     	Zhang_San=0;
	    }
	else if(LS==0)//如果李四说假话
	    {
	        Zhang_San=1;
	    }
	else
	    {
	       Zhang_San=1;
	    }
	if(ZS==0)//如果如果张三说假话
	    {
	        Li_Si=1;   
	    }
	else if(LS==0)//如果李四说假话
	    {
	        Li_Si==0;   
	    }
	else
	    {
	       Li_Si=1;
	    }
	if(ZS==0)//如果如果张三说假话
	    {
	        Wang_Wu=0;   
	    }
	else if(LS==0)//如果李四说假话
	    {
	        Wang_Wu==1;   
	    }
	else
	    {
	       Wang_Wu=0;
	    }
	if(WW==0)
	    {
	        if(Zhang_San==1 && Li_Si==0)
	         {
	            WW_Case=0;        
	         }
			else if(Zhang_San==0 && Li_Si == 1)
			      {
			        WW_Case=1;      
			      }
			else
			       {
			          WW_Case=0;
			       }
			      
	    }
	else
	    {
	            
	    }
	


	    printf("判断结束: ZS=%d LS=%d WW=%d WW_Case=%d\n",ZS,LS,WW,WW_Case );
	Judge_True_count();
	if(True_count>=2 && Zhang_San+Li_Si+Wang_Wu==2)
	    {
	         return 1;   
	    }
	return 0;
}

int Judge_True_count()
{
	printf("%s\n\n", __func__);

	True_count=0;
	if(Zhang_San==1 && Wang_Wu ==1)
	    {
	      True_count += 2;      
	    }
	if(Li_Si==1)
	    {
	      True_count++;      
	    }
	if( WW_Case==1)
	    {
	      True_count++;      
	    }	
}

int print_Result()
{
	printf("%s\n\n", __func__);

	if(Zhang_San)
    {
      printf("张三在说真话\n");      
    }
	else if(Li_Si)
    {
       printf("李四在说真话\n");
    }
	else	
	{
		printf("王五在说真话\n");
	}
	return 0;
}
