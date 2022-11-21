#include <stdio.h>

void mergeSort(int [],int [], int,int);

int main()
{
	int a[50], n, i;
	int aux[50];

	printf("\nEnter the size of array: ");
	scanf("%d",&n);
	printf("\nEnter the values of the array\n");

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("\nBefore Sorting\n");
	for(i=0;i<n;i++)
		printf("%d ", a[i]);

	printf("\n\n");

	mergeSort(a,aux, 0,n-1);

	printf("\nAfter Sorting\n");
	for(i=0;i<n;i++)
		printf("%d ", a[i]);

	printf("\n\n");

	return 0;
}


void mergeSort(int arr[],int aux[], int firstIndex,int lastIndex)
{
	
	int mid;
	int pointer_left, pointer_right;
	int k; // loop counter

	if(lastIndex <= firstIndex)
		return;
	mid = (firstIndex + lastIndex) / 2;

	// left sub array => arr[firstIndex....mid]
	// right sub array => arr[mid+1 ..... lastIndex]

	mergeSort(arr, aux, firstIndex, mid);
	//printf("\n\tL=>%d\t%d", mid, arr[mid]);
	mergeSort(arr, aux, mid+1,lastIndex);
	//printf("\n\tR=>%d\t%d", (mid+1), arr[mid+1]);

	pointer_left = firstIndex;
	pointer_right = mid + 1;


	//rejoing arrays while comparing
	
	for(k=firstIndex;k<=lastIndex;k++)
	{
		if(pointer_left == mid+1)
		{
			// reached the limit
			aux[k] = arr[pointer_right];
			pointer_right++;
		}
		else if(pointer_right == lastIndex+1)
		{
			aux[k] = arr[pointer_left];
			pointer_left++;
		}
		else if(arr[pointer_left] < arr[pointer_right])
		{
			aux[k] = arr[pointer_left];
			pointer_left++;
		}
		else
		{
			aux[k] = arr[pointer_right];
			pointer_right++;
		}


	}

	for(k=firstIndex;k<=lastIndex;k++)
	{
		arr[k] = aux[k];
	}


}