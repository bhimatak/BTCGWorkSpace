#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int temp;
	int n;
	printf("How many numbers u want to enter:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter element %d :",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Array entered :\n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",arr[i]);
	}
	for(i=0;i<n;i=i+2)
	{
		if(i+1==n)
		{
			break;
		}
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
	printf("After swap :\n");
	for(i=0;i<n;i++)
	  printf("%d ",arr[i]);
	printf("\n\n");
	return 0;
}
