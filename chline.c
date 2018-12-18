#include <stdio.h>
// 66
void chline (char ,int ,int);

int main(){
	char ch;
	int i,j;
	
	scanf("%c %d %d",&ch,&i,&j);
	
	chline('+',1,i-1);
	chline(ch,i,j);
	chline('+',1,i-1);
	
	return 0;
}

void chline (char ch, int i, int j)
{
	for (int a=i; a<=j; a++)
		printf("%c",ch);
}
