/**********************************************************************************************************************************************
 * *FILENAME : ARR.c
 * *DESCRPTION:This file define required function for showing the worker details.
 * *REVISION HISTROY:
 * *
 * *DATE           NAME                   REFERENCE                         REASON
 * --------------------------------------------------------------------------------
 * *5 NOV 2022     SIREESHA                 NEW                           NEW CODE FOR USER
 * *******************************************************************************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdint.h>
#define MAX_LEN 5
#define MAX_COLS 3
//ifndef_WORKER_MACRO_H
//define_WORKERS_MACRO_H

/*****************************************
 * *FILENAME : ARR.c
 * *FUNCTION NAME :display1()
 * *DESCRPTION : This function displays string of worker_firstname,lastname,numbers.
 * *RETURNS : THIS FUNCTION RETURNS totalwages
 * ********************************************/

void access_array()                                          /*we can use access_array function to access array*/
{
	int arr[][MAX_COLS]={{1,2,3},{4,5,6}};          /* we can give array with values*/
	int (*ptr)[MAX_COLS];
	ptr =&arr[0];
	for(int i=0;i<MAX_COLS-1;i++)
	{
		for(int j=0;j<MAX_COLS;j++)
		{
			printf("%d",(*ptr)[j]);
		}
		for(int j=0;j<MAX_COLS;j++)
		{
			printf("%p",&(*ptr)[j]);
		}
		ptr++;
		printf("\n");
	}
}
/************************************************************************
 *
 * main() function starts here
 * *************************************/
int main()
{
       
	char arr[]="ABC";                  /*declaring character array of elments*/
	char (*ptr2)[MAX_LEN];                  /*declaring pointer of maxlen*/
	char *ptr3="AB";
	char *ptr4[2];
	char **ptr5 ={NULL};                     /*ptr5 assigned to null*/
	char msg[][MAX_LEN] ={"AB","gh","er"};
	for(int i=0;i<MAX_COLS-1;i++)
	{
		for(int j=0;j<MAX_COLS-1;j++)
		{
			printf("%p ",&(*ptr2)[j]);                  /*prints the address of ptr2[j] value*/
		}
		ptr2++;                                         /*ptr2 is incremented*/
		printf("\n");
	}
	printf("%lu %lu %lu %lu\n",sizeof(ptr2),sizeof(ptr3),sizeof(ptr4),sizeof(ptr5)); /*prints the sizes of pointers*/
	ptr2 = &msg[0];
	access_array();
}


