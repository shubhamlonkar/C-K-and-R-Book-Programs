#include <stdio.h>


int main(int argc, char *argv[])
{
    void squeeze(char [],char []);

    char str1[3] = {'c','a','t'};

    char str2[3] = {'b','a','t'};

    squeeze(str1,str2);

    for(int i = 0; i < 3;i++)
        printf("%c",str1[i]);
    printf("\n");    
    return 0;
}

void squeeze(char s1[],char s2[])
{
    int i,j;


    for(i = j = 0; s1[i] != '\0';i++)
    {
        printf("s1[%d]:%c\n\n",i,s1[i]);
        printf("s2[%d]:%c\n\n",j,s2[j]);
        if(s1[i] == s2[j])
        {
            s1[i] = '\0';
           // printf("s[%d]:%c\n",i,s1[i]);
           
        }
        j++;
    }
}