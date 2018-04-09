#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

int main(void)
{
	int fahr;
	
	printf("Temperature conversion program:\n");
	printf("-------------------------------\n");
	printf("Farenheit\t|Celcius|\n");
	printf("-------------------------------\n");

	for(fahr = LOWER;fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d\t\t|%6.1f |\n",fahr,(5.0/9.0)*(fahr - 32.0));

	return 0;
}