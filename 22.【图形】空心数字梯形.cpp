#include<stdio.h>
int main()
{
	int h,a,i,j;
	scanf("%d%d",&h,&a);
	if (a==0&&h!=0)
	{
		printf("0\n");
		return 0;
	}
	else if (h==0)
	{
		printf("0\n");
		return 0;
	}
	else if(h==1)
	{
		printf("%d\n",a);
		return 0;
	}
	else
	{
		if(h%2==1)
		{
			for (i=0;i<(3*h-1)/2;i++)
			{
				printf("%d ",(a+i)%10);
			}
			for(i=0;i<(3*h-5)/2;i++)
			{
				printf("%d ",(a+h+h/2-5/2-i)%10);
			}
			printf("%d",a);
		}
		else
		{
			for (i=0;i<(3*h-2)/2;i++)
			{
				printf("%d ",(a+i)%10);
			}
			for(i=0;i<(3*h-4)/2;i++)
			{
				printf("%d ",(a+h+h/2-2-i)%10);
			}
			printf("%d",a);
		}
		printf("\n");
		
		
		for(i=0;i<h-2;i++)
		{
			for (j=0;j<2*i+2;j++)
			{
				printf(" ");
			}
			printf("%d ",(a+i+1)%10);
			for (j=0;j<2*(3*h-6-2*i);j++)
			{
				printf(" ");
			}
			printf("%d",(a+i+1)%10);
			printf("\n");
		}
		for (i=1;i<2*h-1;i++)
		{
			printf(" ");
		}
		if(h%2==1)
		{
			for (i=0;i<(h/2+1);i++)
			{
				printf("%d ",(a+h-1+i)%10);
			}
			for(i=0;i<(h/2-1);i++)
			{
				printf("%d ",(a+h+h/2-2-i)%10);
			}
			printf("%d",(a+h-1)%10);
		}
		else
		{
			for (i=0;i<(h/2);i++)
			{
				printf("%d ",(a+h-1+i)%10);
			}
			for(i=0;i<h/2-1;i++)
			{
				printf("%d ",(a+h+h/2-2-i)%10);
			}
			printf("%d",(a+h-1)%10);
		}
		printf("\n");
	}
	return 0;
	
 } 
