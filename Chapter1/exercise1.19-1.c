#include <stdio.h>
#define MAXLINE 1000

int getline1(char [],int );
void reverse1(char []);

int main(int argc, char const *argv[])
{
	char line[MAXLINE];
	while(getline1(line,MAXLINE) > 0)
	{	printf("String before reverse\n");
		printf("%s",line);

		printf("String after reverse\n");
		reverse1(line);	
		printf("%s",line);
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

void reverse1(char s[])
{
	int i,j,temp;

	i = 0;
	while(s[i] != '\0')
		++i;
	--i;
	if(s[i] == '\n')
		--i;
	j = 0;
	while(j < i){
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		--i;
		++j;
	}
}