#include<stdio.h>
int main()
{
	int a[4][4]={0};
	int flag=0,repeat_times,count=1;
	while (scanf("%d",&repeat_times)==1)
	{
		for (int i=0 ;i<=3;i++)
		{
			for(int j=0 ;j<=3;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		if (a[0][0]==a[0][1]||a[0][0]==a[1][0]) flag=1;
		else if (a[0][3]==a[0][2]||a[0][3]==a[1][3]) flag=1;
		else if (a[3][0]==a[2][0]||a[3][0]==a[3][1]) flag=1;
		else if (a[3][3]==a[2][3]||a[3][3]==a[3][2]) flag=1;
		else if (a[0][1]==a[1][1]||a[0][2]==a[1][2]||a[3][1]==a[2][1]||a[3][2]==a[2][2]) flag=1;
		else if (a[1][0]==a[1][1]||a[2][0]==a[2][1]||a[1][3]==a[1][2]||a[2][3]==a[2][2]) flag=1;
		else if (a[1][1]==a[0][1]||a[1][1]==a[1][0]||a[1][1]==a[1][2]||a[1][1]==a[2][1]) flag=1;
		else if (a[2][1]==a[1][1]||a[2][1]==a[2][0]||a[2][1]==a[2][2]||a[2][1]==a[3][1]) flag=1;
		else if (a[1][2]==a[0][2]||a[1][2]==a[2][2]||a[1][2]==a[1][1]||a[1][2]==a[1][3]) flag=1;
		else if (a[2][2]==a[1][2]||a[2][2]==a[3][2]||a[2][2]==a[2][1]||a[2][2]==a[2][3]) flag=1;
		
		if (flag)
		{
			printf("YES\n");
		}
		else 
		{
			printf("NO\n");
		}
		count++;
		if (count>repeat_times)
		{
			break;
		}
		
	}
	
} 
