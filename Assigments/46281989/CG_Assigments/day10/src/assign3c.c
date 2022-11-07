/***************i****************************************
 * * FILENAME : assign3c.c
 * * DESCRIPTION : This file defines required function to person first and last name operation on input array.
 * * REVSION HISTORY :
 * *  DATE            NAME           REFERENCE                 REASON
 * *---------------------------------------------------------------------
 * * 05 Nov 2022     APRAJITA         NEW                  NEW CODE TO PRINT FIRST AND LAST NAME
 * * ******************************************************************************************************/
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LEN 80
#define ROW 4
char first[ROW][MAX_LEN];
char last[ROW][MAX_LEN];
char last[ROW][MAX_LEN]={"Antony:joseph",  "Lata:Mary", "Rajesh:Kumar", "joly:Akbar"};
/***********************************************************************************************************:*
 * * FUNCTION NAME : getFirstNames()
 * * DESCRIPTION : This function prints the first name
 * * RETURNS : SUCCESS and in case of failure ERROR
 * *****************************************************/

int*getFirstName(char arr1[][MAX_LEN],int rowcount, char str1[][MAX_LEN])
{
	for(int i=0;i<ROW;i++)
	{
		const char s[2]=":";
		char *token;

		token=strtok(arr1[i],s);
		strcpy(str1[i],token);
	}
	for(int i=0;i<ROW;i++)
	{
		printf("%s\n", str1[i]);
	}
	return EXIT_SUCCESS;
}
/****************************************************************************
 * * FUNCTION NAME : getLastName()
 * * DESCRIPTION : This function prints the last name
 * * RETURNS : SUCCESS and in case of failure ERROR
 * **********************************************************************/
char*getLastName(char arr1[][MAX_LEN],int rowcount, char str2[][MAX_LEN])
{
	char*las;
	char arr[ROW][MAX_LEN]={"Antony:joseph" , "Lata:Mary", "Rajesh:Kumar","joly:Akbar"};
	for(int i=0;i<ROW;i++)
	{
		las=strrchr(arr[i],':');
		printf("%s\n",++las);

	}
	return EXIT_SUCCESS;
}
/******************************************************************
 * * FUNCTION NAME : main()
 * * DESCRIPTION : This is the main function where all the function are called
 * *RETURNS : SUCCESS and in case of failure ERROR
 * ***************************************************************************/

int main()
{
	int rowcount=4;
	printf("FirstName:\n");
	getFirstName(arr, rowcount, first);
	printf("\n\n");
	printf("LastName:\n");
	getLastName(arr, rowcount, last);
	return EXIT_SUCCESS;
}

