#include <windows.h>
#include <stdio.h>
#include "string.h"
#define Size 100
int Split_Add_Space(char arry[]);
int main()
{
    char arry[Size];
    printf("ÇëÊäÈë×Ö·û´®: ");
    gets(arry);
    Split_Add_Space(arry);

    system("pause");
    return 0;
}

int Split_Add_Space(char arry[])
{
	int i=0,j=0;
	char Arry_Split[Size];
	while(arry[i] != '\0')
	{
	  if(i % 3 == 0 && i != 0)
	  {
	  	Arry_Split[j]=' ';
	  	Arry_Split[++j] = arry[i];
	  	j++;
	      
	  }
	  else
	  {
	  	 Arry_Split[j++] = arry[i];     
	  }
	 i++; 
	}
	puts(Arry_Split);
	return 0;
}
