#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* ptr;
	int n;
	printf("Enter the number of elements you want: ");
	scanf("%d", &n);
	ptr = (int*)calloc(n, sizeof(int));
	printf("The elements of the array are: \n");
	for(int i =0; i<n; i++)
	{
		printf("%d\n", ptr[i]);
	}
	free(ptr);
	return 0;
}
