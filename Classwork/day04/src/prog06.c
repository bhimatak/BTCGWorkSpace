
#include <multiTab.h>

int main()
{
	int *arr;
	int mulValue=0, i=0;
	printf("\nEnter the value for which you need multiplication table: ");
	scanf("%d",&mulValue);
	/*
	mulTab(arr, mulValue);
	*/
	//arr = (int *)malloc(10*sizeof(int));

	arr = mulTabR(mulValue); //=> dangling pointer situation 

	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\n\n");
	return 0;
}