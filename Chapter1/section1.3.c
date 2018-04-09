#include <stdio.h>

int main(int argc, char const *argv[])
{
	float celcius;
	int fahr;
	printf("Farenheit to Celcius Temperature conversion program\n");

	printf("Note - Using For loop\n");

	printf("Farenheit\tCelcius\n");

	for(fahr = 0;fahr <= 300;fahr = fahr + 20)
	{
		celcius = (5.0/9.0) * (fahr - 32.0);
		printf("%3d \t\t%6.1f\n",fahr,celcius);
	}


	return 0;
}