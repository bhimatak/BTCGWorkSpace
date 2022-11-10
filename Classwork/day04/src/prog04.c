#include <common.h>

extern int SIZE;

int main()
{
	int arr[SIZE];
	int i;
	for (i=0;i<SIZE;i++)
		scanf("%d",&arr[i]);

	printf("\nElements of array are\n");
	
	for (i=0;i<SIZE;i++)
		printf("%d ",arr[i]);

	printf("\n\n");

	return 0;
}