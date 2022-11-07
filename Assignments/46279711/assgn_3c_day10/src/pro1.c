#include "common.h"
/*******************************************************************************
 ** FILE NAME  : pro1.c
 **
 ** DESCRIPTION : This file defines the function which send external message for Refer.
 **
 ** Revision History :
 ** DATE            NAME              REFERENCE            REASON
 ** ----------------------------------------------------------------------
 ** 04 NOV 2022    TEJA SRI           ARRAY                 NEW CODE
 **
 **
 ** Copyright @ 2022 Capgemini All Rights Reserved
 **
 *****************************************************************************************/

/********************************************************************************************  
 ** FUNCTION NAME : GETFIRSTNAMES AND GETLASTNAMES
 ** 
 ** DESCRIPTION : This function return the "ARRAY"
 **
 ** RETURN : This function return first and last name
 **
 **
 *******************************************************************************************/
#define MAX_LEN 80
#define ROW 4
char first[ROW][MAX_LEN];/*char data type with 2d array to store first name*/
char last[ROW][MAX_LEN]; /*char data type with 2d array to store last name*/
char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"}; /*char data type*/
int* getFirstNames(char arr1[ ][MAX_LEN], int rowcount,char s1[ ][MAX_LEN])
{
	for(int i=0; i < ROW; i++)
	{
		const char s[2] = ":";
		char *tokens;
		tokens = strtok(arr1[i], s);
		strcpy(s1[i], tokens );
	}
	for(int i = 0; i < ROW; i++)
	{
		printf("%s\n", s1[i]);
	}
	return EXIT_SUCCESS;
}
char* getLastNames(char arr1[][MAX_LEN], int rowcount,char str2[][MAX_LEN])
{
	char* l;/*char data type with pointer*/
	char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};
	for(int i=0; i < ROW; i++)
	{
		l = strrchr(arr[i],':') ;
		l++;
		printf("%s\n",l);
	}
	return EXIT_SUCCESS;
}
int main()
{
	int rowcount=4;	/*int data type initilize to 4*/
	printf("FirstNames: \n");						                                                                                      getFirstNames(arr,rowcount,first);
	printf("\n\n");
	printf("LastNames: \n");
	getLastNames(arr,rowcount,last);
	return EXIT_SUCCESS;
}
							
						     
