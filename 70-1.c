#include <stdio.h>
#include <ctype.h>

int ck (char ch);

int main() {

	char ch;

	while ((ch = getchar()) != EOF)
	{
		if (ck(ch) == -2)
			printf("%c is not a letter.\n",ch);
		else if (ck(ch) != -1)
			printf("%c is a letter #%d.\n",ch,ck(ch));
	}

	return 0;
}

int ck (char ch)
{
	if (isalpha(ch))
		return (tolower(ch) - 'a' + 1);

	else if (ch == '\n' || ch == ' ')
		return -1;

	else 
		return -2;
}
