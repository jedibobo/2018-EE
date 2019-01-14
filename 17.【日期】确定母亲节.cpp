#include<stdio.h>
int main()
{
	int iyear,day4,answer;
	long long total;
	scanf("%d",&iyear);
	total=((iyear/400)*(365*400+97))+((iyear%400)/100)*(365*100+24)+(((iyear%400)%100)/4)*(365*4+1)+(((iyear%400)%100)%4-1)*365;
	if (iyear%4==0&&iyear%100!=0&&iyear%400==0)
	{
		total=total+31+29+31+30;
	}
	day4=total%7;
	if (day4<7);
	{
		answer=13-day4;
	}
	printf("%d\n",answer);
	return 0;
	
}
