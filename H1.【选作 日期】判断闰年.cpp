#include<stdio.h>  
int main()   
{  
  int iyear;  
  scanf("%d",  & iyear);  
  iyear % 4 == 0 && iyear % 100 != 0  
    || iyear % 400 == 0 ? printf("%d is a leap year.\n",iyear) : printf("%d is not a leap year.\n", iyear);  
  return 0;  
} 
