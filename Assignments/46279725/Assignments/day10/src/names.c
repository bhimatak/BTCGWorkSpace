/***************************************************************************************************************************
 * FILE NAME : names.c
 * DESCRIPTION : 
 * REVISION HISTORY : 
 * DATE                         NAME                                REFERENCE                          REASON
 * ------------------------------------------------------------------------------------------------------------------------------
 *  6 NOV 2022               Yamabharathi                             new                            
 ***************************************************************************************************************************/

#include<names.h>                       /*header information*/

//char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};         /*an array storing both first name and last name seperated by a : */

/************************************************************************************************************************************************
  FUNCTION NAME : getFirstNames(char arr1[ ][MAX_LEN],int rowcount,char str1[ ][MAX_LEN])
  DESCRIPTION : In this,function displays only the first names present in the 2 dimensional array (arr).
  RETURNS : SUCCESS, incase of error FAILURE.
 ***********************************************************************************************************************************************/
  
int* getFirstNames(char arr1[ ][MAX_LEN], int rowcount,char str1[ ][MAX_LEN]) 
{
	for(int i=0; i < ROW; i++)
	{
		const char s[2] = ":";                          /* ":" here is used to seperate the first and last names*/
		char *token;                        
	        token = strtok(arr1[i], s);                     /*to get the first name*/
		strcpy(str1[i], token );                        /*the value in token is copied to str1[i]*/
	}
				
	for(int i = 0; i < ROW; i++)                             /* ROW is the no.of names we want to enter*/
	{
		printf("%s\n", str1[i]);
	}
	return EXIT_SUCCESS;
}

/************************************************************************************************************************************************
  FUNCTION NAME : getLastNames(char arr1[ ][MAX_LEN],int rowcount,char str1[ ][MAX_LEN])
  DESCRIPTION : In this,function displays only the last names present in the 2 dimensional array (arr).
  RETURNS : SUCCESS, incase of error FAILURE.
 ***********************************************************************************************************************************************/

char* getLastNames(char arr1[][MAX_LEN], int rowcount,char str2[][MAX_LEN])
{
	char* lname;                                                                            /* lname is the array of elements which stores string datatype*/
	char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};
	for(int i=0; i < ROW; i++)
	{
		lname = strrchr(arr[i],':') ;                          /* Find the last character of a string using strrchr*/
		lname++;
		printf("%s\n",lname);                                  /*subsequent last names are printed*/
	}
	return EXIT_SUCCESS;
}
