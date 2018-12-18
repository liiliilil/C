#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch;
	int a=0,b=0;
	
	while((ch = getchar()) != EOF)
	{
		if (ch >= 'A' && ch <= 'Z')
			a++;
		else if (ch >= 'a' && ch <= 'z')
			b++;
	}
	
	printf("%d %d",a,b);
	
	return 0;
}
