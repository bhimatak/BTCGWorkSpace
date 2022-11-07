/******************************************************************
 * *
 * *FILE NAME : assign3c.c
 *
 * DESCRIPTION : The file defines the first name and last name
 *
 * REVISION HISTORY :
 * DATE                         NAME                    REFERENCE                 REASON
 *-------------------------------------------------------------------------------------------
 * 04 NOV 2022           Lavanya                    New                       Initial creation
 *
 * Copyright@2022,Aricent Technologies(Holdings)Ltd
 *
 * ************************************************************************/
/*****************************************************************
 *
 *                    HEADER FILES
 ************************************************************************/              
#include<stdio.h>
#include<assign3c.h>
/*************************************************************
 *
 * Function name : Main
 * DEscription: Finds the first name and last name 
 * Returns:Success or Failure
 *
 ****************************************************************/
char first[ROW][MAX_LEN];
char last[ROW][MAX_LEN];
char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};

int* getFirstNames(char arr1[ ][MAX_LEN], int rowcount,char str1[ ][MAX_LEN])
{
	for(int i=0; i<ROW; i++)
	{
		const char s[2] = ":";
		char *token;
		/*get the first token*/
		token = strtok(arr1[i], s);
	       	strcpy(str1[i], token );
       	}
     	for(int i = 0; i<ROW; i++)
	{
		printf("%s\n", str1[i]);
	}	        
	return EXIT_SUCCESS;
}
char* getLastNames(char arr1[][MAX_LEN], int rowcount,char str2[][MAX_LEN])
{
	     char* las;
	     /*saves the length of string*/
	     char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};
	     for(int i=0; i<ROW; i++)
	     {
		     /*find the last character */
		     las = strrchr(arr[i],':') ;
		     las++;
		     printf("%s\n",las);
	     }
	     return EXIT_SUCCESS;
}
int main()
{
      	int rowcount=4;
	printf("FirstNames: \n");
	getFirstNames(arr,rowcount,first);
	printf("\n\n");
	printf("LastNames: \n");
	getLastNames(arr,rowcount,last);
	return EXIT_SUCCESS;
}
