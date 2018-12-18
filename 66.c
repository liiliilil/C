#include <stdio.h>

void chline(char ch, int i, int j );

int main()
{
	int i,j;
	char ch;
	
	scanf("%c %d %d",&ch ,&i ,&j);
	
	chline('+', 1, i-1);
	chline(ch, i, j);
	chline('+', 1, i-1);
	
	return 0;
}

void chline (char ch, int i, int j)
{
	for (int b = i; b <= j; b++)
		putchar(ch);
}

// putchar ?

