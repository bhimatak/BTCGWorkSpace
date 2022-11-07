/**********************************************************************
 * * FILENAME : 3c.c
 * * 
 * * DESCRIPTION : This file recieve the input array containing
 * *
 * *              first name : last name pairs and displays them
 * *
 * * REVISION HISTORY:
 * * 
 * * DATE             NAME             REFERENCE        REASON
 * * 6 October2022   Ramadevi            gagra      The Assignment of CG
 * *
 ************************************************************************/
#include <stdio.h>/* Header file */
#include <stdlib.h>/*Header file */
#include<string.h>/* Header file */
#define MAX_LEN 80/* Macro defined as the max value 80 */
#define ROW 4/* Macro Row value defined as 4*/
/************************************************************************
 * * FUNCTION NAME: main
 * *
 * * DESCRIPTION : It displays the output to the user
 * * 
 * * RETURNS : EXIT_SUCCESS,if it is correct
 * *           EXIT_FAILURE,if it contains errors
 * * 
 * **********************************************************************/

	char first [ROW] [MAX_LEN];/* Here the size of maximum length of first row is taken */
	char last [ROW] [MAX_LEN];/* Here the size of maximum length of last row is taken */
	char arr[ROW] [MAX_LEN]={"Ramadevi:Pavuluri", "Akshara:Jasti", "Bharath:Pavuluri", "Arjun:Jasti"};/* Row array values are tak														en*/
	int* getFirstNames (char arr1[][MAX_LEN], int rowcount, char str1[] [MAX_LEN])
	{
		for (int i=0; i < ROW; i++)
		{
			const char s[2] = ":";
			char *token;
			token = strtok (arr1[i], s);
			strcpy(str1[i], token);
		}
		for(int i = 0; i < ROW; i++)
		{
			
			printf("%s\n", str1[i]);
			
		}

		return EXIT_SUCCESS;
	}
	char getLastNames (char arr1[][MAX_LEN], int rowcount, char str2[][MAX_LEN])
	{
		char* las;
		char arr[ROW] [MAX_LEN]={"Ramadevi:Pavuluri", "Akshara:Jasti", "Bharath:Pavuluri", "Arjun:Jasti"};/*Row array values 															are taken*/
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
		int rowcount=4;
		printf("FirstNames: \n");
		getFirstNames (arr,rowcount, first);
		printf("\n\n");
		printf("LastNames: \n");
		getLastNames (arr, rowcount, last);
		
		return 0;
	}
	
