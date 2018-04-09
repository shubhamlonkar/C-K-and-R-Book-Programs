#include <stdio.h>

//Program to copy its input to its output,replacing each string of one or more blanks by a single blank

int main(int argc,char *argv[])
{   
    int c;              //variable to store input character (ascii of input character)
    int lastc;          //variable to store last input character before newline or whitespace(blank) character

    lastc = 0;

    while((c = getchar()) != EOF)   //accept input character until end of file i.e. stop accepting input characters
    {
        if(c == ' ')                //if a character is a whitespace(blank) character 
            if(lastc != ' ')        //if a last character (character before whitespace) is not a whitespace
                putchar(c);         //print a character
                
         if(c != ' ')               //if a character is not a whitespace(blank) character
            putchar(c);             //print a character
        
        lastc = c;                  //store the current character to variable lastc 

    }

    return 0;
}