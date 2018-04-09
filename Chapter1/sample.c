#include <stdio.h>


int main(int argc, char const *argv[])
{
	int c = '0';

	int d = '4';
	int res;
	
	printf("ascii value of c:%d\n",c);

	printf("ascii value of d:%d\n",d);

	res = d - c;

	printf("res = d - c\n");
	printf("result:%d\n",res);
	return 0;
}