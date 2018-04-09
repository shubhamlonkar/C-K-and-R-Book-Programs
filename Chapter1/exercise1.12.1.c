#include <stdio.h>

#define IN  0
#define OUT 1

int main(int argc, char const *argv[])
{
	int c,state;

	state = OUT;
	while((c = getchar()) != EOF)
	{
		if(c == '\n' || c == ' ' || c == '\t')
		{
			state = OUT;
			printf("\n");
		}
		else if(state == OUT)
		{
			state = IN;

		}
		putchar(c);
	}


	return 0;
}