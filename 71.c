#include <stdio.h>

void to_binary(long long n, int b);

int main()
{
	long long n;
	int b;
	
	scanf("%lld %d",&n,&b);
	
	to_binary(n,b);
	
	return 0;
}

void to_binary(long long n, int b)
{
	if (n == 0)
		return;
	
	to_binary(n / b, b);
	
	printf("%lld",n % b);
}
