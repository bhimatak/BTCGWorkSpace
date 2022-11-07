/*WACP to swap alternate elements in the given list
l[] ={1,2,3,4,5,6}
o/p
l[] = {2,1,4,3,6,5}

l[] ={1,2,3,4,5,6,7}
o/p
l[] = {2,1,4,3,6,5,7}*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size;
	int i;
	int temp;
	printf("Enter the size of the array :");
	scanf("%d",&size);
	int arr[size];

	for(i=0;i<size;i++)
	{
		printf("\n Enter value of a[%d] :",i+1);
		scanf("%d", &arr[i]);
	}
	printf("Elements of Array are :");

	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=0;i<size;i=i+2)
	{
		if(i+1==size)
		{
			break;
		}
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	
	}
	printf("\nElements after swapping : \n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}

