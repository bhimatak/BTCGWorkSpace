/***************************************************************************
 *  FILENAME : DAY10d.C
 *  DESCRAPTION : This file defines the required on length and colums in an array
 *  REVISION History :
 *  DATE             NAME        REFERENCE          REASON     
 *  -----------------------------------------------------------------------------------
 *  5 oct 2022      siri         NEW                TO print additional data in table
 *
 *
 *   Copyright @ 2022 Altran Group All Rights Reserved
 *   ***************************************************************/

#include <string.h>
#define MAX_LENGTH 5
#define MAX_COLS 3
/*******************************************************************
 * FUNCTION NAME: MAX COLS  in the array
 * DESCRIPTION :This functions add the additional data to the table
 * RETURN :SIZE
 * ********************************************************************
 * *****************************/

void access_array()
{
   int arr[][MAX_COLS] = {{1,2,3}, {4,5,6}};
   int (*ptr)[MAX_COLS];
   ptr = &arr[0];
  for(int i = 0; i < MAX_COLS-1; i++)
   {
        for(int j = 0; j < MAX_COLS; j++)
        printf("%d ",(*ptr)[j]);/*
       	for(int j = 0; j < MAX_COLS; j++)
        printf("%p ",&(*ptr)[j]);/* prints the content*/
       	ptr++;
	printf("\n");/*prints the content*/
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
      printf("%p ", &(*ptr2)[j]);/*prints the contnet*/
     ptr2++;
     printf("\n");/*prints the contnet*/
     printf("%lu %lu %lu %lu\n", sizeof(ptr2),sizeof(ptr3), sizeof(ptr4), sizeof(ptr5));/*prints the content*/
     ptr2 = &msg[0];
     access_array();
    }
}


