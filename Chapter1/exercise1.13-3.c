#include <stdio.h>

#define IN  1               //inside the word i.e. reading characters
#define OUT 0               //Out of the word or whitespace character or tab or newline
#define MAX 11              //Max length of the word
//write a program to print a histogram of the lengths of the words
// in horizontal format

/*Divide the problem into sub problem
1.Accept words as input
2.Use flag (state)to indicate that word has started or ended
3.count the length of the words
4.Display the occurrence of length of words          i.e. 5 - 2 (two words of five characters)
5.Display the occurrence with the help of * as
    a histogram horizontally
*/


int main(int argc,char *argv[])
{
    int c;
    int state;          //state of the word IN or OUT
    int charcount;      //count of the character or occurrence of character
    int overflow;       //exceeded limit of the word length
    int wl[MAX];        //length of the word (here actually wl[index] index is represent as a length of the word)
    
    charcount = 0;
    overflow = 0;


    for(int i = 0;i < MAX;++i)              //initialize array of word length (word length range is 0 to 10) to zero 
        wl[i] = 0;

    state = OUT;                        //initially no character is read or accepted so state is OUT
    
    while((c = getchar()) != EOF)       //Accept user input character until the end of file i.e. stop accepting input character
    {
        if(c == ' ' || c == '\n' || c == '\t')      //If the current character is whitespace(blank) or newline or tab
        {
            state = OUT;                            //state of the word become OUT i.e. no alphanumeric and special character is given as I/P
            if(charcount > 0)                       //if count of the character is greater than zero
                if(charcount < MAX)                 //if count of the character is less than the Maxlimit (which is 11)
                    ++wl[charcount];                //increment the count or occurrence of the word length i.e. word of 5 characters:1
                else       
                    ++overflow;                     //increment the count of the words having length more than 11
            charcount = 0;                          //change the value of character counter to 0.for counting characters of new word        
        }   
        else if(state == OUT)                       //if the state is OUT and we gave alphanumeric or special character as I/P
        {
            state = IN;                             //change the state to IN
            charcount = 1;                          //start to count character from 1 or initialize counter to 1
        }
        else
            ++charcount;                            //increment the character count
    }

    //Display the occurrence of length of the words in histogram manner

    for(int i = 1;i < MAX;++i)
    {
     
        printf("%2d - %2d:",i,wl[i]);           //print length of the words and their occurrences
        
        
        if(wl[i] > 0)                           //if occurrence of wordlength is greater than zero
        {
            int len = wl[i];                    //store the occurrence in a temporary variable called len
            for(int j = 0;j < len; ++j)         //display the occurrence of wordlength by '*'
                printf("*");
        }
        printf("\n");

    }

   printf("%d\t over the limit word found.\n",overflow) ;

    return 0;
}