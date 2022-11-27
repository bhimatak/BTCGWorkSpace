/*************************************************************************
 * *FILE NAME: day09-3b.c
 *
 * *DESCRIPTION: This file defines the function and performs the operation and sends the output to the user.
 *
 * *
 * Revision History:
 *
 * * DATE		NAME	REFERENCE	REASON
 * ------------------------------------------------------------
 *
 * * 06-11-2022		Rujitha		ABC1234		employee assignment
 *
 * *cpyright @ 2022 all group all rights Reserved
 *
 * ************************************************/

/********************************************
 * *FUNCTION NAME : display
 *
 * *DESCRIPTION : The display() is used to traverse and display the contents of array.
 *
 * *RETURNS :  It returns _SUCCESS,if the statement is executed
 *             It returns _FAILURE , if there is any error.
 * 
 * *
 *
 * ******************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_LEN 20 /*MAX_LEN is the size of the array*/
char arr[][MAX_LEN]={"user1","user2","user3","user4"};/*Here the elements are stored in the array*/  
char* swap_elements (char arr1[][MAX_LEN], int index)/*here it swap the contents of first element with contents of elements given index */
{
	char temp[20];
	strcpy(temp, arr1[0]); /*It copies the elements from source to destination*/
	strcpy(arr1[0], arr[index]);
	strcpy(arr1[index], temp);
	for (int i = 0; i < 4; i++)
	{
		printf("%s\n", arr1[i]);
	}
	return *arr1;/*It returning a pointer to the element at given index*/
}
int isVowel (char x)/*Is vowel checks the vowel*/
{
       	if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == '0' || x == 'U')
	{
		return EXIT_SUCCESS;/*if it is a vowel it returns SUCCESS*/
	}
	else
	{
		return EXIT_FAILURE;/*if it is not a vowel it returns FAILURE*/
	}
}
char *remove_vowel (char arr1[][MAX_LEN], int index)/*It process the string at given index and remove all non-vowels and returns the pointer*/
{
	char large[MAX_LEN]; 
	int d = 0;
	for(int i = 0; arr1[index][i] != '\0'; i++)
	{
		if(isVowel (arr1[index] [i]) == 1)
		{
			large[d] = arr[index][i];
			d++;
		}
	}
	large[d] = '\0';
	printf("After removing vowels %s\n", large);
}

int display()/*It displays the contents of array*/
{
	int i = 0; 
	for(i = 0; i < 4; i++)
	{
		printf("%s\n", arr[i]);
	}
	return EXIT_SUCCESS;
}

int main()
{
	int n;
	char a; 
	printf ("Enter any letter: \n");
	scanf("%c", &a);
	int d = isVowel(a);
	if(d==EXIT_SUCCESS)
	{
		printf("\nThe entered letter is a vowel\n");
	}
	else
	{
		printf ("\nThe entered letter is not a vowel\n");
	}
	printf("The contents of array before swapping:\n"); 
	display();
	printf("enter the index number: \n");
	scanf("%d", &n);
	printf("The swapped element at given index is %s\n", swap_elements(arr,n));

	remove_vowel (arr, n);
	return EXIT_SUCCESS;
}

	         
					            
