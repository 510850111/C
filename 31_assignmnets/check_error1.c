#include <stdio.h>
#include<windows.h>
int main()
{
    int basic_wages=500;//基本工资
    float sales_wages=0.00;//销售额
    float deduction_wages=0.00;//提成
    float total_wages=0.00;//总工资

    printf("请输入销售额: ");
    scanf("%f",&sales_wages);

       if (sales_wages<0) 
       {
        printf("你还欠公司的钱!!!\n");
        system ("pause");
        return 0;//退出程序
    	}

    	switch((int)(sales_wages/1000))//将销售额除以1000后转换为整型,如销售额是1858元,除以1000等于1.858,转换为整型是1
    	 {
    		case 0: //销售额小于1000元
    		case 1: //销售额在1000-1999元之间
    		case 2: //销售额在2000-2999元之间
    			total_wages=basic_wages+deduction_wages;
    			printf("你的基本工资是%d元,提成是%.2f元,总工资是%.2f元\n",basic_wages,deduction_wages,total_wages);
    			break;
    		case 3: //销售额在3000-3999元之间
    		case 4: 
    		case 5: 
    			deduction_wages=sales_wages*0.08;
    			total_wages=deduction_wages+basic_wages;
    			printf("你的基本工资是%d元,提成是%.2f元,总工资是%.2f元\n",basic_wages,deduction_wages,total_wages);
    			break;
    		case 6: 
    		case 7: 
    		case 8: 
    		case 9: 
    		case 10: 
    			deduction_wages=sales_wages*0.10;
    			total_wages=deduction_wages+basic_wages;
    			printf("你的基本工资是%d元,提成是%.2f元,总工资是%.2f元\n",basic_wages,deduction_wages,total_wages);
    			break;
    		default://销售额大于10000元
    			deduction_wages=sales_wages*0.12;
    			total_wages=deduction_wages+basic_wages;
    			printf("你的基本工资是%d元,提成是%.2f元,总工资是%.2f元\n",basic_wages,deduction_wages,total_wages);
    			break;
    	 }

    system ("pause");
    	
    return 0;
}
