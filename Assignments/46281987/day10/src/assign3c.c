/*************************************************************************
 * *
 * *  FILE NAME    : assign3c.c
 * *
 * *  DESCRIPTION  : Extract first name and last name from 2D Array
 * *
 * *  DATE      	NAME   		 REFERENCE          REASON
 * *
 * *  05 NOV 2022  	ANNAYASHA    	DAY10      	String Tokenise
 * *
 * *  Copyright 2010, Aricent Technologies (Holdings) Ltd
 * *
 * **************************************************************************/

/*************************************************************************
 * *                               HEADER FILES
 * *************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*************************************************************************
 * *                               MACROS
 * *************************************************************************/
#define MAX_LEN 80
#define LEN(arr) ((int) (sizeof (arr) / sizeof (arr)[0]))

/******************************************************************************
 * 
 * Function Name   : getFirstNames
 * Description     : this function extract first names
 * Returns         : EXIT_SUCCESS
 *
 * *******************************************************************************/
int getFirstNames(char arr[][MAX_LEN], int n, char *firstnames[]) 
{

	for (int i = 0; i < n; i++)
       	{

		char *name = strtok(arr[i], ":");
		firstnames[i] = name;
								
	}

	printf("First Names :\n");
	for (int i = 0; i < n; ++i) 
	{

		puts(firstnames[i]);
							
	}

	return EXIT_SUCCESS;
}

/******************************************************************************
 * 
 * Function Name   : getLirstNames
 * Description     : this function extract last names
 * Returns         : EXIT_SUCCESS
 *
 ****************************************************************************/
int getLastNames(char arr[][MAX_LEN], int n, char *lastnames[]) 
{

	for (int i = 0; i < n; i++)
       	{

		char *name = strtok(arr[i], ":");
		name = strtok(NULL, ":");
		lastnames[i] = name;
	}

	printf("Last Names :\n");
	for (int i = 0; i < n; ++i)
       	{

		puts(lastnames[i]);
	}
			
	return EXIT_SUCCESS;
}

/***************************************************************
 * 
 * Function Name   : main
 * Description     : This is main method where program starts
 * Returns         : Success or Failure
 * 
 * **************************************************************/
int main()
{
	
	char arr1[][MAX_LEN] = {"Antony:Joseph", "Lata:Mary", "Rajesh:Kumar", "Joly:Akbar"};
	char arr2[][MAX_LEN] = {"Antony:Joseph", "Lata:Mary", "Rajesh:Kumar", "Joly:Akbar"};
	int n = LEN(arr1);
	char *firstnames[n];
	char *lastnames[n];

	printf("%d\n", getFirstNames(arr1, n, firstnames));
	printf("%d\n", getLastNames(arr2, n, lastnames));

	return 0;
}

