#include<stdio.h> 
int main()
{
	char x;
	scanf("%c",&x);
	if(x>=65&&x<=90)
	{
		x=x+32; 
		printf("%c\n",x);
	}
	else if((x>=97&&x<=122) )
	{
		x=x-32;
		printf("%c\n",x);
	}
	else
	{
		printf("%c\n",x);
	}
	return 0;
}
