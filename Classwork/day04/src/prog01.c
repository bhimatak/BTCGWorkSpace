#include <common.h>

int main()
{
	int n;
	int i;
	/*int arr[100]; */
	int *arr = NULL;
	int ret=0;

	printf("\nEnter the size of the array: ");
	ret = scanf("%d",&n);
	if(ret == 0)
	{
		printf("\nError in scanning\n");
		exit(EXIT_FAILURE);
	}
	/* dy allocation is done here for mem mang... for the array */

	arr = (int *)malloc(n*sizeof(int));

	if(arr == NULL){
		printf("\nError in allocation of memory\n");
		exit(EXIT_FAILURE);
	}

	printf("\nEnter the %d element values\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	printf("\nArray elements are\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);

	printf("\n\n");

	free(arr);

	return 0;

}