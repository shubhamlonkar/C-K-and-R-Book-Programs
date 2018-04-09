#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(int argc, char const *argv[])
{
	int fahr;
	float celcius;

	printf("Temperature conversion program\n");
	printf("Farenheit\tCelcius\n");

	for(fahr = LOWER;fahr <= UPPER;fahr = fahr + STEP)
	{
		celcius = (5.0/9.0) * (fahr - 32.0);
		printf("%3d\t\t%6.1f\n",fahr,celcius);
	}

	return 0;
}