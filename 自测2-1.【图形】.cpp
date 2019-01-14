#include<stdio.h>
int realletter (int a);
int main ()
{
	int n;
	char x;
	scanf ("%d%c",&n,&x);
	for (int i=0;i<(2*n-1);i++)
	{
		if (realletter(x+i)=='A'||realletter(x+i)=='E'||realletter(x+i)=='I'||realletter(x+i)=='O'||realletter(x+i)=='U')
		{
			x++;
			printf("%c",realletter(x+i));
		}
		else 
		{
			printf("%c",realletter(x+i));
		}
	}
	putchar ('\n');
	for (int i=0;i<n-2;i++)
	{
		for (int j=0;j<i+1;j++)
		{
			putchar (' ');
		}
			if (realletter(x+i)=='A'||realletter(x+i)=='E'||realletter(x+i)=='I'||realletter(x+i)=='O'||realletter(x+i)=='U')
			{
				x++;
				printf("%c",realletter(x+i));
			}
			else 
			{
				printf("%c",realletter(x+i));
			}
		//putchar (realletter(x+2*n-1));
		for (int j=0;j<(2*n-5-2*i);i++)
		{
			putchar (' ');
		}
			if (realletter(x+i)=='A'||realletter(x+i)=='E'||realletter(x+i)=='I'||realletter(x+i)=='O'||realletter(x+i)=='U')
			{
				x++;
				printf("%c",realletter(x+i));
			}
			else 
			{
				printf("%c",realletter(x+i));
			}
			putchar ('\n');
	}
	for (int i=0;i<n-1;i++)
	{
		putchar (' ');
	}
	putchar(realletter(x+4*n-5));
	putchar ('\n');
	for (int i=0;i<n-2;i++)
	{
		for (int j=0;j<(n-2-i);j++)
		{
			putchar (' ');
		}
		
	}
	
	
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
