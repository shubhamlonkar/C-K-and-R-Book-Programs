#include <stdio.h>
#define MAX 1000

int main(int argc, char const *argv[])
{
	int i = 0;
	int c;
	int s[MAX];
	int lim = 1000;

	for(i = 0; i < MAX;i++)
	{
		s[MAX] = 0;
	}

	while(i < lim -1)
	{
		if((c = getchar()) != '\n')
			if(c != EOF)
				s[i] = c;
		++i;	
	}


	return 0;
}