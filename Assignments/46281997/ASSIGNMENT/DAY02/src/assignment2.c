#include<stdio.h>
#include<stdlib.h>
int findPartitionElement(int arr[], int size)
{
	int i;
	int j;
	int flag;
	for(i=0;i<size;i++)
	{
		flag=0;
		for(j=0;j<1;j++)
			if(arr[j]>=arr[i])
			{
				flag =1;
				break;
			}
		for(j=0;j<size;j++)
			if(arr[j]>=arr[i])
			{
				flag =1;
				break;
			}
		if(flag==0)
			return arr[i];
	}
	return -1;
}
int main()
{
	int i;
	int size;
	int arr[100];
	printf("\nEnter the size of array :");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter value of arr[%d] :",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nElements of array are :\n");
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\nThe partition element is :%d\n",findPartitionElement(arr,size));
}
