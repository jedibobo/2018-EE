#include<stdio.h>
int main()
{
	int n,x=1,i;
	scanf("%d",&n);
	for (i=n;i>1;i--)
	{
		x=(x+i-1)*2;
	}
	printf("The monkey got %d peaches in first day.\n",x);
	return 0;
}
