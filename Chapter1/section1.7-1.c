#include <stdio.h>

int main(int argc, char const *argv[])
{

	int power(int ,int );

	int number,ind;


	printf("Enter a number:\n");
	scanf("%d",&number);

	printf("Enter the power for the number:\n");
	scanf("%d",&ind);

int res = power(number,ind);

	printf("The Answer is %d\n",res);


	return 0;
}

int power(int base,int index)
{

	int i,p;

	p = 1;

	for(i = 1;i <= index; ++i)
		p = p * base;

	return p;
}