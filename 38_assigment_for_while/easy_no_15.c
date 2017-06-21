/*
 如果要将整钱换成零钱，那么一元钱可兑换成一角、两角、五角，问有多少种兑换方式
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
 	int count =0;//计数
 	for (yi_jiao = 0; yi_jiao <=10; yi_jiao++)//因为是1角,所以最大值是10
 	{
 		for (e_jiao = 0; e_jiao <=5; e_jiao++)//因为是2角,所以最大值是5
 		{
 			for (wu_jiao = 0; wu_jiao <=2; wu_jiao++)//因为是5角,所以最大值是2
 			{
 				if((yi_jiao+e_jiao*2+wu_jiao*5)==10)
 				    {
 				          count++;
 				          printf("0.1*%d+0.2*%d+0.5*%d\n", yi_jiao,e_jiao,wu_jiao);
 				    }
 				
 			}
 		}
 	}
 	printf("一共有%d种方案\n",count);
 	return 0;
 }
