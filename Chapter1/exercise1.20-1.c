#include <stdio.h>
#define TABSTOP 8


int main(int argc, char const *argv[])
{
	int c;
	int pos = 1;
	int nb = 0;

	while((c = getchar())!= EOF)
	{
		if(c == '\t')
		{
			nb = TABSTOP - (pos - 1) % TABSTOP;
		while(nb > 0)
			{
			putchar(' ');
			nb--;
			pos++;
			}
		}
		else if(c == '\n'){
			putchar(' ');
			pos = 1;
		}
		else
			putchar(c);
			++pos;

	}
	
	return 0;
}