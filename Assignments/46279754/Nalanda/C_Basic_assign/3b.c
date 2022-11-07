/*************************************************************************
* *
* *  FILE NAME    : 3b.c
* *
* *  DESCRIPTION  : Program  to perform the given operations on input array. Invoke the functions and test the application.
* *                 
* *
* *  Revision History:
* *  DATE         NAME    REFERENCE          REASON
* *
* *  05-11-22    Suhana       New           Initial creation
*
* *  Copyright 2022, Altran Group All Rights Reserved
* *
* *************************************************************************
*                    STANDARD HEADER FILES
* *************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**************************************************************************
* *			MACROS
* **************************************************************************/
#define MAX_LEN 20 
/**************************************************************************
* *
* * FUNCTION NAME: swap_elements
* *
* * DESCRIPTION: swap the content of first element (at index 0) with contents of element at  given index 
* *
* * RETURNS:  a pointer to the element at given index
* **************************************************************************/
char arr[][MAX_LEN]={"user1", "user2", "user3", "user4"}; /*function declaration*/
char* swap_elements (char arrl[][MAX_LEN], int index)/*function definition*/
{
	char temp[20]; /* declaring temporary array*/
	strcpy(temp, arrl[0]); /*copying arr1[0] to temporary array*/
	strcpy(arrl[0],arrl[index]); /*copying arr1[0] to arr1[index]*/
	strcpy(arrl[index],temp);/*copying arr1[index] to temp*/
	for (int i = 0; i < 4; i++) /*for loop is for traversing array elements*/
	{ 
		 printf("%s\n", arrl[i]); /*printing formatted array*/
	}
	return *arrl; /*return arr1 elements*/
}
/**************************************************************************
* *
* * FUNCTION NAME: isVowel
* *
* * DESCRIPTION: It checks whether a character is vowel or not 
* *
* * RETURNS:   EXIT_SUCCESS for vowel  character and EXIT_FAILURE for non-vowel character
* * **************************************************************************/
int isVowel (char x)/*function definition*/
{
	if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' ||x == 'E' || x == 'I' || x == '0' || x == 'U') /*checking condition for vowels */
	{
		return EXIT_SUCCESS;  /*returns SUCCESS in case of true condition*/
	}
	 else
	{
	        return EXIT_FAILURE; /*returns FAILURE in case of false condition*/
	}
}
/**************************************************************************
* *
* * FUNCTION NAME: remove_vowel
* *
* * DESCRIPTION: should process the string at given index in array, remove all vowel characters, shift the remaining non-vowel characters 
* *
* * RETURNS:    the pointer to the updated string
* * **************************************************************************/
char *remove_vowel (char arrl[][MAX_LEN], int index)/*function definition*/
{
	char large[MAX_LEN];  /* declaring an array of character datatype */
	int d = 0; /* declaring  an integer variable */
	for(int i = 0; arrl[index][i] != '\0'; i++) /*traversing through array elemnts for checking null characters*/
	{
		if(isVowel (arrl[index] [i]) == 1) /*checking the element in array is vowel or not*/
		{ 
			large[d] = arrl[index][i]; /*initializing large[d]*/
		        d++; /*incrementing d value*/
		}
	}
	large[d] = '\0';  /* NULL character*/
	printf("After removing vowels %s\n", large);/*printing formatted output*/
}
/**************************************************************************
* *
* * FUNCTION NAME: display()
* *
* * DESCRIPTION:  Should implement display() to traverse and display the contents of array
* *
* * RETURNS:  EXIT_SUCCESS
* **************************************************************************/
int display()/*function definition*/
{
	int i = 0; /*initializing i value to 0*/
	for(i = 0; i < 4; i++) /*traversing through for loop*/
	{
		 printf("%s\n", arr[i]);/*printing formatted output*/
	}
	return EXIT_SUCCESS;
}
/**************************************************************************
* *
* * FUNCTION NAME: main
* *
* * DESCRIPTION: main function for 3e function program
* *
* * RETURNS: EXIT_SUCCESS
* **************************************************************************/
int main()
{
	int n; /* declaring an integer for index number*/
	char a; /* declaring a character to take input*/
	printf ("Enter any letter: \n"); /*printing formatted output*/
	scanf("%c", &a); /* reads that variable and print in formaatted */
	int d = isVowel(a); /* initializing an integer variable d to return whether a vowel or not*/
	if(d == EXIT_SUCCESS) /*checks the condition for returning success*/
	{ 
		 printf("\nThe entered letter is a vowel\n"); /*Print  formatted output*/
	}
	else /*checks in case of if condition FAILURE*/
	{
		 printf ("\nThe entered letter is not a vowel\n");/*print formatted output*/
	}
	printf("The contents of array before swapping:\n"); /*print formatted output*/
	display(); /*display function call*/
	printf("enter the index number: \n");/*prints formatted output*/
	scanf("%d", &n); /*reads the element n and gives formatted output*/
	printf("The swapped element at given index is %s\n", swap_elements(arr, n));/*print formatted output*/
	remove_vowel (arr, n);/*remove_vowel function call*/
	return EXIT_SUCCESS;/*returns success */
}
