#include <stdio.h>
#define MAXLINE 1000


int getline1(char [],int );
void copy1(char [], char []);

int main(int argc, char const *argv[])
{
	int len;
	int max = 0;
	char line[MAXLINE];
	char longest[MAXLINE];

	while((len = getline1(line,MAXLINE)) > 0)
	{
		if(len > max)
		{
			max = len;
			copy1(longest,line);
		}
	}
	if (max > 0)
	{
		/* code */
		printf("%s",longest);
	}


	return 0;
}


int getline1(char s[],int lim)
{
	int c,i;
	
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

void copy1(char to[],char from [])
{
	int i = 0;
	
	while((to[i] = from[i]) != '\0')
		++i;
}