#include<stdio.h>
int main ()
{
	int n,i,j,a=1;
	scanf("%d",&n);
	for (i=1;i<n+1;i++)
	{
		for (j=1;j<n+1;j++)
		{
			printf("%3d",a);
			a+=1;
		}
		printf("\n");
	}
	return 0;
}
