#include <stdio.h>

#define TABSTOP 8

int main(int argc, char const *argv[])
{
	int c,nb,pos;

	nb = 0;

	pos = 1;
	while((c = getchar()) != EOF){
		if(c == '\t'){
			nb = TABSTOP - (pos - 1) % TABSTOP;
			while(nb > 0){
				putchar(' ');
				++pos;
				--nb;
			}
		} else if (c == '\n')
		{
			putchar(c);
			pos = 1;
		}else {
			putchar(c);
			++pos;
		}
	}

	return 0;
}