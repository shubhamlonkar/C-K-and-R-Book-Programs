#include <stdio.h>

#define IN  1
#define OUT 0


/*count lines,words, and characters in input*/

int main(int argc,char* argv[])
{
    int c,nl,nw,nc,state;

    state = OUT;

    nl = nw = nc = 0;

    while((c = getchar()) != EOF)
    {
        ++nc;
        if(c == '\n')
        {
            state = OUT;
            ++nl;
        }
        if(c == ' ' || c == '\n'|| c == '\t')
            state = OUT;
        else if(state == OUT)
        {
            state = IN;
            ++nw;
        }
    }

    printf("countof words:%d\tcount of characters:%d\tcount of lines:%d",nw,nc,nl);

    return 0;
}