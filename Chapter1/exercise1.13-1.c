//Horizontal Histogram

#include <stdio.h>
#define IN  0
#define OUT 1

int main(int argc, char const *argv[])
{
	int c , state , nword[11],nc;

	state = OUT;

	nc = 0;

	for (int i = 0; i < 11; ++i)
	{
		nword[i] = 0;
	}

	while((c = getchar()) != EOF)
	{
			if(state == OUT)
				{
					state = IN;
					nc = 1;
				}
			else if(c == '\n' || c == '\t' || c == ' ')
				{
					state = OUT;	
					++nword[nc];
					nc = 0;
				}
				else
					++nc;
	}

		for(int i = 1;i < 11; ++i)
		{
			printf("%2d - %2d:",i,nword[i]);


			if(nword[i] > 0)
			{
				int len = nword[i];
				for (int j = 0; j < len; ++j)
				{
					printf("*");
				}
			}
			printf("\n");	
		}


	return 0;
}
