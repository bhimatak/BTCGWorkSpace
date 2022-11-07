/**************************************************************************************
 * * FILENAME       : assign9_3b.c
 * *
 * * DESCRIPTION    : This file defines the functions to perform the given operations on input array.
 * *
 * * Revision History : 
 * * DATE               NAME                     REFERENCE                  REASON
 * * -----------------------------------------------------------------------------------------
 * *5 NOV 2022          BHARGAVI                 W3.resouces                To test applications
 * *
 * *Copyright 2022 Altran Group All Rights Reserved
 * *
 * ***************************************************************************************/
#ifndef _ASSIGN9_3b.c
#define _ASSIGN9_3b.c
#include <stdio.h> /*header file*/
#include <stdlib.h> /*header file*/
#include <string.h>/*header file*/
#define MAX_LEN 20 
#endif /*END OF assign9_3b.c macro*/
char arr[][MAX_LEN]={"user1", "user2", "user3", "user4"}; 
/******************************************************************************************
 * * FUNCTION NAME   :  swap_elements,isVowel,remove_vowel
 *
 * * DESCRIPTION     :  Invoke the functions and test applications.
 * *
 * * RETURNS   	     :  EXIT_STATUS, it reports the information about success or failure.
 * 			EXIT_FAILURE, it means the abnormal termination of program.
 *		        EXIT_SUCCESS, it indicates the program execution status.
 * *
 * *
 * *********************************************************************************************/
char* swap_elements (char arrl[][MAX_LEN], int index)
{
	char temp[20];/*character datatype */
	strcpy(temp, arrl[0]); /*string copy from array1 to temp*/
	strcpy(arrl[0],arrl[index]);  /*string copy from array1[index] to array1*/
	strcpy(arrl[index],temp); /*string copy from temp to arr1[index]*/
	for (int i = 0; i < 4; i++) /*for loop to print array*/
	{ 
		 printf("%s\n", arrl[i]); /*prints the arr1[i]*/
	}
	return *arrl;
}
int isVowel (char x)
{
	if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' ||
			x == 'E' || x == 'I' || x == '0' || x == 'U') /*condition for evaluates if a variable is a uppercase vowel or lowercase*/
	{
		 return EXIT_SUCCESS; /*it reports information about success or failure*/
	}
	          else
		  {
			   return EXIT_FAILURE;/*returns abnormal termination of program*/
		  }
}
char *remove_vowel (char arrl[][MAX_LEN], int index)
{
	/*Initializing variable*/
	char large[MAX_LEN]; 
	int d = 0; 
	for(int i = 0; arrl[index][i] != '\0'; i++)/*for loop checks to remove vowels*/
	{
		/*removing vowels*/
       		if(isVowel (arrl[index] [i]) == 1)
			  { 
				   large[d] = arrl[index][i];
				    d++;
			  }
	}
	large[d] = '\0'; /*large is initialized to null character*/
	printf("After removing vowels %s\n", large);
}
int display() /*display function */
{
	int i = 0; /*integer datatype*/
	for(i = 0; i < 4; i++) /*for loop to print array*/
	{
		 printf("%s\n", arr[i]);/*prints the arr[i]*/
	}
	return EXIT_SUCCESS; /*It indicates the program execution status.*/
}
/*main function to call the above defined function*/
int main()
{
	/*initializing variable*/
	int n; /*integer datatype*/
	char a; /*character datatype of a*/
	printf ("Enter any letter: \n");/*accepting input*/
	scanf("%c", &a);
	int d = isVowel(a); 
	if(d == EXIT_SUCCESS)
	{ 
		 printf("\nThe entered letter is a vowel\n");
	}
	else
	{
		 printf ("\nThe entered letter is not a vowel\n");
	}
	printf("The contents of array before swapping:\n"); /*prints before swapping*/
	display();
	printf("enter the index number: \n");/*accepting input*/
	scanf("%d", &n); 
	printf("The swapped element at given index is %s\n", swap_elements(arr,n));/*prints swapped elements after index*/
	remove_vowel (arr, n);/*remove vowel*/
	return EXIT_SUCCESS; /*indicates the from execution status*/
}
