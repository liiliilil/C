#include <stdio.h>
#include <ctype.h>

int fc (char);

int main()
{
	char ch;
	
	while ((ch = getchar()) != EOF)
	{
		if (fc(ch) == -2)
			printf("%c is not a letter.\n",ch);
		else if (fc(ch) != -1)
			printf("%c is a letter #%d.\n",ch,fc(ch));
	}
	
	return 0;
}

int fc (char ch)
{
	if (isalpha(ch))
		return (tolower(ch) - 'a' + 1 );
	else if (ch == '\n' || ch == ' ') 
		return -1;
	else 
		return -2;
}
