/*********************************************************************************
 * * FILENAME     :  Assign10_3c.c
 * *
 * *DESCRIPTION   :  It returns the firstname and last names separately using array.
 * *
 * * Revision History :
 * *
 * DATE                NAME                REFERENCE                REASON
 * --------------------------------------------------------------------------------------
 * 5 NOV 2022         Bhargavi            w3.resouces,		    Assignment
 * 					  tutorials point
 * *
 * *Copyright 2022 Altran Group All rights Reserved
 * *
 * *****************************************************************************/
#ifndef _ASSIGN10_3C.c
#define _ASSIGN10_3C.c
#include <stdio.h> /*header file*/
#include <stdlib.h> /*header file*/
#include <string.h>/*string header file*/
#define MAX_LEN 80 /*defines max length 80*/
#define ROW 4 /*define row to 4*/
#endif /*END OF ASSIGN10_3C.c macro*/
/*Initializing variables*/
char first[ROW][MAX_LEN];/*character first array of maxlength,row*/
char last[ROW][MAX_LEN];/*charcater last array of maxlen,row*/
char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};
/************************************************************************************
 * * FUNCTION NAME      :  Assign10_3c.c
 * * DESCRIPTION	:  In this function it get FirstNames and LastNames*
 * *
 * *
 * *RETURN		:  EXIT_SUCCESS,it returns the execution status 
 * *
 * ********************************************************************************/
int* getFirstNames(char arr1[][MAX_LEN], int rowcount,char str1[][MAX_LEN])
{
	    
	    for(int i=0; i < ROW; i++) /*condition for loop*/
	   {
		   const char s[2] = ":";/*constant char*/
		   char *token; /*Token is pointing to char datatype*/
	           token = strtok(arr1[i], s); /*string token is stored in token*/
	           strcpy(str1[i], token );/*copy of token to str1*/
	  }
	    for(int i = 0; i < ROW; i++)
	 {
		 printf("%s\n", str1[i]);/*prints string 1*/
	 }	    
	  return EXIT_SUCCESS;/*return exit success of execution*/
}
char* getLastNames(char arr1[][MAX_LEN], int rowcount,char str2[][MAX_LEN])
{
	     char* las;/*las pointing to char datatype*/
	     char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"}; /*array initialization*/
	     for(int i=0; i < ROW; i++)
	   { 
		   las = strrchr(arr[i],':');
		   las++;/*increment of las*/
		   printf("%s\n",las);/*prints the las*/
	   }
          return EXIT_SUCCESS;/*it retuens the execution status */
}
/*****************************************************************************
main function to call the above defined function/
*/
int main()
{
	    /*initializing variable*/
	    int rowcount=4;/*rowcount is of integer datatype*/
	    printf("FirstNames: \n");/*print firstname*/
	    getFirstNames(arr,rowcount,first);
	    printf("\n\n");
	    printf("LastNames: \n");/*print Lastname*/
	    getLastNames(arr,rowcount,last);
	    return EXIT_SUCCESS;/*return exit success of execution*/
}

