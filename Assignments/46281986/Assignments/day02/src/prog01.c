#include<common.h>

int main()
{
	int i,n,m;
	printf("Enter number of elemnent in array : \n");
	scanf("%d",&n);
	int arr[n];
	printf("Elements before swapping : \n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n-1;i=i+2)
	{
		m=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=m;
	}
	printf("\nElement after swapping: \n");
	for(i=0;i<n;i++)
		printf("%d ", arr[i]);
	printf("\n\n");
	return 0;
}
