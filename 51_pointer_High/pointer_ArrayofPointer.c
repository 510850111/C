#include <windows.h>
#include <stdio.h>
/*使用指针数组管理字符串*/
int main()
{
    char *pA[7]={"sunday","monday","tuesday","wednesday","tursday","firday","saturday"};
    int index = 0;
    scanf("%d",&index);
    printf("today is %s\n", pA[index]);
    system("pause");
    return 0;
}

