#include<stdio.h>
#include<math.h> 
double sqrt(double x,double p,double e);
int main ()
{
	double x,e;
	scanf("%lf%lf",&x,&e);
	
	printf("%.8lf\n",sqrt (x,x/2,e));
	return 0;
}
double sqrt (double x,double p,double e)
{
	if (fabs(p*p-x)<e)
	return p;
	else
	{
		return sqrt (x,(p+x/p)/2.0,e);
	}
}
