/*********************************************************************************
 * *
 * * FILE NAME    :  day103c.c
 * *
 * * DESCRIPTION  :  program to demonstrate to perform the given operations on input array to get first name and lastname 
 * *
 * * Revision History :
 * *   DATE		NAME		REFERENCE 	REASON
 * ********************************************************************************
 * *  05-11-2022       vasanthi         New             Array creation
 * *
 * * Copyright 2022, Altran Group All Rights Reserved
 * *
 * * ******************************************************************************
 * *				STANDARD HEADER FILES
 * * *****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/********************************************************************************
 * *				MACROS
 * *****************************************************************************/
#define MAX_LEN 80
#define ROW 4
char first[ROW][MAX_LEN];/*intializing row size with max length*/
char last[ROW][MAX_LEN];/*intializing last row with max length*/
char arr[ROW][MAX_LEN]={"Nukala:Vasanthi","Shaik:Suhana","Rajesh:Kumar","linga:Suvarchala"};/*intializing array with names*/
/**********************************************************************************
 * *
 * *  FUNCTION NAME : getFirstNames
 * *
 * * DESCRIPTION    : It extracts first name,store address in firstname array of pointers
 * *
 * * RETURNS        : SUCCESS OR FAILURE
 * * ***********************************************************************************/
int* getFirstNames(char arr1[][MAX_LEN], int rowcount,char str1[][MAX_LEN])
{
	for(int i=0; i < ROW; i++)/*iterate the loop to get the first names in row*/
	{
		 const char s[2] = ":";/*creating a constant character*/
		 char *token;/*token creation*/
		 //get the first token 
		 token = strtok(arr1[i], s);/*to split a string using strtok()*/
		 strcpy(str1[i], token );/*copying a string into token*/
	}
	for(int i = 0; i < ROW; i++)/*to get the firstnames in an array*/
	{
		printf("%s\n", str1[i]);/*prints the firstname in an array*/
	}
	return EXIT_SUCCESS;/*returns success*/
}
/************************************************************************************
 * * FUNCTION NAME : getLastNames
 * *
 * * DESCRIPTION   : It extracts last name and stores address in lastname array of pointers
 * *
 * * RETURNS       : SUCCESS OR FAILURE
 * *
 * ***********************************************************************************/
char* getLastNames(char arr1[][MAX_LEN], int rowcount,char str2[][MAX_LEN])
{
	char* las;/*to store the lastname*/
	 
	  // save length of string
	  char arr[ROW][MAX_LEN]={"Nukala:Vasanthi","Shaik:Suhana","Rajesh:Kumar","Linga:Suvarchala"};/*save the string*/
	  for(int i=0; i < ROW; i++)/*to find the last names in an array*/
	  {
		  // Find the last character with
		  las = strrchr(arr[i],':') ;/*to store last name*/
		  las++;/*increment */
		  printf("%s\n",las);/*to print the last names*/
	  }
	  return EXIT_SUCCESS;/*returns success*/
}
/************************************************************************************
 * * FUNCTION NAME : main
 * *
 * * DESCRIPTION   : This calls getfirstname and getlastname functions and stores in pointer
 * *
 * * RETURNS       : SUCCESS or FAILURE
 * *
 * ************************************************************************************/
int main()
{
	int rowcount=4;/*to count the rows in array*/
	printf("FirstNames: \n");/*it readss the firstnames*/
	getFirstNames(arr,rowcount,first);/*prints the firstname which was taken from array*/
	printf("\n\n");/*it prints in new line*/
	printf("LastNames: \n");/*it reads the lastname from the array*/
	getLastNames(arr,rowcount,last);/*gets the lastname from the array*/
	return EXIT_SUCCESS;/*returns success*/
}
