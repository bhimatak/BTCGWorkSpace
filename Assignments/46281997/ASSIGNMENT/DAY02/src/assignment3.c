#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int size;
	int temp;
	int arr[100];
	printf("\nEnter the size of array :");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter value of a[%d] :",i+1);
		scanf("%d",&arr[i]);
	}
	int start=0;
	int mid =0;
	int end=size-1;
	while(mid<=end)
	{
		switch(arr[mid])
		{
			case 0:
				temp=arr[start];
				arr[start]=arr[mid];
				arr[mid]=temp;
				start++;
				mid++;
				break;
			case 1:
				mid++;
				break;
			case 2 :
				temp=arr[mid];
				arr[mid]=arr[end];
				arr[end]=temp;
				end--;
				break;
		}
	}
	printf("Element after swapping :");
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
