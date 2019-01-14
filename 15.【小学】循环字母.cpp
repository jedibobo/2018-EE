#include<stdio.h>
int main()
{
	char x;
	int i;
	x=getchar();
	if (x<=90)
	{
		for(i=1;i<27;i++)
		{
			if(x>90)
			{
				x=x-26;
			}
			printf("%c",x);
			x++;
		}
		printf("\n");
	}
	else 
	{
		for(i=1;i<27;i++)
		{
			if(x>122)
			{
				x=x-26;
			}
			printf("%c",x);
			x++;
		}
		printf("\n");
	}
	return 0; 
}
	

