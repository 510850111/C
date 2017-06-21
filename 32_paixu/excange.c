#include <stdio.h>
#include <windows.h>
#define N 40 //最多排序四十个数字

int readscore(int score[]);//读取成绩
void paixu(int score[],int n);//对成绩进行排序
void printscore(int score[],int n);//对程序按照从高到低的顺序输出

int main()//本程序使用选择法排序
{
    int score[N],n;//定义一个score数组,里面有41个位置(0占一个位置)

    n=readscore(score);//调用readscore输入成绩,返回输入的个数
    printf("一共有%d门科目\n",n);
    paixu(score,n);//对输入的成绩进行排序
    printf("成绩从高到低的排序结果为:");
    printscore(score,n);//输出排序结果

    system ("pause");
    return 0;
}

int readscore(int score[])
{
	//输入成绩,当输入为负值时,结束输入,返回学生人数
	int i=-1;//保证循环体内i+1后下标从0开始
		do{
			i++;
			printf("请输入成绩:");
			scanf("%d",&score[i]);
		  }while (score[i]>=0);//当输入负值时结束成绩输入
	return i;
}

void paixu(int score[],int n)
{//对输入的数进行排序
	int i,j,temporary;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; i < n; j++)
		{
			if(score[j]>score[i])//按数组里面的元素从高到低排序
			    {
			        temporary= score[j];
			        score[j]=score[i];
			        score[i]=temporary;
			    }
			
		}
	}
}

void printscore(int score[],int n)
{
	int i;
	for (int i = 0; i < n; i++)
	{
		printf("%d",score[i] );//依次打印出数组里面的已经排好序的数字
	}
	printf("\n");
}
