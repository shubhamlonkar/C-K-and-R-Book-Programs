#include <stdio.h>
#define LEN 1024

char st[LEN];

int c_strlen(char []);

int main(void)
{
	int i,len;
	printf("Enter the string:\n");

	for(i = 0;i < LEN ;i++)
	{
		scanf("%c",&st[i]);
		if (st[i] == '\n')
			break;
	}

	 len = c_strlen(st);

	 printf("Length of the string:%d\n",len);

	return 0;
}

int c_strlen(char s[])
{
	int i;

	i = 0;
	while(s[i] != '\0')
		++i;
	return i;
}