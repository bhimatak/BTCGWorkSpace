/***************************************************************************
 * * FILE NAME   : day103d.c
 * *
 * * DESCRIPTION : Program to demonstrate how to pass a 2D array to a function
 * * 			using pointers
 * *
 * * Revision History :
 * * DATE		NAME		REFERENCE	REASON
 * * ************************************************************************
 * * 05-11-2022		Vasanthi        New            Array creation
 * *
 * * Copyright 2022, Altran Group All Rights Reserved
 * *
 * **************************************************************************
 * *			STANDARD HEADER FILES
 * **************************************************************************/
#include<stdio.h>
#include <string.h>
#include<stdlib.h>
/***************************************************************************
 * *				MACROS
 * *************************************************************************/
#define MAX_LENGTH 5
#define MAX_COLS 3
/***************************************************************************
 * *
 * * FUNCTION NAME : access_array
 * *
 * * DESCRIPTION   : access elements in the array
 * *
 * * RETURNS       : SUCCESS or FAILURE
 * *
 * ***********************************************************************/
void access_array()
{
	int arr[][MAX_COLS] = {{1,2,3}, {4,5,6}};/*initializing 2d array*/
	int (*ptr)[MAX_COLS];/*declaring a pointer that points to integer data type*/
	ptr = &arr[0];/*pointer pointing to address of arr[0]*/
	for(int i = 0; i < MAX_COLS-1; i++)/*traversing through MAX_COlS*/
	{
		for(int j = 0; j < MAX_COLS; j++)/*traversing each column element*/
		{
			printf("%d ",(*ptr)[j]);/*prints formatted output*/
		}
		for(int j = 0; j < MAX_COLS; j++)/*traversing each column*/
		{
			printf("%p ",&(*ptr)[j]);/*prints the pointer value*/
		}
		ptr++;/*incrementing pointer*/
		printf("\n");/*prints the new line*/
	}
}
/**************************************************************************
 * * FUNCTION NAME : main
 * *
 * * DESCRIPTION   : This calls access_array function and performs operations on pointer
 * *
 * * RETURN        : SUCCESS or FAILURE
 * *************************************************************************/
int main()
{
	char arr[]="ABC";/*array is intialized with string*/
	char (*ptr2)[MAX_LENGTH];/*pointer array ptr2 pointing to character data type*/
	char *ptr3 = "AB";/*array is intialized with string*/
	char *ptr4[2];/*pointer ptr4 contains 3 characters*/
	char **ptr5 = {NULL};/*pointer intialized with null value*/
	char ptr = (char)&arr;/*type casting*/
	char msg[][MAX_LENGTH] = {"AB", "gh", "er"};/*msg array intializing with strings*/
	for(int i = 0; i < MAX_COLS-1; i++)/*traversing each column*/
	{
		for(int j = 0; j < MAX_COLS-1; j++)/*traversing each column for pointer*/
		{
			printf("%p ", &(*ptr2)[j]);/*printing pointer value*/
		}
		ptr2++;/*incrementing pointer value*/
	printf("\n");/*prints new line*/
	}
	printf("%lu %lu %lu %lu\n", sizeof(ptr2),sizeof(ptr3), sizeof(ptr4), sizeof(ptr5));/*printing every pointer's size*/
	ptr2 = &msg[0];/*address and msg array intialized to ptr2*/			
	access_array();/*calling function*/
	return 0;
}

	    
		 
