#include <common.h>

int main()
{
	int n;
	int i;
	/*int arr[100]; */
	int *arr;

	arr = (int *)malloc(sizeof(int)*3);
	memset(arr, 0, sizeof(int)*3);
	
	printf("\n%d", arr[0]);


	free(arr);

	return 0;

}