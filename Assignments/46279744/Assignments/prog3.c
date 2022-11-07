#include <stdio.h>
void long_word(int n);
int main()
{
	    int n;
	    int currentWordLength = 0;
	    int maxWordLength = 0;
	    char input[100];
	    printf("Enter a string:\n");
	    scanf("%[^\n]", input);
	    long_word(n);
	    printf("Length of longest word is :%d",maxWordLength);
	    for(int i=0;i<n;i++)
	    {
		    printf("\n");
	    }
	    return 0;
}
void long_word(int n)
{
	  int maxWordLength,currentWordLength;
	  char input[100];
	   for (int i = 0;input[i]!= '\0'; i++)
	   {
	      if (input[i] != ' ')
	     {
		   currentWordLength++;
	           continue;
	     }
	      if (currentWordLength > maxWordLength)
	      {
		       maxWordLength = currentWordLength;
		       currentWordLength = 0;
	      }
	     if(currentWordLength>maxWordLength)
	     {
		     maxWordLength=currentWordLength;
	     }
	}	
}

