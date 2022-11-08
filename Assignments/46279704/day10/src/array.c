/* FILE NAME : array.c
 *
 * DESCRIPTION : print first and last names based up on the given data
 *
 * HISTORY 
 *
 * DATE                NAME               REFERENCE             REASON
 * -----------------------------------------------------------------------------
 *  05 NOV 2022      Charishma            SP101                new code
 *
 *******************************************************************************/
#include "common.h"                   //include header files in this code


char first[ROW] [MAX_LEN];          
char last[ROW] [MAX_LEN];
char arr[ROW] [MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};
int *getFirstNames(char arr1[ ] [MAX_LEN], int rowcount,char str1[ ] [MAX_LEN])
{
	for(int i=0;i< ROW;i++)
	{
		const char s[2]=":";
		char *token;

		//get the first token 

		token = strtok(arr[i],s);

		strcpy(str1[i],token);
	}
	for(int i =0;i < ROW; i++)
	{
		printf("%s\n",str1[i]);
	}
	return EXIT_SUCCESS;               //returns exit status 
}
char * getLastNames(char arr1[] [MAX_LEN], int rowount,char str2[] [MAX_LEN])
{
	char* las;
	
	//save length of string
	
	char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};

	for(int i=0;i < ROW; i++)
	{
		//Find the last character with

		las = strrchr(arr[i],':');
		las++;
		printf("%s\n",las);
	}

	return EXIT_SUCCESS;              //returns exit status
}

/* FUNCTION NAME : main()
 * DESCRIPTION : In this function sends a call requestto array.h
 * RETURNS : SUCCESS ,and in case of any error it shows failure
 **/

int main()
{
	int rowcount = 4;
	printf("FirstNames: \n");
	getFirstNames(arr,rowcount,first);
	printf("\n\n");
	printf("LastNames: \n");
	getLastNames(arr,rowcount,last);
	return EXIT_SUCCESS;
}


