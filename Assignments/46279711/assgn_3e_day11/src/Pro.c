#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*******************************************************************************
 ** FILE NAME  : Pro.c
 **:wq
 ** DESCRIPTION : This file defines the function which send external message for Refer.
 **
 ** Revision History :
 ** DATE            NAME              REFERENCE            REASON
 ** ----------------------------------------------------------------------
 ** 04 NOV 2022    TEJA SRI           ARRAY                 NEW CODE
 **
 **
 ** Copyright @ 2022 Capgemini All Rights Reserved
 **
 *****************************************************************************************/

/********************************************************************************************  
 ** FUNCTION NAME : SWAP_ELEMENTS , ISVOWEL , MYSTRCAT ,REMOVE_STRING AND PRINTARRAY
 ** 
 ** DESCRIPTION : This function return the "ARRAY"
 **
 ** RETURN : This function return swap values, checking vowel ,removing vowel and print array
 **
 **
 *******************************************************************************************/
#define MAX 30
int main() 
{
	int *ptr;
	int c=0;
	ptr = (int*) malloc(20);
	char str[MAX];
	scanf("%s",str);
	printf("count of word:%d\n\n",count(str));
	char* token = strtok(str, " - ");
	while(token != NULL)
	{
		printf("%s\n ", token);
		token = strtok(NULL, " - ");
	}
	return 0;
}
int count(char str[MAX])
{
	int ct=0;
	for(int i=0;i<strlen(str);i++)
	{
		ct++;
	}
	return ct;
}
