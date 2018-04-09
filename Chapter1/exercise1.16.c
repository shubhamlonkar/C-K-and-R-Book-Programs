#include <stdio.h>
#define MAXLINE 1000 

int getline1(char [],int );
void copy(char [],char []);
int main(void)
{
	int len,max = 0;
	char line[MAXLINE];
	char longest[MAXLINE];


	while((len = getline1(line,MAXLINE)) > 0)
		if (len > max)
		{
			max = len;
			copy(longest,line);
		}
		if(max > 0)
			printf("%s",longest);


	return 0;
}

int getline1(char sentence[],int limit)
{
	int i,j,c;
	j = 0;
	for(i = 0;(c = getchar()) != EOF && c != '\n'; ++i)
		if(i < limit - 2){
			sentence[j] = c;
			++j;
		}
	if(c == '\n')	
	{
		sentence[j] = c;
		++j;
		++i;
	}
	sentence[j] = '\0';

	return i;
}

void copy(char to[],char from[])
{
	int i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}