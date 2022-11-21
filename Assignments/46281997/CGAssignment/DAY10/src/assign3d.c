/*********************************************************************************************************************************
** FILENAME        : asiign3d.c
**
** DESCRIPTION     : This file defines various function to perform given operation on input arrayy
**
** REVISION HISTORY:
** DATE              NAME                       REFERENCE                       REASON
*--------------------------------------------------------------------------------------------------------------------------------
*  04 NOV 2022    POOJA NATH                   NEW                          NEW CODE TO PERFORM GIVEN OPERATIONS
*
*************************************************************************************************************************************/

/****HEADER FILES*****/
#include"common.h"
#define MAX_LENGTH 5
#define MAX_COLS 3


/******************************************************
 ** FUNCTION NAME : access_array()
 ** RETURN        :SUCCESS incase of error FAILURE
 *
 * ***************************************************/
void access_array()
{
	/*Variable declaration*/
	int arr[][MAX_COLS] = {{1,2,3}, {4,5,6}};/*declaring and initializing array*/
	int (*ptr)[MAX_COLS];
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


/**************************************************************
 ** FUNCTION NAME : main()
 ** DESCRIPTION   : This function calls access_array() to 
                    perform the given operation
 ** RETURN        : SUCCESS in case of failure ERROR
 **
 ***************************************************/

int main()
{
	/*variable declaration*/
	char (*ptr2)[MAX_LENGTH];
	char *ptr3 = "AB";
	char *ptr4[2];
	char **ptr5 = {NULL};
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
	access_array(); /*calling function*/
}





