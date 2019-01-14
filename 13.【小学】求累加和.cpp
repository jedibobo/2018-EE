#include<stdio.h>
int main()
{
	int a,b,i,sum;
	scanf("%d%d",&a,&b);
	if (a<=b)
	{
		for (i=a;i<=b;i++)
		{
			sum=sum+i;
		}
		printf("The sum from %d to %d is %d.\n",a,b,sum);
	}
	return 0;
}
