#include <stdio.h>
#include <windows.h>
#define N 40 //���������ʮ������

int readscore(int score[]);//��ȡ�ɼ�
void paixu(int score[],int n);//�Գɼ���������
void printscore(int score[],int n);//�Գ����մӸߵ��͵�˳�����

int main()//������ʹ��ѡ������
{
    int score[N],n;//����һ��score����,������41��λ��(0ռһ��λ��)

    n=readscore(score);//����readscore����ɼ�,��������ĸ���
    printf("һ����%d�ſ�Ŀ\n",n);
    paixu(score,n);//������ĳɼ���������
    printf("�ɼ��Ӹߵ��͵�������Ϊ:");
    printscore(score,n);//���������

    system ("pause");
    return 0;
}

int readscore(int score[])
{
	//����ɼ�,������Ϊ��ֵʱ,��������,����ѧ������
	int i=-1;//��֤ѭ������i+1���±��0��ʼ
		do{
			i++;
			printf("������ɼ�:");
			scanf("%d",&score[i]);
		  }while (score[i]>=0);//�����븺ֵʱ�����ɼ�����
	return i;
}

void paixu(int score[],int n)
{//�����������������
	int i,j,temporary;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; i < n; j++)
		{
			if(score[j]>score[i])//�����������Ԫ�شӸߵ�������
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
		printf("%d",score[i] );//���δ�ӡ������������Ѿ��ź��������
	}
	printf("\n");
}
