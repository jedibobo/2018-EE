#include<stdio.h>
int main()
{
	int a,b,c;
	char *Rstring[50];
	char *Sstring[50];
	scanf("%d",&a);
	b=a%10;
	c=a/10;
	if (a>=11&&a<=59&&b!=0)
	{
		switch (c)
		{
			case 1:
			Rstring[50]="unreadable";
			break;
			case 2:
			Rstring[50]="barely readable, occasional words distinguishable";
			break;
			case 3:
			Rstring[50]="readable with considerable difficulty";
			break;
			case 4:
			Rstring[50]="readable with practically no difficulty";
			break;
			case 5:
			Rstring[50]="perfectly readable";
			break;
		}
		switch (b)
		{
			case 1:
				Sstring[50]="Faint signals, barely perceptible";
				break;
			case 2:
				Sstring[50]="Very weak signals";
				break;
			case 3:
				Sstring[50]="Weak signals";
				break;
			case 4:
				Sstring[50]="Fair signals";
				break;
			case 5:
				Sstring[50]="Fairly good signals";
				break;
			case 6:
				Sstring[50]="Good signals";
				break;
			case 7:
				Sstring[50]="Moderately strong signals";
				break;
			case 8:
				Sstring[50]="Strong signals";
				break;
			case 9:
				Sstring[50]="Extremely strong signals";
				break;
		}
		printf("%s, %s.\n",Sstring[50],Rstring[50]);
	}
	else printf("The input is wrong!\n");
	return 0;
} 
