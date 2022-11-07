/*******************************************************************************************
 * * 
 * * FILENAME : 3d.c
 *
 * * DESCRIPTION : program to demonstrate  how to pass a 2D array to a function using pointers
 *
 * * Revision History : 
 * * DATE          NAME       REFERENCES         REASON
 * *
 * * 05-11-2022   SAAHERA      ABC               Initial cretion
 * *
 * * Copyright 2022, Altran Group All Rights Reserved
 * *
 * *******************************************************************************************
 * *                    STANDARD HEADER FILES
 * ********************************************************************************************/
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
/**********************************************************************************************
 * *                    MACROS
 * *********************************************************************************************/
#define MAX_LENGTH 5
#define MAX_COLS 3
/************************************************************************************************
 * *
 * * FUNCTION NAME : access_array
 * *
 * * DESCRIPTION : access elements in the array
 *
 * * RETURNS: SUCCESS or FAILURE
 * */
void access_array() 
{
	int arr[] [MAX_COLS] = {{1,2,3}, {4,5,6}};/*initializing two dimensional array*/
	int (*ptr)[MAX_COLS]; /* declaring a pointer that point to integer data type*/
	ptr = &arr[0]; /* pointer pointing to address of arr[0]*/
	for(int i =0;i<MAX_COLS-1;i++) /*traversing through MAX_COLS*/
	{
		for(int j=0;j<MAX_COLS;j++) /*traversing each column*/
		{
			printf("%d",(*ptr)[j]);/*print formatted out*/
		}
		for(int j=0;j<MAX_COLS;j++) /*traversing each column*/
		{
			printf("%p", &(*ptr)[j]);/*prints pointer value*/
		}
	ptr++; /*incrementing pointer*/
	printf("\n"); /* prints new line*/
	}
}
/*****************************************************************************************************
 * * FUNCTION NAME : main
 * *  
 * * DESCRIPTION : This calls access_array function and performs  operation on pointer 
 * *
 * * Return : SUCCESS or FAILURE
 * **************************************************************************************************/
int main()
{
	char arr[]="ABC";/* array is initiated with string*/
	char (*ptr2)[MAX_LENGTH]; /*pointer array ptr2 pointing to char data type*/
	char **ptr3 = "AB"; /*array is initialized with string*/
	char *ptr4[2];  /*pointer array ptr4 contains 3 characters*/
	char **ptr5 = {NULL};  /*pointer initialized with NULL value*/
	char ptr = (char)&arr; /*type casting*/
	char msg[][MAX_LENGTH] = {"AB", "gh", "er"}; /* msg array initialized with string*/
	for(int i=0;i<MAX_COLS-1;i++) /* traversing each column*/
	{
		for(int j=0;j<MAX_COLS-1;j++) /*travering each column for pointer*/
		{
			printf("%p", &(*ptr2)[j]); /*printing pointer value*/
		}
		ptr2++; /*incrementing pointer value*/
	printf("\n"); /*prints in new line*/
	}
	printf("%lu %lu %lu %lu\n", sizeof(ptr2),sizeof(ptr3), sizeof(ptr4),sizeof(ptr5)); /* printing every pointer size*/
	ptr2=&msg[0];/*address or msg array initialized to ptr2*/
	access_array(); /*calling function*/
	return 0;
}


