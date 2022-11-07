
/*******************************************************************************
 ** FILE NAME  : Pro5.c
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
 ** FUNCTION NAME : SIZE ALLOCATION
 ** 
 ** DESCRIPTION : This function return the "ARRAY"
 **
 ** RETURN : This function return size
 **
 **
 *******************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* ptr;/*int data type with pointer*/
	int n;  /*int data type*/
	printf("Enter the number of elemnets you want:");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	printf("The elements of array:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",ptr[i]);
	}
	free(ptr);
	return 0;
}
