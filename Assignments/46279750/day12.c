/**************************************************************************************************
 * *
 * * FILENAME : day12.c
 * *
 * * DESCRIPTION: program to demonstrate  array to a function perform certain operations on it
 * *
 * * Revison History:
 * * DATE             NAME                 REFERENCE                   REASON
 * *
 * * 05-11-2022       SAAHERA               ABC                        Initial creation
 * *
 * * Copyrights 2022, Altran Group All Rights Reserved
 * *
 * ***********************************************************************************************
 * *                                     STANDARD HEADER FILES
 * ************************************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*****************************************************************************************************
 * *                                      MACROS                                                    
 * **************************************************************************************************/
#define MAX_SIZE 50
/****************************************************************************************************
 * *
 * * FUNCTION NAME: access_array
 * *
 * * DESCRIPTION:  access element in the array
 * *
 * * RETURN: SUCCESS or FAILURE
 * */
int arr[MAX_SIZE] = {0}; /*initialize arr[MAX_SIZE] to 0*/
int totalElements = 0; /* initialize totalElements to 0*/
extern void display(int arr[MAX_SIZE], int number);
extern int inputElements(int arr[MAX_SIZE], int elements, int max);
extern int sumOf_Max_and_MinEle(int arr[MAX_SIZE]);
extern int myCount(int arr[MAX_SIZE], int item, int totalElements);
extern void myrev(int arr[MAX_SIZE], int totalElements);
extern void revstr(char *str1);
int inputElements(int arr[MAX_SIZE], int elements, int max)
{
	if(elements<= max)
	{
		int i=0;
		for(i=0;i<elements;i++)/* traversing each elements*/
		{
			printf("\nEnter elements arr[%d] : ",i); /* enter elements of array*/
			scanf("%d", &arr[i]);
		}
		return i;
	}
	else
	{
		printf("\nWarning! Limit of Array Exceeded");
		return EXIT_FAILURE;
	}
}
void display(int arr[MAX_SIZE], int number)/*display function*/
{
	int i=0;
	for(i=0;i<number;i++)/*traversing i value on numbers*/
	{
		printf("\n%d", arr[i]);
	}
}
int sumOf_Max_and_MinEle(int arr[MAX_SIZE]) /*sum of max and min elements  function*/
{
	int minimum = arr[0], maximum = arr[0], sum = 0, i =0;/* initializing max,min,sum ,i value to zero*/
	for(i=0;i<totalElements;i++)/*i value  traversing on each total_elements*/
	{
		if(arr[i]<minimum) /* condition if array of i  less than minimum*/
		{
			minimum=arr[i];
		}
		if(arr[i]>maximum)/* condition if array of i greater than maximum*/
		{
			maximum = arr[i];
		}
	}
	sum = minimum + maximum; /* performing sum operation on min + max*/
	return sum;
}
int myCount(int arr[MAX_SIZE], int item, int totalElements) /*mycount function*/
{
	int count = 0;
	int i =0;
	for(i=0;i<totalElements;i++)
	{
		if(arr[i] == item)
		{
			count++;/*increment count value*/
		}
	}
	return count;
}
void myrev(int arr[MAX_SIZE], int totalElements) /* reverse operation*/
{
	int temp = 0, start =0, end = totalElements-1, i =0;
	printf("\nElements before reverse : \n"); /* print elements before reverse*/
	for(i=0;i<totalElements;i++)/* traversing on totalElements*/
	{
		printf("%d\t", arr[i]);
	}
	printf("\nElements after reverse : \n");/* print elements after reverse*/
	for(i=totalElements-1;i>=0;i--) /* traversing on totalElements-1*/
	{
		printf("%d\t", arr[i]);
	}

}
void revstr(char *str1) /* string reverse operation*/
{
	int i, len, temp;
	len = strlen(str1);/* lenth of string to string1*/
	for(i=0;i<len/2;i++)/* traversing length by two each element*/
	{
		temp = str1[i];
		str1[i] = str1[len - i -1];/*swap operation*/
		str1[len -i -1] = temp;
	}
}
/****************************************************************************************************
 * *
 * * FUNCTION NAME: main
 * *
 * * DESCRIPTION: This function calls to access_array elements and perform certain operations
 * *
 * * RETURN: SUCCESS or FAILURE
 * ***********************************************************************************************/
int main()
{
	int number = 0, sum = 0, item = 0, count =0, elements = 0;
	char str[MAX_SIZE];
	do
	{
		printf("\nNo. of Elements want to store : "); /*ENTER elements want to store*/
		scanf("%d",&elements);
		totalElements = inputElements(arr, elements, MAX_SIZE);
	}
	while(totalElements == EXIT_FAILURE);
	printf("\nNo. of elements Stored : %d ", totalElements); /*number to stored*/
	printf("\nEnter No. of elements to print : "); /* print number of elements to print*/
       	scanf("%d", &number);
	display(arr, number);/*display arr and number*/
       	sumOf_Max_and_MinEle(arr);
       	printf("\nSum Of Min and Max Elements is : %d", sumOf_Max_and_MinEle(arr));/* print sum of max & min elements*/
	printf("\nEnter element to count occurences : "); 
       	scanf("%d", &item);count = myCount(arr, item, totalElements);
	printf("No of Occurences of %d is : %d\n", item, count);
       	myrev(arr, totalElements);/* my rev on array and totalElements*/
	printf ("\nEnter  your name: ");
	scanf("%s", str);					    
	printf (" \n Before reverse the string: %s \n", str);
       	revstr(str);
	printf (" After reverse  the string: %s", str);
	return EXIT_SUCCESS;
}

