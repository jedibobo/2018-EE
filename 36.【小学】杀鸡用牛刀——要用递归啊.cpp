#include<stdio.h>
int main ()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	int autosum (int a,int b);
	if(a<=b)
	{
		c=autosum (a,b);
		printf("The sum from %d to %d is %d.\n",a,b,c);	
	}
	return 0;
} 
int autosum(int a,int b)
{
	int d=0;
	if (a<=b)
	{
		d=d+a+autosum(a+1,b);
	}
	else d+=0;
	return d;
}
