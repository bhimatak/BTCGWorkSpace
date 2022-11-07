/**********************************************************************************************************
 * *
 * * FILENAME : day10_3c.c
 * *
 * * DESCRIPTION : program to demonstrate how to pass 2D array to function using pointer
 * * 
 * * Revision History :
 * * DATE           NAME             REFERENCE               REASON
 * *
 * * 05-11-2022     SAAHERA           ABC                    Initial creation
 * *
 * * Copyright 2022, Altran Group All Rights Reserved
 * *
 * *******************************************************************************************************
 * *                                  STANDARD HEADER FILES
 * ******************************************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*********************************************************************************************************
 * *                                        MACROS
 * *******************************************************************************************************/
#define MAX_LENGTH 80
#define ROW 4
/**********************************************************************************************************
 * * 
 * * FUNCTION NAME: access_array
 * *
 * * DESCRIPTION: access_element in the array using pointer
 * *
 * * RETURN: SUCCESS or FAILURE
 * */
char first [ROW] [MAX_LENGTH];/* initializing two dimensional array with MAX_LENGTH*/
char last [ROW] [MAX_LENGTH]; /* initializing two dimensional array with MAX_LENGTH*/
char arr[ROW] [MAX_LENGTH]={"Antony:Joseph", "Lata:Marry", "Rajesh:Kumar", "Joly:Akbar"}; /* initializing array with pair of first & last name with strings*/
int* getfirstNames(char arr1[] [MAX_LENGTH], int rowcount, char firstnames[] [MAX_LENGTH]) /*initialize *int  with pointer*/

{
	for(int i=0;i<ROW;i++) /* traversing  each roww*/
	{
		const char s[2] = ":"; /*declaring character constant value*/
		char *strToken; /* initialize  string token*/
		strToken = strtok(arr[i], s); 
		strcpy(firstnames[i], strToken); /* performing string copy on firstname & string token*/
	}
	for(int i=0;i<ROW;i++)
	{
		printf("%s\n", firstnames[i]); /* print formated out firstname*/
	}
	return EXIT_SUCCESS;
}
char* getLastNames(char arr1[] [MAX_LENGTH], int rowcount, char lastnames[] [MAX_LENGTH]) /* initializing character lastname to pointer*/
{
	char* last;
	char arr[ROW] [MAX_LENGTH]={"Antony:Joseph", "Lata:Marry", "Rajesh:Kumar", "Joly:Akbar"}; /* initialize array with pair of first & last names with string*/
	for(int i=0;i<ROW;i++) /*traversing each row*/
	{
		last = strrchr(arr[i],':');/*perfoming string char on array */
		last++; /* increment last value*/
		printf("%s\n", last); /*print last vaue*/
	}
	return EXIT_SUCCESS;
}
/*******************************************************************************************************
 * *
 * * FUNCTION NAME: main
 * *
 * * DESCRIPTION: This calls access_array function and perform required operations
 * *
 * *RETURN: SUCCESS or FAILURE
 * ***************************************************************************************************/
int main()
{
	int rowcount = 4; /*initialize rowcount value to four*/
	printf("firstNames: \n"); /*print formatted out print*/
       	getfirstNames(arr,rowcount,first);
	printf("\n\n"); /* print  newline*/
       	printf("LastNames: \n"); /* print formatted out lastname*/
	getLastNames(arr,rowcount,last);
	return EXIT_SUCCESS;
}

