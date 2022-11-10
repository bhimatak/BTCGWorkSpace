/************************************************************************************************************************************************
   FILE NAME : mainnames.c
   DESCRIPTION : It displays the first name and last name in the array seperately.
   REVISION HISTORY : 
   DATE                      NAME                    REFERENCE                               REASON 
   ----------------------------------------------------------------------------------------------------------------------------------------
   6 NOV 2022             Yamabharathi                 new                               To display the first name and last name seperately.
 *********************************************************************************************************************************************/

#include<names.h>                                 /*header information*/

char first[ROW][MAX_LEN];                         /*an array which stores all the first names*/
char last[ROW][MAX_LEN];                          /*an array which stores all the last names*/
char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};         /*an array storing both first name and last name seperated by a : */

/***************************************************************************************************************************************

  FUNCTION NAME : main()
   DESCRIPTION : In this, function sends a call event request to mainnames.c
   RETURNS : SUCCESS, incase of error FAILURE.
 
***************************************************************************************************************************************/
int main()
{
	int rowcount=4;                                          /*rowcount is the number of rows in a 2d array*/
	printf("FirstNames: \n");
	getFirstNames(arr,rowcount,first);                       /*this function prints all the first names*/
				
	printf("\n");
	
	printf("LastNames: \n");

	getLastNames(arr,rowcount,last);                         /*this function prints all the last names*/
		
	return EXIT_SUCCESS;
	
}
