/*Program to print a histogram of the lengths of words in its input. It is a horizontal histogram.*/

#include <stdio.h>

#define IN  	1
#define OUT 	0
#define MAXWORD 11		//max length of a word
#define MAXHIST 15 		//max length of histogram
int main(void)
{
	int i,c,state,charcount,ovflow,len,maxvalue;
	int wlen[MAXWORD];
	
	state = OUT;
	charcount = 0;
	ovflow = 0;

	for(i = 0; i < MAXWORD ; ++i)
		wlen[i] = 0;

	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\t' || c == '\n')
		{
			state = OUT;
			if(charcount > 0)
				if(charcount < MAXWORD)
					++wlen[charcount];
				else
					++ovflow;

			charcount = 0;	
		}
		else if(state = OUT)
		{
			state = IN;
			charcount = 1;
		}
		else
			++charcount;

	}
	/*maxvalue = 0;
	for(i = 1;i < MAXWORD;++i)
		if(wlen[i] > maxvalue)
			maxvalue = wlen[i];*/

	for(i = 1;i < MAXWORD; ++i){
		
		printf("%2d - %2d : ",i,wlen[i]);
		/*if(wlen[i] > 0){
			if((len = wlen[i] * MAXHIST / maxvalue) <= 0)
				len = 1;
		}else
				len = 0;
		while(len > 0){
			putchar('*');
			--len;
		}*/		
			if(wlen[i] > 0){
				len = wlen[i];
				for (int j = 0; j < len; ++j)
					putchar('*');
			}

		putchar('\n');

	}
	if(ovflow > 0)
		printf("There are %d words >= %d\n",ovflow,MAXWORD);


	return 0;
}
