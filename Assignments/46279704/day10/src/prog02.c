/* FILE  NAME : prog02.c
 *
 * DESCRIPTION : solve the errors and warnings in the code snippet
 *
 *
 * HISTORY:
 *
 * DATE            NAME              REFERENCE                    REASON
 * -------------------------------------------------------------------------
 *  05 NOV 2022   Charishma         SP101                        new code
 *
 *  *************************************************************************/
#include "common.h"


void access_array()
{
	int arr[][MAX_COLS]={{1,2,3},{4,5,6}};
	int (*ptr)[MAX_COLS];
	ptr =&arr[0];
	
	for(int i=0;i < MAX_COLS-1;i++)
	{
		for(int j = 0; j < MAX_COLS; j++)
		{
			printf("%d",(*ptr)[j]);
		}
		for(int j = 0; j < MAX_COLS; j++)
		{
			printf("%p",&(*ptr)[j]);
		}
		ptr++;
		printf("\n");
	}
}	

int main()
{
	char arr[] = "ABC";
	char (*ptr2)[MAX_LENGTH];
	char *ptr3 = "AB";
	char *ptr4[2];
	char **ptr5 = (NULL);
	
	char msg[][MAX_LENGTH]= {"AB", "gh", "ef"};
	
	for(int i = 0;i < MAX_COLS-1; i++)
	{
		for(int j = 0; j < MAX_COLS-1; j++)
		{
			printf("%p", &(*ptr2[j]));
		}
		ptr2++;
		
		printf("\n");
		
	}
	printf("%lu      %lu      %lu       %lu\n",sizeof(ptr2),sizeof(ptr3),      sizeof(ptr4),    sizeof(ptr5));

	ptr2=&msg[0];
	access_array();
}





