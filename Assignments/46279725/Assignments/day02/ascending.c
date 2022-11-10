#include<stdio.h>
void main()
{
	int value;
	int length;
	int index;
	int index2;
	printf("enter the number of elements into array : ");
	scanf("%d",&length);
	int arr[length];
	printf("enter the elements into the array\n");
	for(index = 0;index<length;index++)
	{
		scanf("%d",&arr[index]);
	}
	for(index = 0;index<length;index++)
	{
		for(index2 = index+1;index2<length;index2++)
		{
			if(arr[index] >arr[index2])
			{
				value = arr[index];
				arr[index] = arr[index2];
				arr[index2] = value;
			}
		}
	}
	printf("Ascending order of array is : \n");
	for(index = 0;index<length;index++)
	{
		printf("%d ",arr[index]);
		printf("\n");
	}
}
