/******************************************************************************************************************
 * * FILENAME : assign3c.c
 * * DESCRIPTION : This file defines required function to perform first and last name operations on input array.
 * * REVSION HISTORY : 
 * * DATE            NAME                REFERENCE            REASON
 * * ---------------------------------------------------------------------------------------------------------------
 * * 05 Nov 2022    ABHILIPSA SWAIN       NEW                 NEW CODE TO PRINT FIRST AND LAST NAMES
 * *
 * * **************************************************************************************************************/

#include "common.h"
#define MAX_LEN 80
#define ROW 4
char first[ROW][MAX_LEN];
char last[ROW][MAX_LEN];
char arr[ROW][MAX_LEN]={"Antony:Joseph", "Lata:Mary", "Rajesh:Kumar","Joly:Akbar"};
/*******************************************************************************************************************
 * * FUNCTION NAME : getFirstNames()
 * * DESCRIPTION : This function prints the first name
 * * RETURNS : SUCCESS and in case of failure ERROR
 * ****************************************************************************************************************/

int*getFirstNames(char arr1[][MAX_LEN],int rowcount, char str1[][MAX_LEN])
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

/*******************************************************************************************************************
 * * FUNCTION NAME : getLastNames()
 * * DESCRIPTION : This function prints the last name
 * * RETURNS : SUCCESS and in case of failure ERROR
 * ****************************************************************************************************************/

char*getLastNames(char arr1[][MAX_LEN],int rowcount, char str2[][MAX_LEN])
{
	char*las;
	char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};
	for(int i=0;i<ROW;i++)
	{
		las=strchr(arr[i],':');
		printf("%s\n",++las);
	}
	return EXIT_SUCCESS;
}

/*******************************************************************************************************************
 * * FUNCTION NAME : main()
 * * DESCRIPTION : This is the main function where all the functions are called
 * * RETURNS : SUCCESS and in case of failure ERROR
 * *****************************************************************************************************************/

int main()
{
	int rowcount=4;
	printf("FirstNames:\n");
	getFirstNames(arr,rowcount,first);
	printf("\n\n");
	printf("LastNames:\n");
	getLastNames(arr,rowcount,last);
	return EXIT_SUCCESS;
}
		
