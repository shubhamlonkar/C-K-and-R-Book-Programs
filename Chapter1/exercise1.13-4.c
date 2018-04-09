//write a program to print a histogram of the lengths of the words
// in vertical format

/*Divide the problem into sub problem
1.Accept words as input
2.Use flag (state)to indicate that word has started or ended
3.count the length of the words
4.Display the occurrence of length of words          i.e. 5 - 2 (two words of five characters)
5.Display the occurrence with the help of * as
    a histogram horizontally
*/

#include <stdio.h>
#define IN  1           //inside a word i.e. getting input alphanumeric or special characters  
#define OUT 0           //out of the word i.e. accepting whitespace or newline or tab characters as an input
#define MAX 11          //Maximum length of the word

int main(int argc,char* argv)
{
    int c;              //to store input of characters(ascii of characters)
    int state;          //to store state of the word (inside a word or outside)
    int wl[MAX];        //length of the word (here actually wl[index] index is represent as a length of the word)


    while((c = getchar()) != EOF)



    return 0;
}