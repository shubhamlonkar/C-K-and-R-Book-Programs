#include <stdio.h>

int main(void)
{
	float fahr , celcius;
	int lower , upper , step;

	printf("Temperature conversion program\n");
    printf("Farenheit\tCelcius\n");
	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	while(fahr <= upper)
	{
		celcius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f\t\t%3.1f\n",fahr,celcius);
		fahr = fahr + step;
	}

	return 0;
}