#include<windows.h>
#include <stdio.h>
int main()
{
    enum weekend {mon,tue,wed,thr,fri,sat,sun} work;//未对mon赋值,默认为0.
    work= sun;
    printf("work=%d\n", work);
	system ("pause");
    return 0;
}
