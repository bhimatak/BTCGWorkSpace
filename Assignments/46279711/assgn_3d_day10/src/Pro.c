#include "common.h"
#define MAX_LENGTH 5
#define MAX_COLS 3
/*******************************************************************************
 ** FILE NAME  : Pro.c
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
 ** FUNCTION NAME : ACCESS_ARRAY
 ** 
 ** DESCRIPTION : This function return the "ARRAY"
 **
 ** RETURN : This function return size of array
 **
 **
 *******************************************************************************************/
void access_array()
{
	 int arr[][MAX_COLS] = {{1,2,3}, {4,5,6}};/*int data tyep with 2d array*/
	 int (*ptr)[MAX_COLS];                    /*int data type with pointer*/
	 ptr = &arr[0];
	 for(int i = 0; i < MAX_COLS-1; i++)
	 {
		 for(int j = 0; j < MAX_COLS; j++)
		 {
			 printf("%d ",(*ptr)[j]);
		 }
		 for(int j = 0; j < MAX_COLS; j++)
		 {
			 printf("%p ",&(*ptr)[j]);
		 }
		 ptr++;
		 printf("\n");
	 }
}
int main()
{
	 char arr[]="ABC";          /*char data type in array*/
	 char (*ptr2)[MAX_LENGTH];  /*char data type with pointer*/
	 char *ptr3 = "AB";         /*char data type with pointer*/
	 char *ptr4[2];             /*char data type with pointer*/
	 char **ptr5 = {NULL};      /*char data type with pointer initilize to NULL*/
	 char* ptr = (char)&arr;   
	 char msg[][MAX_LENGTH] = {"AB", "gh", "er"};
	 for(int i = 0; i < MAX_COLS-1; i++)
	 {
		 for(int j = 0; j < MAX_COLS-1; j++)
		 {
			 printf("%p ", &(*ptr2)[j]);
		 }
		 ptr2++;
		 printf("\n");
	 }
	 printf("%lu %lu %lu %lu\n", sizeof(ptr2),sizeof(ptr3), sizeof(ptr4), sizeof(ptr5));
	 ptr2 = &msg[0];
	 access_array();
}
