#include<stdio.h>
int main()
{
	int m,n,i=0,sum=0;
	scanf("%d",&n);
	while(sum<n)
	{
		i++;
		sum+=i;
		m++;
	}
	printf("%d\n",m);
	return 0;
}
