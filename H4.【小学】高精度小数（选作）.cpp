#include<stdio.h>
int main ()
{
	int a,b,i,j,k;
	
	char c;
	scanf("%d%c%d",&a,&c,&b);
	int Array[201];
	if (a>b||b>200||a<0||b<0)
	{
		printf("your input is wrong!\n");
	}
	else
	{
		for(i=0;i<200;i++)
		{
			a=a*10;
			if (a<b)
			{
				Array[i]=0;
			
				continue;
			} 
			else 
			{
				Array[i]=a/b;
				a=a%b;
			}
		} 
	}
	printf("0.");
	for (i=0;i<200;i++)
	{
		if ((Array[i]+Array[i+1])==0)
		{
			break;
		}
		printf("%d",Array[i]);
	}
	printf("\n");
	return 0;
}

