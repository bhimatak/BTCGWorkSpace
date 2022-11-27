/********************************************************************************** ** FILENAME : assignment3b.c
 **
 ** DESCRIPTION: This file defines required on length and coloumns in an array
 ** 
 ** REVISION HISTORY :
 **
 ** DATE           NAME         REFERENCE                 REASON
 * --------------------------------------------------------------------------------
 ** 06-11-2022    SRIVANI        NEW       To print EXIT_SUCCESS&FAILURE for vowels
 **
 **
 ** Copyright @ 2022 Altran Group All Rights Reveresed
 * ******************************************************************************/
#include<stdio.h>/*Header file*/
#include<string.h>/*Header file*/
#include<stdlib.h>/*Header file*/
#define MAX_LEN 80/*Macro defined as the max value 80 */
#define ROW 4/* macro row value defined as 4 */
/**********************************************************************************
 ** FUNCTION NAME : main
 **
 ** DESCRIPTION : It displays the output to the user
 **
 ** RETURNS :EXIT_SUCCESS,if it is correct
 **          EXIT_FAILURE,if it contains errors
 **
 ********************************************************************************/
 
char first [ROW] [MAX_LEN];/* maximum length of first row*/
char last [ROW] [MAX_LEN];/*maximum length of second row*/
char arr[ROW] [MAX_LEN]={"Ambati:srivani", "Ambati:sriujwala","Ambati:nagasudharani","Ambati:borraiah"};
int * getFirstNames(char arr1[] [MAX_LEN], int rowcount,char firstnames[][MAX_LEN])
{
        for(int i=0; i<ROW; i++)/* for loop*/
        {
                const char s[2] =":";
                char *strToken;
                strToken= strtok (arr1[i], s);
                strcpy (firstnames[i], strToken);
        }
        for(int i=0; i < ROW;i++)
        {
                printf("%s\n",firstnames[i]);
        }
        return EXIT_SUCCESS;/* exit_succcess*/
}
char* getLastNames(char arr1[][MAX_LEN], int rowcount, char lastnames[][MAX_LEN])
{
        char*last;
	char arr[ROW] [MAX_LEN]={"Ambati:srivani", "Ambati:sriujwala","Ambati:nagasudharani","Ambati:borraiah"};
                        for(int i=0; i<ROW; i++)
                        {
                                 last=strrchr(arr[i],':');
                                 last++;
                                 printf("%s\n",last);
                        }
                        return EXIT_SUCCESS;
}

int main()
{
        int rowcount=4;
        printf("FirstNames: \n");
        getLastNames( arr,rowcount,first);
        printf("\n\n");
        printf("LastNames: \n");
        getLastNames (arr,rowcount, last);
        return EXIT_SUCCESS;
}

