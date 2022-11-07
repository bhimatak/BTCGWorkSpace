/**************************************************************************************
 * *
 * *  FILE NAME     : day93b.c
 * *  DESCRIPTION   : Program to demonstrate with functions to perform the given operations on input array.
 * *
 * *  Revision History:
 * *  DATE		NAME		REFERENCE		REASON
 * *  *********************************************************************
 * *  05-11-12		Vasanthi	New			Array creation
 * *
 * *  Copyright 2022, Altran Group All Rights Reserved
 * *
 * * ***********************************************************************
 * *				STANDARD HEADER FILES
 * * **************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*****************************************************************************
 * *				MACROS
 * * *************************************************************************/
#define MAX_LEN 20 
char arr[][MAX_LEN]={"user1", "user2", "user3", "user4"};/* array declaring with four user names*/
/*****************************************************************************
 * *
 * * FUNCTION NAME : swap_elements
 * *
 * * DESCRIPTION   :  swap the content of  first element with contents of element of element at given index
 * * 
 * * RETURNS       :  returns array elements
 * * ***********************************************************************/  
char* swap_elements (char arrl[][MAX_LEN], int index)
{
	char temp[20];/* array declaring with char type size 20*/
	strcpy(temp, arrl[0]);/* to copy the string of arr1 to temp*/
	strcpy(arrl[0],arrl[index]); /* to copy the string with index */ 
	strcpy(arrl[index],temp);/* to copy the string using strcpy */
	for (int i = 0; i < 4; i++)/* using for loop to iterate */
	{
		printf("%s\n", arrl[i]); /* to print the array elements */
	}
	return *arrl; /*return array elements */
}
/******************************************************************************
 * *
 * * FUNCTION NAME : isVowel
 * * 
 * * DESCRIPTION   :  returns whether element is vowel or not
 * *
 * * RETURNS       :  EXIT_SUCCESS or EXIT_FAILURE
 * *
 * * *************************************************************************/
int isVowel (char x)
{
	if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == '0' || x == 'U')/* to check the element is vowel or not */
	{
		return EXIT_SUCCESS;/* returns EXIT_SUCCESS */
	}
	else
	{
		return EXIT_FAILURE;/* returns EXIT_FAILURE */
	}
}
/*********************************************************************************
 * * FUNCTION NAME  : remove_vowel
 * *
 * * DESCRIPTION    :  this function removes  all the vowel characters ,shift the remaining non-vowel characters and return the pointer to the updated string
 * *
 * * RETURNS        :  removes vowel characters
 * *
 * ******************************************************************************/
char *remove_vowel (char arrl[][MAX_LEN], int index)
{
	char large[MAX_LEN]; /* array initializing with max length*/
	int d = 0;/* value assigned with zero*/
	for(int i = 0; arrl[index][i] != '\0'; i++)/* iterating for the elements*/
	{
		if(isVowel (arrl[index] [i]) == 1)/*vowel index is assigned to 1*/
		{
			large[d] = arrl[index][i];/*value assigned to the array index*/
			 d++;/*increment of character*/
		}
	}
	large[d] = '\0';/*value assigned with null character*/
	printf("After removing vowels %s\n", large);/* returns the element after removing vowels*/
}
/***********************************************************************************
 * * FUNCTION NAME : display
 * *
 * * DESCRIPTION   : to traverse and display the contents of array
 * *
 * * RETURNS       :  returns EXIT_SUCCESS
 * *
 * *******************************************************************************/ 
int display()
{
	int i = 0; /*value assigned with 0 for iteration*/
	for(i = 0; i < 4; i++) /* to traverse for the elements*/
	{
		printf("%s\n", arr[i]);/*prints the array elements*/
	}
	return EXIT_SUCCESS;/*returns if it success */
}
/********************************************************************************
 * * FUNCTION NAME : main
 * *
 * * DESCRIPTION   : It is the function to performs the test application on array
 * *
 * * RETURNS       : returns success or failure
 * *
 * ******************************************************************************/
int main()
{
	int n;/*to take the value from the user*/
	char a; /*to take the character*/
	printf ("Enter any letter: \n");/*reads the letter*/
	scanf("%c", &a);/*prints the letter*/
	int d = isVowel(a); /* element check is it vowel or not*/
	if(d == EXIT_SUCCESS)/*returns success the condition is true*/
	{
		printf("\nThe entered letter is a vowel\n");/*prints the element is vowel*/
	}
	else
	{
		printf ("\nThe entered letter is not a vowel\n");/*prints the letter is not vowel*/
	}
	printf("The contents of array before swapping:\n"); /*before swapping of elements*/
	display();/*it executes display function*/
	printf("enter the index number: \n");/*takes index no. from user*/
	 scanf("%d", &n); /*reads index*/
	 printf("The swapped element at given index is %s\n", swap_elements(arr, n));/*element swaped at given index*/
	 remove_vowel (arr, n);/*removes vowels in elements*/
	 return EXIT_SUCCESS;/*returns success*/
}

