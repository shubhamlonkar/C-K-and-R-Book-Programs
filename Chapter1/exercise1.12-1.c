#include <stdio.h>

//#define IN  1
//#define OUT 0

int main(int argc, char const *argv[])
{
	int c;
	
	//state = IN;

	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\t')
		{
			printf("\n");
		}
		else
			putchar(c);

	}

	return 0;
}