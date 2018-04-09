#include <stdio.h>

int main(int argc, char const *argv[])
{
	float fahr,celcius;

	int lower = 0;
	int upper = 300;
	int step = 20;

	printf("Farenheit Celcius Temperature conversion table\n");
	fahr = lower;

	printf("Farenheit\tCelcius\n");
	while(fahr <= upper)
	{
		celcius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t\t%6.1f\n",fahr,celcius);
		fahr = fahr + step;
	}


	return 0;
}