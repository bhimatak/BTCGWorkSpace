#include<stdio.h>
void main()
{
	int size;
	printf("Enter the size of an arrray: ");
	scanf("%d", &size);

	int array[size];
	printf("\nEnter the elements of array: \n");
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &array[i]);
	}
	printf("\n_____________________\n");
	printf("You have entered:\n");
	for(int i =0; i < size; i++)
	{
		printf("%d\n", array[i]);
	}
}
