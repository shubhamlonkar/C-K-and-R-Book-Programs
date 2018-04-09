#include <stdio.h>
#define IN  0 
#define OUT 1

int main(int argc, char const *argv[])
{
	int c,state;

	state = OUT;

	while((c = getchar()) != EOF)
	{

		if((c == ' ' || c == '\t' || c == '\n') && state == IN)
		{
			state = OUT;
			printf("\n");
		}
		if(state == OUT)
		{
			state = IN;
			putchar(c);
		}
		else
			putchar(c);

	}
	return 0;
}