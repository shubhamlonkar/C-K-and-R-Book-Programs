#include <stdio.h>
#define MAXLINE 1000


int getline1(char [],int );
int remove1(char []);

int main(int argc, char const *argv[])
{
	char line[MAXLINE];
	while(getline1(line,MAXLINE) > 0)
	{
		if(remove1(line) > 0)
			printf("%s",line);
	}
		
	return 0;
}

int remove1(char s[])
{
	int i;
	for(i = 0;s[i] != '\n';++i)	//find newline character
		;
	--i;
	while(i >= 0 && (s[i] == ' ' || s[i] == '\t'))	//back off from '\n'
		--i;
/*	if(i >= 0)
	{
		++i;
		s[i] = '\n';
		++i;
		s[i] = '\0';
	}*/

	return i;
}

int getline1(char s[],int lim)
{
	int i,c;
	for(i = 0;i < lim - 1 && (c = getchar()) != EOF && c != '\n';++i)
		s[i] = c;
	if(c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i;
}