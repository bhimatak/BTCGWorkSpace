/******************************************************************************************
 * FILENAME : DAY10.C
 * DESCRAIPTION : This file defines the required operation input array max length
 * REVISION History:
 * DATE          NAME               REFERENCE             REASON
 *------------------------------------------------------------------------------------
 * 5 oct 2022   siri              NEW                  To print user details
 *  
 *
 *  Copyright @2022  Altran Group All RIghts Reserved
 *  ************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 80
#define ROW 4
/*****************************************************************
 * FUNCTION NAME: MAX LEN OF FRIST NAME AND LAST NAME
 * DESCRIPTION :This function takes the frist name last name and prints the frist name last name separately
 * RETURN : SUCCESS
 * ***************************************************************************************88
 * **********************/

char first [ROW] [MAX_LEN];
char last [ROW] [MAX_LEN];
char arr[ROW] [MAX_LEN]={"Koppula:Pranavika", "atla:Maneesha", "sanikommu:swathi", "kolli:akhi"};
	       
int* getFirstNames (char arr1[][MAX_LEN], int rowcount, char str1[] [MAX_LEN])
{
   for (int i=0; i < ROW; i++)
    {
       const char s[2] = "i";
       char *token;
       token = strtok (arr1[i], s);
       strcpy(str1[i], token);
    }
    for(int i = 0; i < ROW; i++)
     {
	printf("%s\n",str1[i]);/* prints the contents*/
     }
     return EXIT_SUCCESS;
}
char getLastNames (char arr1[][MAX_LEN], int rowcount, char str2[][MAX_LEN])
{

char* las;
char arr[ROW] [MAX_LEN]={"Koppula:pranavika", "atla:Maneesha" "sanikommu:swathi", "kolli:akhi"};
for(int i=0; i < ROW; i++)
{
  las=strrchr(arr[i],':');
  las++;
  printf("%s\n", las);/* prints the contnet*/
}
return EXIT_SUCCESS;
}

int main()
{
    int rowcount=4;
    printf("FirstNames: \n");/* prints the content*/
   getFirstNames (arr,rowcount, first); /* prints the content*/
  printf("\n\n");/* prints the content*/
   printf("LastNames: \n"); /*prints the content*/
 getLastNames (arr, rowcount, last); 
 return EXIT_SUCCESS;
}

