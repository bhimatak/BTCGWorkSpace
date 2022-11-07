/*****************************************************************************************************************
 * * FILENAME : assign1.c
 *
 * * DESCRIPTION : This file defines required functions to perform given operations on input array
 *
 * * REVISION HISTORY:
 * * DATE              NAME                       REFERENCE                       REASON
 * * --------------------------------------------------------------------------------------------------------------
 * * 5 Nov 2022    Sushree Ranjita Panda              NEW                         New Code To perform given operations
 * *
 * * **************************************************************************************************************/
#include<common.h>
/**************global variable declaration and initialisation********************/
int arr[MAX_SIZE] = {0};
int totalElements = 0;
/***********************Function declaration***********************************/
extern void display(int arr[MAX_SIZE], int number);
extern int inputElements(int arr[MAX_SIZE], int elements, int max);
extern int sumOf_Max_and_MinEle(int arr[MAX_SIZE]);
extern int myCount(int arr[MAX_SIZE], int item, int totalElements);
extern void myrev(int arr[MAX_SIZE], int totalElements);
extern void revstr(char *str1);

/************************************************************************************************
 * * FUNCTION NAME : inputElements()
 *   
 * * DESCRIPTION : This function takes array elements as user input
 *
 * * RETURNS : store inputs and in case of failure EXIT_FAILURE
 * * **************************************************************************************************/
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

/************************************************************************************************
 * * FUNCTION NAME : display()
 *   
 * * DESCRIPTION : This function showing elements of array
 *
 * * RETURNS : elements of array
 * * **************************************************************************************************/
void display(int arr[MAX_SIZE], int number)
{
	int i = 0;for(i = 0; i < number; i++)
	{
		printf("\n%d", arr[i]);
	}
}
/************************************************************************************************
 * * FUNCTION NAME : sumOf_Max_and_MinEle()
 *   
 * * DESCRIPTION : This function calculating maximum element, minimum element and sum of maximum minimum element
 *
 * * RETURNS : a sum of maximum and minimum element
 * * **************************************************************************************************/
int sumOf_Max_and_MinEle(int arr[MAX_SIZE])
{
	int minimum = arr[0],maximum = arr[0],sum = 0,i = 0;
	for(i = 0; i < totalElements; i++)
	{
		if(arr[i] < minimum)
		{
			minimum = arr[i];
		}
		if(arr[i] > maximum)
		{
			maximum = arr[i];
		}
	}
	sum = minimum + maximum;
	return sum;
}

/************************************************************************************************
 * * FUNCTION NAME : myCount()
 *   
 * * DESCRIPTION : This function counts for the number of occurences of a particular element in an array
 *
 * * RETURNS : number of occurence of a particular element and incase of failure ERROR
 * * **************************************************************************************************/
int myCount(int arr[MAX_SIZE], int item, int totalElements)
{
	int count = 0;
	int  i = 0;
	for(i = 0; i < totalElements; i++)
	{
		if(arr[i] == item)
		{
			count++;
		}
	}
	return count;
}

/************************************************************************************************
 * * FUNCTION NAME : myrev()
 *   
 * * DESCRIPTION : This function prints reversed array
 *
 * * RETURNS : prints array if SUCCESS in case of failure ERROR
 * * **************************************************************************************************/
void myrev(int arr[MAX_SIZE], int totalElements)
{
	int i = 0;
	printf("\nElements Before Reversing : \n");
	for(i = 0; i < totalElements; i++)
	{
		printf("%d \t", arr[i]);
	}
	printf("\nElements after Reversing : \n");
	for(i=totalElements-1; i >= 0; i--)
	{
		printf("%d \t",arr[i]);
	}
}

/************************************************************************************************
 * * FUNCTION NAME : revstr()
 *   
 * * DESCRIPTION : This function contains code for reversing the array elements
 *
 * * RETURNS : reversed array if SUCCESS ,else ERROR
 * * **************************************************************************************************/
void revstr(char *str1) 
{
	int i;
	int len;
	int temp;
	len = strlen(str1); 
	for (i = 0; i < len/2; i++)
	{
		temp = str1[i];
		str1[i] = str1[len - i - 1]; 
		str1[len - i - 1] = temp;
	} 
}

/************************************************************************************************
 * * FUNCTION NAME : main()
 *
 * * DESCRIPTION : This function calls other defined functions to perform the given operations
 *
 * * RETURNS : SUCCESS in case of failure ERROR
 * * **************************************************************************************************/
int main()
{
	int number = 0;              /*declaring and initialising variable*/
	int item = 0;
	int count = 0;
	int elements = 0;
	char str[MAX_SIZE];
	do
	{
		printf("\nNo. of Elements you want to Store : ");
		scanf("%d", &elements);totalElements = inputElements(arr, elements, MAX_SIZE);
	}
	while(totalElements == EXIT_FAILURE);
	printf("\nNo. of Elements Stored are: %d ",totalElements);
	printf("\nEnter No. of elements to print : ");
	scanf("%d", &number);
	display(arr, number);
	sumOf_Max_and_MinEle(arr);
	printf("\nSum Of Min and Max Elements is : %d", sumOf_Max_and_MinEle(arr));
	printf("\nEnter element to count occurences : ");
	scanf("%d", &item);count = myCount(arr, item, totalElements);
	printf("No of Occurences of %d is : %d\n", item, count);
	myrev(arr, totalElements);
	printf ("\nEnter the your name: "); 
	scanf("%s", str);
	printf (" \nBefore reversing the string: %s \n", str); 
	revstr(str); 
	printf ("After reversing the string: %s\n", str); 
	return EXIT_SUCCESS;
}





