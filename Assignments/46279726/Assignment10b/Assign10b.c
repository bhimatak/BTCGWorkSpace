/***************************************************************************************************************
 *
 *  FILE NAME : Asign10b.c
 *
 *  DESCRIPTION : The file defines required function for showing the worker details
 *
 *   HISTORY:
 *   
 *   DATE                NAME                 REFERENCE                            REASON
 *   05 NOV 2022    GOWRILATHA CHOPPA          CG MATERIAL                           NEW
 *
 *   ************************************************************************************************************/
#include <string.h>
#define MAX_LENGTH 5
#define MAX_COLS 3
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
	 char ptr = (char)&arr;
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
