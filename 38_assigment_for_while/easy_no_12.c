#include "stdio.h" 
#include<windows.h> 
long A(int n)  
{ 
  long s;  
  if(n<=1)
{   
      s=1;  
}	
  else
{    
      s=n*A(n-1);  
}
  return s;  
}  

int main()  
{
 int num;  
 scanf("%d",&num);  
 printf("%d!=%ld\n",num,A(num));  
 system ("pause");
 return 0;
}  
