/*************************************************************************
* * *  FILE NAME    :  3c.c
* * *
* * *  DESCRIPTION  : Program to write an application with functions to perform the given operations on input array. Invoke the functions and test the                              application.            
* * *
* * *  Revision History:
* * *  DATE         NAME    REFERENCE          REASON
* * *
* * *  05-11-22    Suhana       New           Initial creation
* *
* * *  Copyright 2022, Altran Group All Rights Reserved
* * *
* * *************************************************************************
* *                    STANDARD HEADER FILES
* * *************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/**************************************************************************
* * *                     MACROS
* * **************************************************************************/
#define MAX_LEN 100
#define ROW 4
/**************************************************************************
* * *
* * * FUNCTION NAME: getFirstNames
* * *
* * * DESCRIPTION: receive input array containing 'n'  first name:last name pairs, where n=rowcount, 
* * * process each name, extract firstName, store address
* * * in firstname array of pointers.
* * *
* * * RETURNS:  EXIT_SUCCESS on success else EXIT_FAILURE
* * **************************************************************************/
char first [ROW] [MAX_LEN]; /*declaring a variable for first name*/
char last [ROW] [MAX_LEN];/*declaring a variable for last name*/
char arr[ROW] [MAX_LEN]={"Shaik:Suhana", "Patan:Karishma", "Sayyad:Shaheer", "Mohammad:Munwar"};/*initializing 2D array with first name and last name*/
int* getFirstNames (char arr1[][MAX_LEN], int rowcount, char str1[] [MAX_LEN])/*function definition*/
{
	for (int i=0; i < ROW; i++)/*traversing row wise */
	{
		const char s[2] = ":"; /*s2 array initialized with ':' with constant character data tyrp*/
		char *token; /*token pointer pointing to char data type*/
		token = strtok (arr1[i], s); /*tokenizing the elements*/
		strcpy(str1[i], token); /*copying tokens to str1[i]*/
	}
	for(int i = 0; i < ROW; i++)/*for each row traversing*/
	{
		printf("%s\n", str1[i]);/*prints formatted array*/
	}
	return EXIT_SUCCESS; /*return SUCCESS*/
}
/**************************************************************************
* * *
* * * FUNCTION NAME: getLatsNames
* * *
* * * DESCRIPTION :  it extracts and stores  in lastnames
* * * RETURNS:  EXIT_SUCCESS
* * **************************************************************************/
char getLastNames (char arr1[][MAX_LEN], int rowcount, char str2[][MAX_LEN])/*function definition*/
{
	char* las; /* las pointer pointing to char data type*/
	char arr[ROW] [MAX_LEN]={"Shaik:Suhana", "Patan:Karishma", "Sayyad:Shaheer", "Mohammad:Munwar"};/*initializing array*/
	for(int i=0; i < ROW; i++) /*traversing row*/
	{
		las=strrchr(arr[i],':');/*each string seperated by ':'*/
		las++; /*incrementing las*/
		printf("%s\n", las);/*printing formatted output*/
	}
	return EXIT_SUCCESS;/*return in case of SUCCESS*/
}
/**************************************************************************
* * *
* * * FUNCTION NAME: main
* * *
* * * DESCRIPTION: performs getFirstNames and getLastNames functions by calling
* * *
* * * RETURNS:  EXIT_SUCCESS
* * **************************************************************************/
int main()
{
	int rowcount=4; /*initializing rowcount to 4*/
	printf("FirstNames: \n");/*printing formatted output*/
	getFirstNames (arr,rowcount, first); /*function call*/
	printf("\n\n");/*prints formatted output*/
	printf("LastNames: \n"); /*prints formatted output*/
	getLastNames (arr, rowcount, last); /*function call*/
	
	return EXIT_SUCCESS;/*return in case of SUCCESS*/
}
