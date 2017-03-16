/*Program to print a histogram of the frequencies of different characters in its input*/

#include <stdio.h>
#include <ctype.h>

#define MAXCHAR 128

int main(void)
{
	int c,i,len;
	int cc[MAXCHAR];
	for(i = 0;i < MAXCHAR;++i)
		cc[i] = 0;

	while((c = getchar()) != EOF)
		if(c < MAXCHAR)
			++cc[c];

	for(i = 1; i < MAXCHAR; ++i){
		if(isprint(i))
			printf("%5d - %c - %5d : ",i,i,cc[i]);
		else
			printf("%5d -    - %5d : ",i,cc[i]);
		if(cc[i] > 0){
			len = cc[i];
		for (int j = 0; j < len; ++j)
		{
			printf("*");
		}
	}
		printf("\n");
	}
	
	
	return 0;
}
