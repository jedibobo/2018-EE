#include<stdio.h>
int main()
{
	int a,b,d;
	char c;
	scanf("%d%d\n%c",&a,&b,&c);

	if (b==0&&c=='/') 
	{
		printf("Go to hell!\n");
	}
	else
	{
		switch (c)
		{
			case '+':
				d=a+b;
				break;
			case '-':
				d=a-b;
				break;
			case '*':
				d=a*b;
				break;
			default: 
				d=a/b;
				break;
		}
		printf("%d%c%d=%d\n",a,c,b,d);
	}
	return 0;
} 
