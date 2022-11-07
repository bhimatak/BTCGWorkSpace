#include<stdio.h>
#include<stdlib.h>
int main()
{
       int i,n,temp;
       printf("enter number of elemets in array :");
       scanf("%d" ,&n);
       int arr[n];
       printf("elements before swapping :");
       for(i=0;i<n;i++)
		scanf("%d" ,&arr[i]);
       for(i=0;i<n-1;i=i+2)
       {
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
       }
	printf("elements after swapping:");
	for(i=0;i<n;i++)
		printf("%d" ,arr[i]);
        printf("\n");
	return 0;
}
