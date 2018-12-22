#include <stdio.h>

int main(int argc, char *argv[])
{
    int any(char [],char []);

    char str1[] =  {'l','a','n'};
    char str2[] = {'t','o','p'};


    int result = any(str1,str2);

    printf("result:%d\n",result);
    return 0;
}


int any(char s1[],char s2[])
{
    int i, j;
    for(i = 0; s1[i] != '\0';i++)
        for(j = 0; s2[j] != '\0';j++)
            if(s1[i] == s2[j])
                return 1;
    return -1;
} 