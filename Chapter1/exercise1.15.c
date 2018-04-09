#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main(int argc, char const *argv[])
{
	float Tempconversion();

	int i;

	printf("Temperature conversion program\n");

	for(i = LOWER;i<= UPPER;i = i + STEP)
		{
			float result = Tempconversion(i);
			printf("%d %2.1f\n",i,result);
		}



	return 0;
}

float Tempconversion(int fahr)
{
	float celcius;
	celcius = (5.0/9.0) * (fahr - 32.0);

	return celcius;
}