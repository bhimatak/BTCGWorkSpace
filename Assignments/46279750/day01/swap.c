#include<stdio.h>
int main()
{
	int i,n,temp;
	printf("Enter number of elements in array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Elements before swap : ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n-1;i=i+2)
	{
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
	printf("Elements after swap : ");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;
}

