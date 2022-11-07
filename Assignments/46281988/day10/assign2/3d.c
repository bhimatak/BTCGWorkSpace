#include"common.h"
#define MAX_LENGTH 5
#define MAX_COLUMN 3
void accessarray()
{
	int arr[][MAX_COLUMN] = {{1,2,3},{4,5,6}};
	int (*ptr)[MAX_COLUMN];
	ptr = &arr[0];
	for(int i=0;i<MAX_COLUMN-1;i++)
	{
		for(int j =0; j <MAX_COLUMN; j++)
		{
			printf("%d",(*ptr)[j]);
		}
		for(int j=0;j<MAX_COLUMN;j++)
		{
			printf("%p",&(*ptr)[j]);
		}
		ptr++;
		printf("\n");
	}
}
int main()
{
	char (*ptr2)[MAX_LENGTH];
	char *ptr3="AB";
	char *ptr4[2];
	char **ptr5={NULL};
	char msg[][MAX_LENGTH]={"AB","gh","er"};
	for(int i=0;i<MAX_COLUMN-1;i++)
	{
		for(int j=0;j<MAX_COLUMN-1;j++)
		{
			printf("%p",&(*ptr2)[j]);
		}
		ptr2++;
		printf("\n");
	}
	printf("%lu %lu %lu %lu\n",sizeof(ptr2),sizeof(ptr3),sizeof(ptr4),sizeof(ptr5));
	ptr2 = &msg[0];
	accessarray();
}


