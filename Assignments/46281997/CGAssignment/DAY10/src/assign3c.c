/*********************************************************************************************************************************
** FILENAME        : asiign3c.c
**
** DESCRIPTION     : This file defines various function to perform given operation on input arrayy
**
** REVISION HISTORY:
** DATE              NAME                       REFERENCE                       REASON
*--------------------------------------------------------------------------------------------------------------------------------
*  04 NOV 2022    POOJA NATH                   NEW                          NEW CODE TO PERFORM GIVEN OPERATIONS
*
*************************************************************************************************************************************/

/***HEADER FILES*****/
#include"common.h"
#define ROW 4
#define MAX_LEN 80

/****GLOBAL VARIABLE DECLARATION***/
char first[ROW][MAX_LEN];
char last[ROW][MAX_LEN];
char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};

/**********************************************************************
 ** FUNCTION NAME : getFirstNames()
 ** DESCRIPTION   : This function receive input array conataining first 
                  name last name pairs, process each name, extract 
		  first name, store address in firstname array of pointers
 ** RETURNS       : EXIT_SUCCESS on SUCCESS or EXIT_FAILURE
 **
 *********************************************************************/

int *getFirstNames(char arr1[][MAX_LEN],int rowcount,char str1[][MAX_LEN])
{
	for(int i=0;i<ROW;i++)
	{
		const char s[2]=":";
		char *token;
		/*******************Get the token first****************/
		token = strtok(arr1[i],s);
		strcpy(str1[i],token);
	}
	for(int i=0;i<ROW;i++)
	{
		printf("%s\n",str1[i]);
	}
	return EXIT_SUCCESS;
}

/*******************************************************************
 ** FUNCTION NAME : getLastNames()
 ** DESCRIPTION   : This function input array conataining first
                    name last name pairs, process each name, extract
		    last name, store address in lastnamr
 ** RETURNS       : EXIT_SUCCESS on SUCCESS or EXIT_FAILURE
 **
 **********************************************************/

char *getLastNames(char arr1[][MAX_LEN],int rowcount,char str2[][MAX_LEN])
{
	char *las;  /*las is pointer of type char */
	/*********************Save Length of the string***********************/
	char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly :Akbar"};
	for(int i=0;i<ROW;i++)
	{
	       	/***********************Find the last character with************************/
		las=strrchr(arr[i],':');		
		printf("%s\n",++las);
	}
	return EXIT_SUCCESS;		
}

/*******************************************************************
 ** FUNCTION NAME : getLastNames()
 ** DESCRIPTION   : This function calls other defined functions 
                    to perform the given operation
 ** RETURNS       : SUCCESs and incase of failure ERROR
 **
 ***********************************************************/


int main()
{
	/* variable declaration*/
	int rowcount=4;

	printf("FirstNames:\n");
	getFirstNames(arr,rowcount,first);
	printf("\n\n");
	printf("LastNames:\n");
	getLastNames(arr,rowcount,last);
	return EXIT_SUCCESS;
}




