#include <stdio.h>
#include <stdlib.h>

void main()
{
	void sort_array();
int i,A[100],n;
printf("Enter numer of elements present in array:");
scanf("%d",&n);
printf("Enter array : \n");
for(i =0;i< n; i++)
{
	scanf("%d",&A[i]);
}
printf("Array after sorting :\n");
sort_array(A,n);
for(i=0;i<n;i++)
{
	printf("%d \n",A[i]);
}
}


