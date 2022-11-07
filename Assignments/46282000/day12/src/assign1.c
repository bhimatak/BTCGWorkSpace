/*******************************************************************************************************
 * * FILENAME : assign1.c
 * * DESCRIPTION : This file containes the below functions.
 * * REVISION HISTORY : 
 * * DATE              NAME                  REFERENCE                    REASON
 * * ---------------------------------------------------------------------------------------------------
 * * 05 Nov 2022      ABHILIPSA SWAIN         NEW                         NEW CODE TO PERFORM FUNCTION
 * *
 * *****************************************************************************************************/

#include "common.h"
#define MAX_SIZE 50
int arr[MAX_SIZE] = {0};
int totalElements = 0;
extern void display(int arr[MAX_SIZE], int number);
extern int inputElements(int arr[MAX_SIZE], int elements, int max);
extern int sumOf_Max_and_MinEle(int arr[MAX_SIZE]);
extern int myCount(int arr[MAX_SIZE], int item, int totalElements);
extern void myrev(int arr[MAX_SIZE], int totalElements);
extern void revstr(char *str1);

/*******************************************************************************************************
 * * FUNCTION NAME : inputElements()
 * * DESCRIPTION : This function takes the array elements as input.
 * * RETURNS : SUCCESS and in case of failure ERROR
 * *****************************************************************************************************/

int inputElements(int arr[MAX_SIZE], int elements, int max)
{
	if(elements <= max)
	{
		int i = 0;
		for(i = 0; i < elements; i++)
		{
			printf("\nEnter the element arr[%d] : ",i);
			scanf("%d", &arr[i]);
		}
			return i;
	}
	else
	{
		printf("\nWarning ! Limit of Array Exceeded");
		return EXIT_FAILURE;
	}
}

/*******************************************************************************************************
 * * FUNCTION NAME : display()
 * * DESCRIPTION : This displays the elements of the array
 * * RETURNS : SUCCESS and in case of failure ERROR
 * ****************************************************************************************************/

void display(int arr[MAX_SIZE], int number)
{
	int i = 0;
	for(i = 0; i < number; i++)
	{
		printf("\n%d", arr[i]);
	}
}

/*******************************************************************************************************
 * * FUNCTION NAME : sumOf_Max_and_MinEle()
 * * DESCRIPTION : This returns sum of min and max element
 * * RETURNS : SUCCESS and in case of failure ERROR
 * ****************************************************************************************************/

int sumOf_Max_and_MinEle(int arr[MAX_SIZE])
{
	int minimum = arr[0],
	maximum = arr[0],
	sum = 0,
	i = 0;
	for(i = 0; i < totalElements; i++)
	{
		if(arr[i] < minimum)
		{
			minimum = arr[i];
		}
		else
		{
			maximum = arr[i];
		}
	}
	sum = minimum + maximum;
	return sum;
}

/*******************************************************************************************************
 * * FUNCTION NAME : myCount()
 * * DESCRIPTION : This returns number of elements
 * * RETURNS : SUCCESS and in case of failure ERROR
 * *****************************************************************************************************/

int myCount(int arr[MAX_SIZE], int item, int totalElements)
{
	int count = 0;
	int i = 0;
	for(i = 0; i < totalElements; i++)
	{
		if(arr[i] == item)
		{
			count++;
		}
	}
	return count;
}

/*******************************************************************************************************
 * * FUNCTION NAME : myrev()
 * * DESCRIPTION : This returns the elements in reverse order
 * * RETURNS : SUCCESS and in case of failure ERROR
 * ****************************************************************************************************/

void myrev(int arr[MAX_SIZE], int totalElements)
{
	/* int temp = 0;
	int start = 0;
        int end = totalElements - 1;*/
	int i =0;

	printf("\nElements Before Reversing : \n");
	for(i = 0; i < totalElements; i++)
	{
		printf("%d \t", arr[i]);
	}
	printf("\nElements after Reversing : \n");
	for(i = totalElements - 1; i >= 0; i--)
	{
		printf("%d \t", arr[i]);
	}
}

/*******************************************************************************************************
 * * FUNCTION NAME : revstr()
 * * DESCRIPTION : This returns string in reverse order
 * * RETURNS : SUCCESS and in case of failure ERROR
 * ****************************************************************************************************/

void revstr(char *str1)
{
	int i;
	int len;
	int temp;
	len = strlen(str1);
	for(i = 0; i < len/2; i++)
	{
		temp = str1[i];
		str1[i] = str1[len - i - 1];
		str1[len - i -1] = temp;
	}
}

/******************************************************************************************************
 * * FUNCTION NAME : main()
 * * DESCRIPTION : This is the main function where other functions are called
 * * RETURNS : SUCCESS and in xase of failure ERROR
 * ***************************************************************************************************/

int main()
{
	int number = 0;
	/* int sum = 0; */
	int item = 0;
	int count = 0;
	int elements = 0;
	char str[MAX_SIZE];
	do
	{
	printf("\nNo. of Elements you want to store : ");
	scanf("%d", &elements);
	totalElements = inputElements(arr, elements, MAX_SIZE);
	}
	while(totalElements == EXIT_FAILURE);

	printf("\nNo. of Elements stored are: %d", totalElements);
	printf("\nEnter no of elements to print:");
	scanf("%d", &number);

	display(arr, number);
	sumOf_Max_and_MinEle(arr);
	printf("\nSum of Min and Max Elements is : %d", sumOf_Max_and_MinEle(arr));
	printf("\nEnter element to count occurences : ");
	scanf("%d", &item);
	count = myCount(arr, item, totalElements);
	printf("No of occurences of %d is : %d\n", item, count);
	myrev(arr, totalElements);
	printf("\nEnter your name: ");
	scanf("%s", str);
	printf("\nBefore reversing the string: %s \n",str);
	revstr(str);
	printf("After reversing the string: %s \n", str);
	return EXIT_SUCCESS;
}
