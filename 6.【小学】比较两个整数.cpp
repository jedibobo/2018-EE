#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if (a<b)
	{
		printf("%d С�� %d.\n",a,b);
	}
	else if(a>b)
	{
		printf("%d ���� %d.\n",a,b);	
	}
	else
	{
		printf("��������ȣ���Ϊ %d.\n",a);		
	}
	return 0;
}
