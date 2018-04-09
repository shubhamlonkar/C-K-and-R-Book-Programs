#include<stdio.h>

/*program to count blanks,tabs, and newlines*/

int main(int argc,char *argv[])
{
    int c,nb,nt,nl;

    nb = nt = nl = 0;

    while((c = getchar()) != EOF)
    {
        if(c == ' ')
            ++nb;
        if(c == '\t')    
            ++nt;
        if(c == '\n')    
            ++nl;
    }
    printf("count of blanks:%d\tcount of tabs:%d\tcount of newlines:%d\n",nb,nt,nl);

    return 0;
}