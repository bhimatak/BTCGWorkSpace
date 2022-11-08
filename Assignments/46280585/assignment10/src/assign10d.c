/*************************************************************************
*
*  FILE NAME    : assign10d.c
*
*  DESCRIPTION  :  Accoring to the requriements
*
*  DATE             NAME       REFERENCE          REASON
*-------------------------------------------------------------------------
*  05-nov-2022    Gowthami    CG material       2D char array initialization
*
*  Copyright 2010, Aricent Technologies (Holdings) Ltd
*
**************************************************************************/

/*************************************************************************
*                               HEADER FILES
*************************************************************************/
#include <common.h>
/*************************************************************************
*                               MACROS
*************************************************************************/
#define MAX_LENGTH 5
#define MAX_COLS 3
void access_array()
{
	int arr[][MAX_COLS] = {{1,2,3}, {4,5,6}};
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
int main()
{
	char arr[]="ABC";
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
	access_array();
}
