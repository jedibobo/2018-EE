#include<stdio.h>
int realletter (int a);
int main ()
{
	int n,a,b;
	char x,side;
	scanf("%d %c",&n,&x);
	side=x+3*n-4*((n/26)+1);
	if (n==1)
	{
		printf("%c\n",x);
		return 0; 
	}
	if (x>=65&&x<=90)
	{
		putchar (x);
		for (int i=0;i<(4*n-5);i++)
		{
			putchar(' ');
		}
		putchar (x);
		putchar ('\n');
		for (int i=0;i<n-2;i++)
		{
			printf("%c",realletter(side-i));
			for (int j=0;j<2*i+1;j++)
			{
				putchar(' ');
			}
			printf ("%c",realletter(x+i+1));
			for (int j=0;j<(4*n-4*i-9);j++)
			{
				putchar (' ');
			}
			printf ("%c",realletter(x+i+1));
			for (int j=0;j<2*i+1;j++)
			{
				putchar(' ');
			}
			printf("%c",realletter(side-i));
			putchar ('\n');
		}
		for (int i=0;i<n;i++)
		{
			printf("%c ",realletter(x+2*n-2-i));
		}
		for (int i=0;i<n-2;i++)
		{
			printf("%c ",realletter(x+n+i));
		}
		printf("%c",realletter(x+n+n-2));
		putchar ('\n');
	}
		
	return 0;
} 
int realletter (int a)
{
	if (a>90)
	{
		while (a>90)
		{
			a-=26;
		}
	}
	else if (a<65)
	{
		while (a<65)
		{
			a+=26;
		}
	}
	return a;
}
