#include <stdio.h>

/*lower: convert c to lower case; ASCII only*/
int lower(int );

int main(void)
{
	int ch;
	printf("enter ascii of uppercase  character:\n");
	scanf("%d",&ch);

	int res = lower(ch);

	printf("ascii of uppercase character:%d \t ascii of lowercase:%d\n",ch,res);

	return 0;
}

int lower(int c)
{
	if( c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}