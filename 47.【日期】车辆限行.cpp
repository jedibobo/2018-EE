#include<stdio.h>
#define startyear 2012
#define startmonth 4
#define startday 9
int main ()
{
	int year,month,day;
	int flag,minus,weekday;
	scanf("%d%d%d",&year,&month,&day);
	int days(int year,int month,int day);
	minus=days(year,month,day)-days(startyear,startmonth,startday);
	printf("%d\n%d\n",days(year,month,day),days(startyear,startmonth,startday));
	printf("%d\n",minus);
	flag=(minus/91)%4+1;
	weekday=(minus%7)+1;
	printf("%d\n%d\n",flag,weekday);
	switch (flag)
	{
		case 1: switch (weekday)
				{
					case 1:printf("3 and 8.\n");break;	
					case 2:printf("4 and 9.\n");break;	
					case 3:printf("5 and 0.\n");break;	
					case 4:printf("1 and 6.\n");break;	
					case 5:printf("2 and 7.\n");break;
					default: printf ("Free.\n");break;	
				}
				break;
		case 2: switch (weekday)
				{
					case 1:printf("2 and 7.\n");break;	
					case 2:printf("3 and 8.\n");break;	
					case 3:printf("4 and 9.\n");break;	
					case 4:printf("5 and 0.\n");break;	
					case 5:printf("1 and 6.\n");break;
					default: printf ("Free.\n");break;	
				}
				break;
		case 3:switch (weekday)
				{
					case 1:printf("1 and 6.\n");break;	
					case 2:printf("2 and 7.\n");break;	
					case 3:printf("3 and 8.\n");break;	
					case 4:printf("4 and 9.\n");break;	
					case 5:printf("5 and 0.\n");break;
					default: printf ("Free.\n");break;	
				}
				break;
		case 4:switch (weekday)
				{
					case 1:printf("5 and 0.\n");break;	
					case 2:printf("1 and 6.\n");break;	
					case 3:printf("2 and 7.\n");break;	
					case 4:printf("3 and 8.\n");break;	
					case 5:printf("4 and 9.\n");break;
					default: printf ("Free.\n");break;	
				}
				break;
	}
	return 0;
} 
 int days(int year,int month,int day)
{
	unsigned char x[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i,s=0;
	for(i=2000;i<year;i++)
	{
		if(i%4==0 && i%100!=0 || i%400==0)
		s+=366;
		else
		s+=365;	
	}
	for(i=1;i<month;i++)
	{
		s+=x[i];
		if(year%4==0 && year%100!=0 || year%400==0)
		{
			if (i==2) s+=1;
		}
	}
	s=s+day-1;
	return s;
}
