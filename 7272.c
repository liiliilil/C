#include <stdio.h>

int F (int);

int main () {
	
	int n;
	
	while (scanf("%d",&n) == 1 && n >= 0)
		printf("#%d: %d\n",n,F(n));
		
	return 0;
}

int F (int n)
{
	if (n < 2)
		return n;
	else
		return F(n-2) + F(n-1);
}
