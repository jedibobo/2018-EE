#include<stdio.h>
int main ()
{
	char a[6];
	int countletter=0,i;
	for (i=1;i<6;i++)
	{
		scanf("%c",&a[i]);
	}
	if (a[5]>=48&&a[5]<=57)
	{
		for (i=1;i<5;i++)
		{
			if(a[i]>=65&&a[i]<=90&&a[i]!=73&&a[i]!=79)
			{
				countletter+=1;
			}
		}
		if(countletter>=2)
		{
			printf("ok.\n");
		} 
		else
		{
			printf("no.\n");
		}
	}
	else 
	{
		printf("no.\n");
	}
	return 0;
} 

