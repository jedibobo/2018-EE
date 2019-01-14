#include<stdio.h>  
int main ()  
{  
    int year1,month1,day1;  
    int year2,month2,day2;  
    int a=0,b=0,c=0,i;  
    int leap_year( int );       
    int year_days( int );       
    int days(int,int,int);  
    scanf("%d %d %d",&year1,&month1,&day1);  
    scanf("%d %d %d",&year2,&month2,&day2);  
    for (i=year1;i<year2;i++)  
    {  
        a+=year_days(i);  
    }  
    b=days(year1,month1,day1);  
    c=days(year2,month2,day2);  
    a+=(c-b);  
    printf("%d days\n",a);  
    return 0;  
} 
