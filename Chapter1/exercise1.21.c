#include <stdio.h>

#define TABINC 8


int main(int argc, char const *argv[])
{
	
	int c,pos,nb,nt;

	nb = 0;						/* no of blanks necessary*/
	nt = 0;						/* no of tabs necessary*/

	for(pos = 1;(c = getchar()) != EOF; ++pos)
		if(c == ' ')
		{
			printf("\nyou are in if\n");
			if(pos % TABINC != 0)
				++nb;				//increment no of blanks
			else{
				nb = 0;				//reset no of blanks
				++nt;				//increment no of tabs
			}
		} else {
			printf("\nyou are in else\n");
			for(; nt > 0;--nt)
				putchar('\t');	//output tabs
			if(c == '\t')		//forget the blanks
				nb = 0;
			else
				for(; nb > 0; --nb)
					putchar(' ');
			putchar(c);
			if(c == '\n')	
				pos = 0;
			else if (c == '\t')
				pos = pos + (TABINC - (pos - 1) % TABINC) - 1;
		}


	return 0;
}