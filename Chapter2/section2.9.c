#include <stdio.h>

int main(int argc, char *argv[])
{
    unsigned getbits1(unsigned ,int ,int );

    unsigned result = 0;

    result = getbits1(128,4,3);

    printf("Res:%d\n",result);

    
    return 0;
}


unsigned getbits1(unsigned x,int p,int n)
{
    return (x >> (p + 1 - n)) & ~(~0 << n);
}