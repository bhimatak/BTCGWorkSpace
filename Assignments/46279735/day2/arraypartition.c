#include <limits.h>
#include <stdio.h>
#define min(i,j) ((i) < (j)) ? (i) :(j)
#define max(i,j) ((i) > (j)) ? (i) : (j)
int mid_elem(int arr[], int n)
{
	int LM[n];
	LM[0] = INT_MIN;
	for (int i = 1; i < n; i++)
		LM[i] = max(LM[i-1],arr[i-1]);
	int RM = INT_MAX;
	for (int i=n-1; i>=0; i--)
	{
		if (LM[i] < arr[i] && RM > arr[i])
			return arr[i];
		RM = min(RM, arr[i]);
	}
	return -1;
}
int main()
{
	int arr[30],n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The element is %d",mid_elem(arr,n));
	return 0;
}

