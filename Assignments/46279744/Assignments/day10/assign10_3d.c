/**********************************************************************
 * * FILENAME 		: Assign10_3d.c
 * *
 * * DESCRIPTION	:This file defines the functions of max length and size of pointer
 * *
 * *Revision History	: 
 * *
 * *DATE           NAME                    REFERENCE              REASON
 * *-----------------------------------------------------------------------------------
 * *5 NOV 2022     BHARGAVI               W3resorces             to find the max length and max cols
 * *
 **Copyright 2022 Altran Group All Rights reserved
 **
********************************************************************************************************/
#ifndef _ASSIGN10_3d.c
#define _ASSIGN10_3D.C
#include <string.h>/*Header file*/
#include<stdio.h>/*Header file*/
#define MAX_LENGTH 5/*define max length of 5*/
#define MAX_COLS 3/*define max cols of 3*/
#endif /*END OF Assign10_3d.c macro*/
/**************************************************************************************
 ** FUNCTION NAME   : access_array
 **
 ** DESCRIPTION     : Invoke the function and test the appplications
 **
 **RETURNS	    : PRINTF statement
 **
 ***************************************************************************************/
void access_array()
{
	    /*intialization of variable*/
	    int arr[][MAX_COLS] = {{1,2,3}, {4,5,6}};/*array intialization*/
	    int (*ptr)[MAX_COLS];
	    ptr = &arr[0];/*address of arary in pointer*/
            for(int i = 0; i < MAX_COLS-1; i++)/*for loop of max_cols*/
	   { 
	    for(int j = 0; j < MAX_COLS;j++)
	   {
		   printf("%d ",(*ptr)[j]);/*print the pointer*/
	   }
	  for(int j = 0; j < MAX_COLS; j++)
	   { 
	  	printf("%p ",&(*ptr)[j]);/*address of pointer of j*/
	   }
	   ptr++;/*pointer increment*/
	   printf("\n");
          }
}
/*main function to call the above defined function*/
int main()
{
	    /*intialization of variables*/
	    char arr[]="ABC";/*array of charcater datatype*/
	    char (*ptr2)[MAX_LENGTH];		
	    char *ptr3 = "AB";/*ptr3 points to char datatype*/
	    char *ptr4[2];/*ptr4 points to char datatype*/
	    char **ptr5 = {NULL};
	    char ptr = (char)*arr;
	    char msg[][MAX_LENGTH] = {"AB", "gh", "er"};
	    for(int i = 0; i < MAX_COLS-1; i++)/*for loop condition checks for max_cols*/
	   {
		 for(int j = 0; j < MAX_COLS-1; j++)
		 {
			  printf("%p ", &(*ptr2)[j]);/*prints the address of ptr2[j]*/
		 }
			  ptr2++;/*ptr2 increment*/
			  printf("\n");
	   }
			  printf("%lu %lu %lu %lu\n", sizeof(ptr2),sizeof(ptr3), sizeof(ptr4), sizeof(ptr5));/*prints the size of ptr2,ptr3,ptr4,ptr5*/
			  ptr2 = &msg[0];/*address of msg points to ptr2*/
			  access_array();/*calling function of access_array*/
}
