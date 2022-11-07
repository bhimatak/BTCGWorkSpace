/******************************************************************************************************************************
 * *  * *FILE NAME : assign3d.c
 * *  * *
 * *  * *DESCRIPTION :This file made by refering "array_ptr_prg.c" file by adding some function to fix warnings and issues.
 * *  * *
 * *  * *REVISION HISTORY:
 * *  *  DATE              NAME                 REFERENCE                                            REASON
 * *  * *****************************************************************************************************************
 * *  * 05 OCT 2022   AKSHYARIKA MOHARANA         NEW                                        NEW CODE TO PERFORM FUNCTION
 * *  *
 * *  *Cpoyright @2022 Altran Group All Rights Reserved
 * *  * *****************************************************************************************************************/

#include<common.h>
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
/*****************************************************************************************************************
 *  * *FUNCTION NAME:main()
 *  * *DESCRIPTION:This function calls the required function to perform  operations to fix the warnings and issues.
 *  * *RETURNS:SUCCESS and in case of failure ERROR
 *  * *************************************************************************************************************/
int main()
{
	/**char arr[]="ABC";**/
	char (*ptr2)[MAX_LENGTH];
	char *ptr3 = "AB";
	char *ptr4[2];
	char **ptr5 = {NULL};
	/**char ptr = (char)&arr;**/
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

