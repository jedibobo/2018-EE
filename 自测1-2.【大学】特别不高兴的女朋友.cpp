#include<stdio.h>
int main ()
{
	int plan[7][2],queue[7];
	int Pos=0;
	for (int i=0;i<7;i++)
	{
		for (int j=0;j<2;j++)
		{
			scanf("%d",&plan[i][j]);
		} 
		queue[i]=plan[i][0]+plan[i][1];
	}
	if (queue[0]==0&&queue[1]==0&&queue[2]==0&&queue[3]==0&&queue[4]==0&&queue[5]==0&&queue[6]==0)
	{
		printf("%d\n",0);
		return 0;
	 } 
	for (int i=0;i<7;i++)
	{
		if (queue[Pos]<queue[i])
		Pos=i;
	}
	if (queue[Pos]>=10)
	printf ("%d\n",Pos+1);
	return 0;
	
} 
