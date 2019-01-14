#include<stdio.h>
int main()
{
	int a,b,dividend,divisor,temp=1,i,answer;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		dividend=a;
		divisor=b;
	}
	else
	{
		dividend=b;
		divisor=a;
	}	
	if (dividend%divisor==0)
	{
		answer=divisor;
	}
	else
	{
		for (i=1;temp!=0;i++)
		{
			temp=dividend%divisor;
			dividend=divisor;
			answer=divisor;
			divisor=temp;
		}
	}
	printf("GCD(%d,%d)=%d\n",a,b,answer);
	return 0;
} 
