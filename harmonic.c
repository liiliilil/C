#include <stdio.h>

double harmonic (double, double);

int main(){
	
	double a,b;
	
	while (scanf("%lf %lf",&a,&b) == 2)
		printf("%0.3f\n",harmonic(a,b));
		
	return 0;
}

double harmonic (double a, double b)
{
	
	return 2 / (1/a) + (1/b);

}
