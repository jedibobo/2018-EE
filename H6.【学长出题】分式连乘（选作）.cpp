#include<stdio.h>
int main()
{
	int n,x1,x2,i;
	int temp=1,answer,j;
	long long upmulti,downmulti,dividend,divisor;
	scanf("%d",&n);
	if (n>=1&&n<=20) 
	{
		scanf("%d%d",&x1,&x2);
		upmulti=x1;
		downmulti=x2;
		if (upmulti>downmulti)
		{
			dividend=upmulti;
			divisor=downmulti;
		}
		else
		{
			dividend=downmulti;
			divisor=upmulti;
		}	
		if (dividend%divisor==0)
		{
			answer=divisor;
		}
		else
		{
			for (i=1;temp!=0;i++)
			{
				temp=dividend%divisor;
				dividend=divisor;
				answer=divisor;
				divisor=temp;
			}
		}
		upmulti/=answer;
		downmulti/=answer;
		printf("%d\n",answer);
		if(x1>0&&x1<=1e9&&x2>0&&x2<=1e9)
		{
			for (j=1;j<n;j++)
			{
				scanf("%d%d",&x1,&x2);
				upmulti*=x1;
				downmulti*=x2;
				if (upmulti>downmulti)
				{
					dividend=upmulti;
					divisor=downmulti;
				}
				else
				{
					dividend=downmulti;
					divisor=upmulti;
				}	
				if (dividend%divisor==0)
				{
					answer=divisor;
				}
				else
				{
					for (i=1;temp!=0;i++)
					{
						temp=dividend%divisor;
						dividend=divisor;
						answer=divisor;
						divisor=temp;
					}
				}
				upmulti/=answer;
				downmulti/=answer;
				printf("%d\n",answer);
			}
			if(downmulti==1)
			{
				printf("%lld\n",upmulti);
			}
			else
			{
				printf("%lld/%lld\n",upmulti,downmulti);
			}
		}
		else if(x1==0)
		{
			printf("0\n");
		}
	}
	return 0;
}
