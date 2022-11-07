/*****************************************************************************************************************
 * * FILENAME : assign3d.c
 * * DESCRIPTION : This file defines required function to fix warnings and issues in code.
 * * REVSION HISTORY : 
 * * DATE               NAME                REFERENCE                       REASON
 * * -------------------------------------------------------------------------------------------------------------
 * * 05 Nov 2022       ABHILIPSA SWAIN      NEW                            NEW CODE TO FIX WARNINGS AND ISSUES
 * *
 * ***************************************************************************************************************/

#include "common.h"
#define MAX_LENGTH 5
#define MAX_COLS 3

/*****************************************************************************************************************
 * * FUNCTION NAME : access_array()
 * * DESCRIPTION : This function access array elements
 * * RETURNS : SUCCESS and in case of Failure ERROR
 * ***************************************************************************************************************/

void access_array()
{
	int arr[][MAX_COLS]={{1,2,3},{4,5,6}};
	int (*ptr)[MAX_COLS];
	ptr = &arr[0];
	for(int i = 0; i < MAX_COLS-1; i++)
	{
		for(int j = 0; j < MAX_COLS; j++)
		{
			printf("%d",(*ptr)[j]);
		}
		for(int j = 0; j < MAX_COLS; j++)
		{
			printf("%p", &(*ptr)[j]);
		}
		ptr++;
		printf("\n");
	}
}

/*****************************************************************************************************************
 * * FUNCTION NAME : main()
 * * DESCRIPTION : This function is main function where other defined functions are called.
 * * RETURNS : SUCCESS and in case of failure ERROR
 * **************************************************************************************************************/

int main()
{
	/**char arr[]="ABC";**/
	char (*ptr2)[MAX_LENGTH];
	char *ptr3 = "AB";
	char *ptr4[2];
	char **ptr5 = {NULL};
	/**char ptr = (char)&arr;**/
	char msg[][MAX_LENGTH] = {"AB","gh","er"};
	for(int i = 0; i < MAX_COLS-1; i++)
	{
		for(int j = 0; j < MAX_COLS-1; j++)
		{
			printf("%p", &(*ptr2)[j]);
		}
		ptr2++;
		printf("\n");
	}
	printf("%lu %lu %lu %lu\n", sizeof(ptr2),sizeof(ptr3), sizeof(ptr4), sizeof(ptr5));
	ptr2 = &msg[0];
	access_array();
}
