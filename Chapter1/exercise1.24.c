#include <stdio.h>

/*rudimentary syntax checker for C programs*/

void in_comment(void);
void search(int c);

int main(int argc, char const *argv[])
{
	int c;
	while((c = getchar()) != EOF){
		if(c == '/'){
			if ((c = getchar()) == '*')
			{
				in_comment();		//inside comment
			}
			else
				search(c);
		}
	}
	return 0;
}

//search for rudimentary syntax errors
void search(int c)
{

}


void in_comment(void)
{
	int c,d;
	c = getchar();			//previous character
	d = getchar();			//current character

	while(c != '*' || d != '/'){		//search for end
			c = d;						//last char saved in second last
			d = getchar();				//getting next char which could be last char
	}
}