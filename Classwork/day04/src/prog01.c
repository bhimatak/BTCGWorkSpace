#include <common.h>

int main()
{
	int n;
	int i;
	/*int arr[100]; */
	int *arr = NULL;

	printf("\nEnter the size of the array: ");
	scanf("%d",&n);

	/* dy allocation is done here for mem mang... for the array */

	arr = (int *)malloc(n*sizeof(int));

	printf("\nEnter the %d element values\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	printf("\nArray elements are\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);

	printf("\n\n");

	return 0;

}