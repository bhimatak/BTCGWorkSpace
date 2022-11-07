#include<common.h>

int main()
{
	int i,n,m;
	printf("Enter number of element in array : ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int start=0 ,mid=0 ,end=n-1;
	while (mid<=end)
	{
		switch (arr[mid]){
			case 0:
				m=arr[start];
				arr[start]= arr[mid];
				arr[mid]=m;
				start++;
				mid++;
				break;
			case 1:
				mid++;
				break;
			case 2:
				m=arr[mid];
				arr[mid]=arr[end];
				arr[end]=m;
				end--;
				break;
		}
	}
	printf("Element after swapping: ");
	for(i=0;i<n;i++)
		printf("%d", arr[i]);
	printf("\n\n");
	return 0;
}
