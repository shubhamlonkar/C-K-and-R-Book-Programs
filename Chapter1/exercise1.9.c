#include <stdio.h>


int main(int argc, char const *argv[])
{
	int c,lastc;
	
	printf("c:%d\n",c);
	printf("lastc:%d\n",lastc);

	while((c = getchar()) != EOF)
		{
			if(c != ' ')
				putchar(c);
			if(c == ' ')			
			{
				if(lastc != ' ')
					putchar(c);
			}
				

			lastc = c;		

		}


	return 0;
}