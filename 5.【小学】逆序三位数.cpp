#include<stdio.h>
int main()
{
	int a,b,c,e,f;
	scanf("%d",&a);
	b=a/100;
	c=(a-100*b)/10;
	e=(a-100*b-10*c)/1;
	f=100*e+10*c+b;
	printf("%03d\n",f); 
	return 0;
}


 
