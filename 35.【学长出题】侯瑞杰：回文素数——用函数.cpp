#include<stdio.h>  
#include<string.h>  
int main()  
{  
    int a,b,i;  
    scanf("%d %d",&a,&b);  
    int huiwen(int);  
    int isPrime(int);  
    for (i=a;i<b+1;i++)  
    {  
        if (huiwen(i)&&isPrime(i))  
        {  
            printf("%d\n",i);  
        }  
    }  
    return 0;  
}  
int huiwen(int y)  
{  
    int newed,t,n;  
    while(y)  
    {  
        newed=0;  
        n=y;  
        do  
        {     
            newed=newed*10+y%10;  
            y/=10;  
        }  
        while(y>0);  
        if(n==newed)  
        {  
            return 1;  
            break;  
        }  
        else{  
            return 0;  
            break;  
        }  
              
    }  
}  
int isPrime(int x)   
{   
    int i;  
    for (i=2;i<x;i++)  
    {  
        if (x%i==0)  
        {  
            return 0;  
            break;  
        }  
    }  
    return 1;  
      
} 
