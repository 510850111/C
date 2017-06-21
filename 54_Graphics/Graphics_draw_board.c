#include "graphics.h"
#include <windows.h>
#include <stdio.h>

int main()
{

    for (int i = -4; i <= 4; i++)
    {
    	line(getmaxx()/2-4*40,getmaxy()/2+i*40,getmaxx()/2+4*40,getmaxy()/2+i*40);
    }
    system("pause");
    return 0;
}

