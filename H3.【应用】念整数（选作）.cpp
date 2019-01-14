#include<stdio.h>
#include<math.h>
int main()
{
	int a[10];
	const char *strs[11]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu","fu"} ;
	int i,j,add=0;
	long long b,c;
	scanf("%lld",&b);
	c=abs(b);
	for (i=1;i<10;i++)
	{
		a[10-i]=c%10;
		c=c/10;
	}
	if(b<0)
	{
		printf("%s ",strs[10]);
	}
	for (i=1;i<9;i++)
	{
		add+=a[i];
		if(add==0)
		{
			continue;
		}
		printf("%s ",strs[a[i]]);
	}
	printf("%s\n",strs[a[9]]);
	return 0;
}

