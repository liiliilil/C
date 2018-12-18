#include <stdio.h>

unsigned long long F(int);

int main(){
	int n;
	
	while (scanf("%d",&n) == 1 && n > 0)
		printf("#%d: %llu\n",n,F(n));
	
	return 0;
}

unsigned long long F(int n)
{
	if(n < 2)
		return n;
	else
		return F(n-2) + F(n-1);

}
