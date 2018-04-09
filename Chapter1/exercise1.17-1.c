#include <stdio.h>
#define MAXLINE 1000

int getline1(char [],int );
void copy1(char [],char []);


int main(int argc, char const *argv[])
{
	int len ;
	char line[MAXLINE];

	while((len = getline1(line,MAXLINE)) > 0)
		{
			if(len > 80)
			{
				printf("%s",line);
			}
		}
	return 0;
}

int getline1(char s[],int lim)
{
	int i,c;
	for(i = 0;i < lim - 1 && (c = getchar()) != EOF && c!= '\n';++i)
		s[i] = c;
	if(c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
