//Vertical Histogram


#include <stdio.h>

#define MAXWORD 11
#define IN 		1
#define OUT		0


int main(int argc, char const *argv[])
{
	int c,state,i,charcount,ovflow,len;
	int wl[MAXWORD];

	state = OUT;
	charcount = 0;
	ovflow = 0;

	for(i = 0;i < MAXWORD; ++i)
		wl[i] = 0;

	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;
			if(charcount > 0)
				if(charcount < MAXWORD)
					++wl[charcount];
				else
					++ovflow;

			charcount = 0;	
		}
		else if (state == OUT)
		{
			state = IN;
			charcount = 1;
		}
		else
			++charcount;
	}

	for(i = 1;i < MAXWORD;++i)
	{
		if(wl[i] > 0){
			len = wl[i];
		for(int j = 0;j < len; ++j){
			printf("*");
			printf("\n\t\t\t");
		}
	  }
		printf("\t");
	}
	printf("\n");

	for(i = 1;i < MAXWORD;++i)
		printf("%2d \t",wl[i]);
	printf("\n");
	for(i = 1;i < MAXWORD;++i)
		printf(" | \t");
	printf("\n");
	for(i = 1;i < MAXWORD;++i)
		printf("%2d \t",i);
	printf("\n");
	return 0;
}
