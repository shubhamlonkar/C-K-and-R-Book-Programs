#include <stdio.h>

int main(int argc, char const *argv[])
{
	float celcius,fahr;
	int lower,upper,step;
	printf("Celcius to Farenheit Temperature conversion program.\n");

	lower = 0;
	upper = 300;
	step = 20;

	printf("Celcius\t\t Farenheit\n");

	while(celcius <= upper)
	{
		fahr = (9.0 * celcius) / 5.0 * 32.0;
		printf("%6.1f\t\t%3.1f\n",celcius,fahr);
		celcius = celcius + step; 
	}

	return 0;
}