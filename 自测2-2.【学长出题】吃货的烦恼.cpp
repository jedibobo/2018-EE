#include<stdio.h>

int main ()
{
	int s_weight,total;
	int time,sum=0,i=0;
	scanf("%d%d",&s_weight,&time);	
	int eat[time];
	
	for (int i=0;i<time;i++)
	{
		scanf("%d",&eat[i]);
		if (eat[i]>4||eat[i]<0)
		{
			printf("Wrong input!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
			return 0;
		}
		
	} 
	sum+=eat[0];
	for (int i=0;i<time-1;i++,sum+=eat[i])
	{
		total+=sum;
		printf("%d ",s_weight+total);
	}
	printf("%d\n",s_weight+total+sum);
	

	return 0;
}

