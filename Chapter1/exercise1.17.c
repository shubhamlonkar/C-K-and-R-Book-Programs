#include <stdio.h>
#define MAXLINE 1000

int main(int argc, char const *argv[])
{
	int len, max;


	char line[MAXLINE];
	char line_two[MAXLINE];

	int getline1(char [],int );
	void copy1(char [],char []);

	while((len = getline1(line,MAXLINE)) > 0 )	
	{
		if(len > 80)
		{
			//copy1(line_two,line);			
			printf("%s",line);
		}
		printf("%d\n",len);
	}


	return 0;
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

void copy1(char to[],char from[])
{
	int i;

	i = 0;

	while((to[i] == from[i])!= '\0')
		++i;
}	