#include <stdio.h>

int main(int argc, char *argv[])
{
    int lower(int );    
    int number;
    printf("Enter ASCII number of any upppercase character\n");
    scanf("%d",&number);

    int res = lower(number); 

    printf("ASCII number of uppercase character is %d and lowercase character is %d\n",number,res);

    printf("ASCII characters are %c and %c\n",number,res);
    
    return 0;
}

int lower(int c)
{
    if(c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;    

} 