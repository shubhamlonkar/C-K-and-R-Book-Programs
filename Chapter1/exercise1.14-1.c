#include <stdio.h>
#include <ctype.h>

#define MAXCHAR 128

int main(int argc, char const *argv[])
{
	int c,i;
	int charcount[MAXCHAR];

	for(i = 0 ;i < MAXCHAR ; ++i)
		charcount[i] = 0;

	while((c = getchar()) != EOF)
		if(c < MAXCHAR)
			++charcount[c];

	for ( i = 0; i < MAXCHAR; ++i)
	{
		if(isprint(i))
			printf("%5d - %c - %5d : ",i, i, charcount[i]);
		else
			printf("%5d -  - %5d : ",i, charcount[i]);	

		if(charcount[i] > 0)			
		{
			int len = charcount[i];

			for (int j = 0; j < len; ++j)
			{

				printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}