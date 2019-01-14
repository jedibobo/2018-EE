#include<stdio.h>
int main ()
{
	int n,i,j;
	scanf("%d",&n);
	for (i=1;i<2*n;i++)
	{
		printf("*");
	}
	printf("\n");
	for (i=1;i<n;i++)
	{
		for (j=1;j<i+1;j++)
		{
			printf(" ");
		}
		printf("*");
		if (i<n-1)
		{
			for (j=1;j<(2*n-2-2*i);j++)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
