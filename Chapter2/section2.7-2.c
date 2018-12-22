#include <stdio.h>

unsigned long int next = 1;

int rand(void);

void srand(unsigned int );	

int main(void)
{
	unsigned long int res;

	res = rand();

	printf("random number:%lu\n",res);

	srand(res);

	printf("seed for random number:%lu\n",next);

	return 0;
}

int rand(void)
{

	next = next * 1103515245 + 12345;
	return (unsigned int)(next/65536) % 32766;
}

void srand(unsigned int seed)
{
	next = seed;
}