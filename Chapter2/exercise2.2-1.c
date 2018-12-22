#include <stdio.h>

enum loop { NO ,YES };
enum loop okloop = YES;

int main(int argc, char const *argv[])
{
	int i = 0;

	while(okloop == YES)
		if(i >= lim - 1)
			okloop = NO;
		else if((c = getchar()) == '\n')
			okloop = NO;
		else if(c == EOF)
			okloop = NO;
		else{
			s[i] = c;
			++i;
		}
	
	return 0;
}