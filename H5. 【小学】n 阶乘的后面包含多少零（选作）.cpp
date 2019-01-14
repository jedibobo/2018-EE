#include<stdio.h>
int main()
{
	int n,add=0,i,temp,j;
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
	{
		temp=i;
		for (j=1;temp%5==0;j++)
		{
			add++;
			temp/=5;
		}
	}
	printf("%d\n",add);
	return 0;
}
