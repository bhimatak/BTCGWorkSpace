/****************************************************************************************************************
 * * FILENAME : assign3c.c
 *
 * * DESCRIPTION : This file defines required function to perform given operation on input array
 *
 * * REVISION HISTORY:
 * * DATE              NAME                       REFERENCE                       REASON
 * * --------------------------------------------------------------------------------------------------------------
 * * 4 Nov 2022   Sushree Ranjita Panda              NEW                        NEW CODE TO PERFORM GIVEN OPERATIONS
 * *
 * * ************************************************************************************************************/
#include<common.h>
#define MAX_LEN 80
#define ROW 4
char first[ROW][MAX_LEN];   /*declaring global variable*/
char last[ROW][MAX_LEN];
char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};  /*declaring and initialising global variable*/
/******************************************************************************************************
 * * FUNCTION NAME : getFirstNames()
 *   
 * * DESCRIPTION : This function receives input array containing first name last name pairs,process each name
 * 		   extract first name and store address in first name array of pointers
 *
 * * RETURNS : EXIT_SUCCESS on success else EXIT_FAILURE
 * * **************************************************************************************************/
int*getFirstNames(char arr1[][MAX_LEN],int rowCount,char str1[][MAX_LEN])
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
/************************************************************************************************
 * * FUNCTION NAME : getLastNames()
 *   
 * * DESCRIPTION : This function receives input array containing first name last name pairs,process each name
 * 		   extract last name and store address in last name array of pointers
 *
 * * RETURNS : EXIT_SUCCESS on success else EXIT_FAILURE
 * * **************************************************************************************************/

char*getLastNames(char arr1[][MAX_LEN],int rowCount,char str2[][MAX_LEN])
{
	char*last;        /*last is a pointer of type char*/
/*********************Save Length of the string***********************/
	char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly :Akbar"};
	for(int i=0;i<ROW;i++)
	{
/***********************Find the last character with************************/
		last=strrchr(arr[i],':');
		printf("%s\n",++last);
	}
	return EXIT_SUCCESS;
}
/************************************************************************************************
 * * FUNCTION NAME : main()
 *
 * * DESCRIPTION : This function calls other defined functions to perform the given operations
 *
 * * RETURNS : SUCCESS in case of failure ERROR
 * * **************************************************************************************************/
int main()
{
	int rowCount=4;   /*declaring variable*/
	printf("FirstNames:\n");
	getFirstNames(arr,rowCount,first);
	printf("\n\n");
	printf("LastNames:\n");
	getLastNames(arr,rowCount,last);
	return EXIT_SUCCESS;
}
