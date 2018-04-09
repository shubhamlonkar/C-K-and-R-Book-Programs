#include <stdio.h>


int main(int argc, char const *argv[])
{
	int c,lastc;

	lastc = 0;

	while((c = getchar()) != EOF)
	{
		if(c != ' ')
			putchar(c);
		if(c == ' ')
			if(lastc != ' ')
				putchar(c);
		lastc = c;	
	}
	return 0;
}