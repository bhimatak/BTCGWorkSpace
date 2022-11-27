/***********************************************************
 * *FILE NAME : day103c.c
 *
 * *DESCRIPTION : This file is used to perform the operation and give the output to user.
 * *
 * *Revision History :
 *
 * * DATE	NAME	REFERENCE	REASON
 * ------------------------------------------------------
 * * 06-11-2022		Rujitha		ABC1234		employee assignment
 *
 * *copyright @ 2022 alluser referal 
 * *
 * **********************************************/

/*****************************************************
 * * FUNCTION NAME : main
 *
 * *DESCRIPTION : It displays the output to the user.
 * *
 * *RETURNS : EXIT_SUCCESS,if it is correctly writtened
 * 	      EXIT_FAILURE ,if it has errors.
 * *
 * **********************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_LEN 80/*Here the Max function is used to give the size to array*/
#define ROW 3/*It difines the number of Rows*/
char first [ROW] [MAX_LEN];/*Here it is showing the first row with size*/
char last [ROW] [MAX_LEN];/*Here it takes the second element with the size*/
char arr[ROW] [MAX_LEN]={"sukavasi:sivakalyani", "maguluri:hemalatha", "kesineni:chushma"};/*Here we are giving the strings with sizes*/

int* getFirstNames (char arr1[][MAX_LEN], int rowcount, char str1[] [MAX_LEN])/*It stores the address in firstname array of pointers*/
{
	for (int i=0; i < ROW; i++)
	{
		const char s[2] = ":";
		char *token;
		token = strtok (arr1[i], s);/*here strtok to tokenise*/
		strcpy(str1[i], token);/*it copies the string from source to destination*/
	}
	for(int i = 0; i < ROW; i++)
	{
		printf("%s\n", str1[i]);
	}
	return EXIT_SUCCESS;
}
char getLastNames (char arr1[][MAX_LEN], int rowcount, char str2[][MAX_LEN])/*Similarly it extracts and stores the second name in lastnames*/
{
	char* las;
	char arr[ROW] [MAX_LEN]={"sukavasi:sivakalyani", "maguluri:hemalatha", "kesineni:chushma"};
	for(int i=0; i < ROW; i++)
	{
		las=strrchr(arr[i],':');
		las++;
		printf("%s\n", las);
	}
	return EXIT_SUCCESS;
}
int main()
{
	int i;
	int rowcount=4;
	printf("FirstNames: \n");
	getFirstNames (arr,rowcount, first); 
	printf("\n\n");
	printf("LastNames: \n"); 
	getLastNames (arr, rowcount, last); 
	
	return 0;
}

