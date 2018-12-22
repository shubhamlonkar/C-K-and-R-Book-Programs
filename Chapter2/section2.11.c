#include <stdio.h>
#define MAXLIMIT 1000

int main(int argc, char *argv[])
{
    int i = 0;
    int number = 0;
    int a[MAXLIMIT];

    for(i = 0;i < MAXLIMIT;i++)
        a[MAXLIMIT] = 0;

    printf("Enter total number:\n");
    scanf("%d",&number);

    for(i = 0;i < number;i++)
    {
        printf("%6d%c",a[i],(i%10 == 9 || i == number-1) ? '\n' :' ');
    }

    return 0;
}
