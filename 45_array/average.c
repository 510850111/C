#include <windows.h>
#include <stdio.h>
int Readscore();
int Average(int count);
int PrintAverage( int Averagescore,int count);

# define N 40
int scoreArray[N];

int main()
{
    Readscore();
    system("pause");
    return 0;
}

int Readscore()
{
	int count=0;
	for (int i = 0; i < N; i++)
	{
		printf("请输入第%d个的分数:", i+1);
		scanf("%d",&scoreArray[i]);
		if(scoreArray[i] >= 0 )
		    {
		        count++;    
		    }
		else
		    {
		      break;      
		    }
		
	}
	Average(count);
	return 0;
}
int Average(int count)
{
	int  Averagescore=0;
	long Sum=0;
	for (int i = 0; i < count+1; i++)
	{
		Sum=Sum+scoreArray[i];
	}
	Averagescore=Sum/count;
	PrintAverage(Averagescore,count);
	return 0;
}
int PrintAverage(int Averagescore,int count)
{
	printf("平均分为%d,有效输入为:%d\n",Averagescore,count);
	return 0;
}
