#include <stdio.h>

int to_binary(long long int ,long long int );

int main(){
	long long int n;
	int b;
	
	scanf("%d %d",&n,&b);
	
	to_binary(n,b);
	
	return 0;
}

int to_binary(long long int n,long long int b)
{
	if (n == 0)
		return;
	
	to_binary (n/b,b);
	
	printf("%lld",n%b);
}
