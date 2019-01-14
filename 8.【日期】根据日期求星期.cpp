#include<stdio.h>
int main()
{
	int iyear,imonth,iday,a,b,c;
	scanf("%d%d%d",&iyear,&imonth,&iday);
	a=(iyear-1)/4*1461+((iyear-1)%4)*365;
	switch(imonth)
	{
		case 1:
			b=0;
			break;
		case 2:	
			b=31;
			break;
		case 3:
			b=31+28;
			break;
		case 4:
			b=31+28+31;
			break;
		case 5:
			b=31+28+31+30;
			break;
		case 6:
			b=31+28+31+30+31;
			break;			
		case 7:
			b=31+28+31+30+31+30;
			break;
		case 8:
			b=31+28+31+30+31+30+31;
			break;
		case 9:
			b=31+28+31+30+31+30+31+31;
			break;
		case 10:
			b=31+28+31+30+31+30+31+31+30;
			break;
		case 11:
			b=31+28+31+30+31+30+31+31+30+31;
			break;
		case 12:
			b=31+28+31+30+31+30+31+31+30+31+30;
			break;
	}
	if (imonth>2)										/*这部分非常重要,不然1月就会爆炸*/ 
	{
		if (iyear%4==0&&iyear%100!=0||iyear%400==0)		/*当然还有这里*/ 
		{
			b=b+1;
		}
	}
	if (iyear>0)
	c=(a+b+(iday-1))%7;
	else
	{
		c=(b+(iday-1))%7;
	}
	printf("%d\n",c);
	return 0;
}
