/*********************************************************************
** FILE NAME : day12-3e.c

** DESCRIPTION : This file performs few operation on integer array according to user  instructions.

** Revision History : 

  DATE 		NAME	REFERENCE	REASON
  --------------------------------------------------------

  06-11-2022		Rujitha		ABC1234		employee referal

**Copyright @all user Refereals.

****************************************************/

/*****************************************************
**FUNCTION NAME : Display

**DESCRIPTION : It displays an array and perform the operation and returns the output.

**RETURNS : EXIT_SUCCESS,if there is any error
		it gives EXIT_FAILURE.

**************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SIZE 50
int arr[MAX_SIZE] = {0};/*It gives the length to an array*/
int totalElements = 0;
extern void display(int arr[MAX_SIZE], int number);/*It is a mutable array*/
extern int inputElements(int arr[MAX_SIZE], int elements, int max);/*Exten is an exernal represented arry*/
extern int sumOf_Max_and_MinEle(int arr[MAX_SIZE]);/*a mutable array that stores the sum of max and min elements*/
extern int myCount(int arr[MAX_SIZE], int item, int totalElements);/*a mutable array that stores the count of word*/
extern void myrev(int arr[MAX_SIZE], int totalElements);
extern void revstr(char *str1);
int inputElements(int arr[MAX_SIZE], int elements, int max)/*it display the number of elements to display*/
{
	if(elements <= max)
	{
		int i = 0;for(i = 0; i < elements; i++)
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
void display(int arr[MAX_SIZE], int number)/*it displays the elements each on one line anbd returns void*/
{
	int i = 0;for(i = 0; i < number; i++)
	{
		printf("\n%d", arr[i]);
	}
}
int sumOf_Max_and_MinEle(int arr[MAX_SIZE])/*it returns the sum of max and min elements of the array.*/
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
int myCount(int arr[MAX_SIZE], int item, int totalElements)/*it counts the number of occuranceof particular element in an array*/
{
	int count = 0,i = 0;
	
	for(i = 0; i < totalElements; i++)
	{
		if(arr[i] == item)
		{
			count++;
		}
	}
	return count;
}
void myrev(int arr[MAX_SIZE], int totalElements)/*it reverse the contents of the array*/
{
	int temp = 0,start = 0,end  = totalElements - 1,  i = 0;
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
void revstr(char *str1)  
{ 
	int i, len, temp;
	len = strlen(str1);
	for (i = 0; i < len/2; i++)
	{
		temp = str1[i];
		str1[i] = str1[len - i - 1];
		str1[len - i - 1] = temp;
	}	
}
int main()
{
	int number = 0,sum = 0,item = 0,count = 0,elements = 0;
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
	printf (" \n Before reversing the string: %s \n", str); 
	revstr(str);
	printf (" After reversing the string: %s", str);
	return EXIT_SUCCESS;
}





