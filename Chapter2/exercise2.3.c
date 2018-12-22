#include <stdio.h>

int main(int argc, char *argv[])
{
    int htoi(char [],int );
    int powr(int ,int );
    /* code */
    char hexdigit[2];
	int i,j,res;

	printf("Enter a 2 digit number:\n");

	for(i = 0;i < 2 ;i++)
		scanf("%c",&hexdigit[i]);
        
    res = htoi(hexdigit,1);

	printf(" Numeric value:%d\n",res);

    return 0;
}
 

int htoi(char h[],int TotalNoOfdigit)
{
    int powr(int ,int );
    int number = 0;
    int i;
    int getNumber = 0;
    int inhex = 0;
    int FinalIntegerValue = 0;
    int index = TotalNoOfdigit;
    

    i = 0;
    while(inhex == 0)
    {
        if(h[i] >= '0' && h[i] <= '9')
        {
            getNumber = powr(16,index);
            number = (h[i] - '0') * getNumber;
            
        }
        else if (h[i] >= 'A' && h[i] <= 'F')
        {
            getNumber = powr(16,index);
            number = (h[i] - 'A' + 10) * getNumber;
            printf("getnumber at AtoF:%d\n",getNumber);
            printf("number at AtoF:%d\n",number);
        }
        else if (h[i] >= 'a' && h[i] <= 'f')
        {
            getNumber = powr(16,index);
            number = (h[i] - 'a' + 10) * getNumber;
        }
        else
            inhex = 1;
        i++;
        index--;

        FinalIntegerValue = number + FinalIntegerValue;
    }

    
    return FinalIntegerValue;
} 

int powr(int base,int index)
{
    int i ;
    int p = 1;

    for(i = 1;i <= index; i++)
        p = p * base;
    
    return p;
}