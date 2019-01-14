#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	float c;
	scanf("%d%d",&a,&b);
	if (a>=0&&a<=12&&b>=0&&b<=59)
	{
		if (a==12)
		{
			c=5.5*b;
			printf("At %d:%02d the angle is %.1f degrees.\n",a,b,c);
		}
		else
		{
			if((30*a-5.5*b)>=0&&(30*a-5.5*b<=180))
			{
				c=30.0*a-5.5*b;
			} 
			else 
			{
				c=5.5*b-30.0*a;
			} 
			if (c>180) 
			c=360.0-c;
			printf("At %d:%02d the angle is %.1f degrees.\n",a,b,c);
		}
		
	}
	return 0;
}
