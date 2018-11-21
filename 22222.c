#include <stdio.h>

double harmonic (double a, double b);

int main()
{
	double a,b,x,c;
	
	while(scanf("%lf %lf",&a,&b) == 2)
	{
		printf("%.3f\n",harmonic(a,b));
	}
	
	return 0;
}

double harmonic (double a, double b)
{
	double c;
	
	c = (2*a*b)/(a+b);
	
	return c;
}
