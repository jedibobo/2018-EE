#include<stdio.h>
int main()
{
	int n,i,j,t=0,a,b;
	char x;
	scanf("%d %c",&n,&x);
	if(x>=65&&x<=90)
	{
		for(i=0;i<n-1;i++)
		{
			a=x+n-i-1;
			while (a>90)
			{
				a=a-26;
			}
			for(j=0;j<i;j++)
			{
				printf(" ");
			}
			printf("%c",(a));
			for(j=0;j<(2*n-3-2*i);j++)
			{
				printf(" ");
			}
			printf("%c\n",(a));
		}
		for(i=0;i<n-1;i++)
		{
			printf(" ");
		}
		printf("%c\n",x);
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-2;j++)
			{
				printf(" "); 
			}
			b=(x-i-1);
			while (b<65)
			{
				b+=26;
			}
			printf("%c",b);
			for(j=1;j<(2*i+2);j++)
			{
				printf(" "); 
			}
			if((x-i-1)>=65)	printf("%c\n",b);
			else printf("%c\n",b);
		}
	}
	else
	{
		printf("input error.\n");
	}
	return 0;
} 
