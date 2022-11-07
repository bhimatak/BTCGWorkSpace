
/*******************************************************************************
 ** FILE NAME  : Pro4.c
 **:wq
 ** DESCRIPTION : This file defines the function which send external message for Refer.
 **
 ** Revision History :
 ** DATE            NAME              REFERENCE            REASON
 ** ----------------------------------------------------------------------
 ** 04 NOV 2022    TEJA SRI           ARRAY                 NEW CODE
 **
 **
 ** Copyright @ 2022 Capgemini All Rights Reserved
 **
 *****************************************************************************************/

/********************************************************************************************  
 ** FUNCTION NAME :TRAVERSE
 ** 
 ** DESCRIPTION : This function return the "ARRAY"
 **
 ** RETURN : This function return traverse of array
 **
 **
 *******************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

char* word(char w[]) 
{
	    char *temp = w;/*char data type */
	        return temp;
}

char** tokens() {
	char *one = word("One");
	char *two = word("two");
	char *three = word("three");
	char *four = word("four");
	char *five = word("five");
	char *six = word("six");
	char *seven = word("seven");
	char *eight = word("eight");
	char *nine = word("nine");
	char *ten = word("ten");
	char *eleven = word("ten");
	char *twelve = word("ten");
	char *thirteen = word("ten");

	char *words[13];	
	words[0] = one;
	words[1] = two;
	words[2] = three;
	words[3] = four;
	words[4] = five;
	words[5] = six;
	words[6] = seven;
	words[7] = eight;
	words[8] = nine;
	words[9] = ten;
	words[10] = eleven;
	words[11] = twelve;
	words[12] = thirteen;

	char **pp = words;
	return pp;
}

int main() 
{
	     char **pp = (char **)malloc(13 * sizeof(char));
 	     pp = tokens();
	     for (int i = 0; i < 12; i++)
	     {
		     printf("%s\n", *pp);
		     *pp++;
	     }
	     for (; *pp; *pp++)
	     {
		     printf("%s\n", *pp);
	     }
	     return 0;
}
