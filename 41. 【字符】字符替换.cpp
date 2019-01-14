#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[10],c[10],d[100],e[100];
	int i,j,flag=0;
	gets(a);
	gets(b);
	gets(c);
	for (i=0;i<100;i++)
	{
		for (j=0;j<10;j++)
		{
			if (a[i]==b[j])
			{
				flag+=1;
			}
			else continue;
		}
		if (flag>=1)
		{
			break;
		}
	}
	for (j=0;j<i;j++)
	{
		d[j]=a[j];
	}
	strcat(d,c);
	i=i+strlen(b);
	for (j=0;i<1+strlen(a);j++)
	{
		e[j]=a[i];
		i++;
	}
	strcat (d,e);
	puts (d);
	return 0;
	
} 
