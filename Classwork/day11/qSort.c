/* Demo on Quick Sort 

1. pivot choosing is necessary
2. divide.

*/
#include <stdlib.h>
#include <stdio.h>

void quickSort(int [], int, int);

int main()
{
	int a[50], n, i;

	printf("\nEnter the size of array: ");
	scanf("%d",&n);
	printf("\nEnter the values of the array\n");

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("\nBefore Sorting\n");
	for(i=0;i<n;i++)
		printf("%d ", a[i]);

	printf("\n\n");

	quickSort(a,0,n-1);

	printf("\nAfter Sorting\n");
	for(i=0;i<n;i++)
		printf("%d ", a[i]);

	printf("\n\n");

	return 0;

}

// 24 9 29 14 19 27

void quickSort(int arr[], int firstIndex, int lastIndex)
{

	int pivotIndex;
	int index1, index2, temp, i;

	if(firstIndex < lastIndex)
	{
		pivotIndex = firstIndex;
		index1 = firstIndex;
		index2 = lastIndex;

		while(index1 < index2)
		{
			// the below while loops will find the position of 
			// pivot value where it should be palced(i.e its position/index value)
			while((arr[index1] <= arr[pivotIndex]) && (index1 < lastIndex))
			{
				index1++;
			}
			while(arr[index2]>arr[pivotIndex])
			{
				index2--;
			}

			if(index1 < index2)
			{
				//swapping
				temp = arr[index1];
				arr[index1] = arr[index2];
				arr[index2] = temp;

			}
		}

		// at the end of first iteration we are swaping pivot ele with index2 ele

		temp = arr[pivotIndex];
		arr[pivotIndex] = arr[index2];
		arr[index2] = temp;

		// 14 9 19 24 29 27

		//recursive call to quickSort has to be made in the similar manner

		quickSort(arr, firstIndex, (index2 -1)); //left index sort
		quickSort(arr, (index2+1), lastIndex); //right most sort

	}
}