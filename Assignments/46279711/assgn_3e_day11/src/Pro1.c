
/*******************************************************************************
 ** FILE NAME  : Pro1.c
 **
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
 ** FUNCTION NAME : SIZE
 ** 
 ** DESCRIPTION : This function return the "ARRAY"
 **
 ** RETURN : This function return size 
 **
 **
 *******************************************************************************************/
#include <stdio.h>
#include <string.h>
#define MAX_LINE 80

int main(void)
{
	char line[MAX_LINE];
	char delim[] = " ,.!;:\n";    /* sets up word separators*/
	char *words, *ptr;           /*char data type*/
	int count = 0;               /*int data type*/
	printf("Enter line of text \n");
	fgets(line,MAX_LINE,stdin);
	ptr= line;
	while ((words = strtok(ptr, delim)) !=NULL)   
	{
		printf("\n%s\n",words);
		count++;
		ptr = NULL; 
	}
	printf("there were %d words in the string \n",count); 
	return 0;
}
