/********************************************************************************************************* 
 * *
 * * FILENAME : day9_3b.c
 * *
 * * DESCRIPTION : program to demonistrate 2D char array initialized with data  to perform certain operations
 * *
 * * Revision History:
 * * DATE             NAME               REFERENCE              REASON
 * *
 * * 05-11-2022       SAAHERA            ABC                   Initial creation
 * *
 * * Copyright 2022, Altran Group All Rights Reserved
 * *
 * **********************************************************************************************************
 * *                         STANDARD HEADER FILES
 * ***********************************************************************************************************/ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/***************************************************************************************************************
 * *                               MACROS
 * *************************************************************************************************************/
#define MAX_LEN 20
/**************************************************************************************************************
 * * FUNCTION NAME: access_array
 * * 
 * * DESCRIPTION:  acess_array elements and perform certain operations
 * *
 * * RETURNS: SUCCESS or FAILURE
 * */
char arr[][MAX_LEN]={"user1", "user2", "user3", "user4"}; /*initializing array MAX_LEN and defining elements*/
char* swap_elements (char arr1[][MAX_LEN], int index) /*assigning  swap_elements to char array and declaring index*/
{
	char Temp[20]; /* temp value is initialized as 20*/
	strcpy(Temp, arr1[0]); /*performing strcpy on temp and arr1*/
	strcpy(arr1[0], arr1[index]); /*performing strcpy on arr1 and arr1[index] swap operations*/
	strcpy(arr1[index], Temp); /* strcpy on arr1[index] and temp*/
	for(int i=0;i<4;i++) /* traversing through i<4*/
	{
		printf("%s\n", arr1[i]); /*prints formatted out*/
	}
	return *arr1; /* returning to arr1*/
}
int isVowel(char x) /*initializing isVowel of char x*/
{
	if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U') /*declaring vowels */
	{
		return EXIT_SUCCESS; /* if success return to EXIT_SUCCESS*/
	}
	else
	{
		return EXIT_FAILURE; /* if fail return to EXIT_FAILURE*/
	}
}
char *remove_vowel(char arr1[][MAX_LEN], int index) /*Initializing remov_vowel array initialized with ax_len and index*/
{
	char large[MAX_LEN];/* large is initialized to MAX_LEN*/
	int d=0; /* d initializes to 0*/
	for(int i=0; arr1[index][i]!='\0';i++)/* traversing on arr1[index] each time*/
	{
		if(isVowel(arr1[index][i]) ==1)
		{
			large[d] = arr1[index][i];
			d++;
		}
	}
	large[d]='\0';
	printf("After remove vowels %s\n",large); /*print formatted out*/
}
int display()
{
	int i=0;/* i value initializes to 0*/
	for(i=0;i<4;i++) /*travrrsing until <4*/
	{
		printf("%s\n",arr[i]);
	}
	return EXIT_SUCCESS;
}
/********************************************************************************************************
 * * FUNCTION NAME: main
 * *
 * * DESCRIPTION: This function calls access_array and perform required operations
 * *
 * * RETURN: SUCCESS OR FAILURE
 * ******************************************************************************************************/
int main()
{
	int n; /*iniializing int value n*/
	char a; /*initializing char value as a*/
	printf("Enter any letter: \n");
	scanf("%c", &a);
	int d = isVowel(a); /* equalizing d value and isVowel(a)*/
	if(d == EXIT_SUCCESS)
	{
		printf("\nThe entered letter is vowel\n"); /*print the letter vowel if is successful*/
	}
	else
	{
		printf("\nThe entered letter is not vowel\n"); 
	}
	printf("The contents of array before swap:\n"); /* elements before array was swap*/
	display();
	printf("Enter the index number: \n"); /*print the user input index number*/
	scanf("%d", &n); /*address of n*/
	printf("The swapped element at given index is %s\n",swap_elements(arr,n)); /* print swapped element*/
	remove_vowel(arr,n);/* removing vowels from arr,n*/
	return EXIT_SUCCESS;
}


