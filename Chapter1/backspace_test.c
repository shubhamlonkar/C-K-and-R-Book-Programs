#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c;
	
	while((c = getchar()) != EOF){
		if(c == '\t')
			printf("\\t");
		if(c == '\b')
			printf("\\b");
		if(c == '\\')
			printf("\\\\");
		if(c != '\b')
			if(c != '\t')
				if(c != '\\')
					putchar(c);
	}
	return 0;
}