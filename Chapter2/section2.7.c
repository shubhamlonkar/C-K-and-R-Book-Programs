#include <stdio.h>

//convert digit(ascii of a digit to integer)

int atoi(char []);

int main(void)
{
	char digit[2];
	int i,j,res;

	printf("Enter a 2 digit number:\n");

	for(i = 0;i < 2 ;i++)
		scanf("%c",&digit[i]);

	res = atoi(digit);

	
		printf(" Numeric value:%d\n",res);


	return 0;
}

int atoi(char s[])
{

	int i,n;

	n = 0;
	for (i = 0;s[i] >= '0' && s[i] <= '9'; ++i)
	{
		/* code */
		n = 10 * n + (s[i] - '0');
	}
	return n;
}