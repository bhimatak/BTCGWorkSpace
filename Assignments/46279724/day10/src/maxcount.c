/**************************************************************************************************************
 * FILENAME : maxcount.c
 * DESCRPTION : This file sends a call event request to mamimum.c
 * REVISION HISTROY:
 * DATE                           NAME                           REFERENCE                                    REASON
 * ----------------------------------------------------------------------------------------------------------------------
 *  6 NOV 2022                    sireesha                      new                                     new code for user
 *  *********************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 80
#define ROW 4
/********************************************************************************************
 *
 *
 *                   HEADER INFORMATION
 *
 *
 *******************************************************************************************/
char first[ROW][MAX_LEN];                             /*declare firstrow,maxlen here*/
char last[ROW][MAX_LEN];                              /*declare lastrow,maxlen here*/ 
char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};  /*declare array elements */
int* getFirstNames(char arr1[ ][MAX_LEN], int rowcount,char str1[ ][MAX_LEN])      /*getfirstnames funtcion used to get the names*/
{
	for(int i=0; i < ROW; i++)
	{
		const char s[2] = ":";     /*we can declare const char and token in this function*/
		char *token;
		token = strtok(arr1[i], s);        /*strtok used to change arr1[i],s*/
		strcpy(str1[i], token );           /*strcpy used to copy the str1 to token*/
	}
	for(int i = 0; i < ROW; i++)
	{
		printf("%s\n", str1[i]);       /*here it prints str1[i]*/
	}
	return EXIT_SUCCESS;
}
char* getLastNames(char arr1[][MAX_LEN], int rowcount,char str2[][MAX_LEN])  /*getlastnames used here to give names*/
{
	char* las;                                          
	char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};/*we are giving the array of names*/
	 for(int i=0; i < ROW; i++)
	 {
		 las = strrchr(arr[i],':') ;
		 las++;
		 printf("%s\n",las);
	 }
	  return EXIT_SUCCESS;             /*it gives return success*/
}
int main()
{
	int rowcount=4;
	printf("FirstNames: \n");                 /*it prints the firstnames*/
	getFirstNames(arr,rowcount,first);
	printf("\n\n");                         
	printf("LastNames: \n");               /*it prints the last names*/
	getLastNames(arr,rowcount,last);
	return EXIT_SUCCESS;                    /*returns exit success*/
}









