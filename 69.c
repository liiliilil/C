#include <stdio.h>

void Fc (double *a,double *b,double *c);

int main(){
	double a=0,b=0,c=0;
	
	while(scanf("%lf %lf %lf",&a,&b,&c)==3)
	{
		Fc(&a,&b,&c); // 할당 해주기! 
		printf("%f %f %f\n",a,b,c);
	}
	return 0;
}

void Fc (double*a,double *b,double *c)
{
	double tmp;
	
	if (*a > *b){
		tmp = *b;
		*b = *a;
		*a = tmp;
	}
	
	if (*b > *c)
	{
		tmp = *c;
		*c = *b;
		*b = tmp;
	}
		if (*a > *b)
		{
			tmp = *b;
			*b = *a;
			*a = tmp;
		}
}
