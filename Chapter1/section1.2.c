#include <stdio.h>

int main(int argc, char const *argv[])
{
	int lower,upper,step;
	int fahr,celcius;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf("Farenheit\tCelcius\n");

	while(fahr <= upper){

		celcius = 5 * (fahr - 32) / 9;



		printf("%3d\t\t%6d\n",fahr,celcius);

		fahr = fahr+ step;
	}

	return 0;
}