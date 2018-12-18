#include <stdio.h>

int main() {

	char ch;
	int s=0,n=0,w=0;

	while ((ch = getchar()) != EOF)
	{
		if (ch == ' ')
			s++;
		else if (ch == '\n')
			n++;
		else
			w++;
	}

	printf("%d %d %d\n",s,n-1,w);

	return 0;
}
