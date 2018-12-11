#include <stdio.h>

void A (double *a, double *b, double*c);

int main()
{
	double a,b,c;
	
	while(scanf("%lf %lf %lf",&a,&b,&c)==3)
	{
		A(&a,&b,&c);
		printf("%.6lf %.6lf %.6lf\n",a,b,c);
	}

}

void A (double *a, double *b, double *c)
{
	double tmp;
	
	if (*a>*b)
	{
		tmp=*b;
		*b=*a;
		*a=tmp;
	}
	
	if (*b>*c)
	{
		tmp=*c;
		*c=*b;
		*b=tmp;
		
		if (*a>*b)
		{
			tmp=*b;
			*b=*a;
			*a=tmp;
		}
	}
}

	
