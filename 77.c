#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, x, Q;
	
	while (scanf("%lf %lf %lf",&a,&b,&c)==3)
	{
		x = b*b-4.0*a*c;
		Q = sqrt(x);
		
		if (x > 0)
			 printf("%.3lf %.3lf\n",(-b + Q )/ (2.0*a),(-b - Q )/ (2.0 * a));
		else if (x == 0)
			printf("%.3lf\n",-b / (2.0*a));
		else
			printf("Imaginary root\n"); 
	}
	
	return 0;
}



