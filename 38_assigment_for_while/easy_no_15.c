/*
 ���Ҫ����Ǯ������Ǯ����ôһԪǮ�ɶһ���һ�ǡ����ǡ���ǣ����ж����ֶһ���ʽ
*/
 #include<windows.h>
 #include <stdio.h>
 int fangshi();
 int main()
 {
    	fangshi();
 		system ("pause");
     return 0;
 }
 int fangshi()
 {
 	int wu_jiao=5;
 	int e_jiao=2;
 	int yi_jiao=1;
 	int count =0;//����
 	for (yi_jiao = 0; yi_jiao <=10; yi_jiao++)//��Ϊ��1��,�������ֵ��10
 	{
 		for (e_jiao = 0; e_jiao <=5; e_jiao++)//��Ϊ��2��,�������ֵ��5
 		{
 			for (wu_jiao = 0; wu_jiao <=2; wu_jiao++)//��Ϊ��5��,�������ֵ��2
 			{
 				if((yi_jiao+e_jiao*2+wu_jiao*5)==10)
 				    {
 				          count++;
 				          printf("0.1*%d+0.2*%d+0.5*%d\n", yi_jiao,e_jiao,wu_jiao);
 				    }
 				
 			}
 		}
 	}
 	printf("һ����%d�ַ���\n",count);
 	return 0;
 }
