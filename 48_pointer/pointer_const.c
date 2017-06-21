#include <windows.h>
#include <stdio.h>

int main()
{
    int num = 10;
    int num2 = 100;
    int num3 = 1000;
    int* const pIntnum = &num;/*禁止改写指针的值*/
    /* 
    	无法改写pintnum并不意味着无法通过间接引用改写pintnum指向的变量
    	eg(合法代码):
    		num = 10;
    		*pIntnum = 5;

    */
    const int* pIntnum2 = &num2;/*禁止改写间接引用*/
    /*
		禁止改写间接引用并不意味着该内存变量无法被改写,通过变量名访问和改写该内存区域是合法的
		eg(合法代码):
			num2 = 8;
			
    */
    const int* const pInt = &num3;/*禁止改写指针,禁止改写间接引用*/
    system("pause");
    return 0;
}

