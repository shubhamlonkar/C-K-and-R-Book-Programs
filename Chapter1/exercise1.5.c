#include <stdio.h>

int main(int argc, char const *argv[])
{
	int fahr;
	float celcius;

	printf("Temperature conversion program\n");

	printf("Farenheit\tCelcius\n");
	for(fahr = 300;fahr >= 0;fahr = fahr - 20)
	{
		celcius = (5.0/9.0) * (fahr + 32.0);
		printf("%3d\t\t%6.1f\n",fahr,celcius);
	}
	return 0;
}