/*************************************************************************
* *
* *  FILE NAME    : 3d.c
* *
* *  DESCRIPTION  : Program to write an application that performs few operations on an interger array. Implement the application by defining the functions given below. 
* *              
* *
* *  Revision History:
* *  DATE         NAME    REFERENCE          REASON
* *
* *  05-11-22    Suhana       New           Initial creation
* *
* *  Copyright 2022, Altran Group All Rights Reserved
* *
* * *************************************************************************
* *                    STANDARD HEADER FILES
* * *************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**************************************************************************
* *                     MACROS
* * **************************************************************************/
#define MAX_SIZE 50
/**************************************************************************
* *
* * FUNCTION NAME: inputElements
* *
* * DESCRIPTION: Display an array/or a subset of the array. The function accepts the array, the number of elements to display. 
* *
* * RETURNS:  SUCCESS or FAILURE
* */
int arr[MAX_SIZE] = {0}; /*initializing array with the element '0'*/
int totalElements = 0;/*initializing totalElements to 0*/
extern void display(int arr[MAX_SIZE], int number); /* display function declaration*/
extern int inputElements(int arr[MAX_SIZE], int elements, int max); /* inputElements function declaration*/
extern int sumOf_Max_and_MinEle(int arr[MAX_SIZE]); /* sumOf_Max_and_MinEle function declaration*/
extern int myCount(int arr[MAX_SIZE], int item, int totalElements); /* myCount function declaration*/
extern void myrev(int arr[MAX_SIZE], int totalElements); /* myrev function declaration*/
extern void revstr(char *str1); /* revstr function declaration*/
int inputElements(int arr[MAX_SIZE], int elements, int max)/*function definition*/
{
	if(elements <= max)/*comparing elements and Max*/
	{
		int i = 0;/*initializing i value*/
		for(i = 0; i < elements; i++)/*Traversing in array of elements*/
		{
			printf("\nEnter the element arr[%d] : ",i);/*printing formatted output*/
			scanf("%d", &arr[i]);/*reads input*/
		}
		return i;/*returning i value*/

	}
	else
	{
		printf("\nWarning ! Limit of Array Exceeded");/*printing formatted output*/

		return EXIT_FAILURE; /*return in case of failure*/
	}
}
/**************************************************************************
* *
* * FUNCTION NAME: display
* *
* * DESCRIPTION: Accept array elemnents from user. The function parameters are the array, the number of elements to enter and the maximum size of the array.
* *
* * RETURNS:  the number of elements accepted
* */
void display(int arr[MAX_SIZE], int number)/*function definition*/
{
	int i = 0;/*initializing i */
	for(i = 0; i < number; i++)/*traversing through number*/
	{
		printf("\n%d", arr[i]);/*printing formatted output*/

	}
}
/**************************************************************************
* *
* * FUNCTION NAME: sumOf_Max_and_MinEle
* *
* * DESCRIPTION: the sum of the maximum and minimum element of array
* *
* * RETURNS:  SUCCESS
* */
int sumOf_Max_and_MinEle(int arr[MAX_SIZE])/*function definition*/
{
	int minimum = arr[0]; /*initializing minimum variable*/
	int maximum = arr[0]; /*initializing maximum variable*/
	int sum = 0; /*initializing sum variable*/
	int i = 0; /*initializing i variable*/

	for(i = 0; i < totalElements; i++)/*traversing through totalelements*/
	{
		if(arr[i] < minimum)/*checking array condition with minimum variable*/
		{
			minimum = arr[i];/*assigning array[i] to minimum variable*/

		}
		if(arr[i] > maximum)/*checking array condition with maximum variable*/
		{
			maximum = arr[i];/*assigning array[i] to maximum variable*/
		}
	}

	sum = minimum + maximum;/*assigning updated value to sum*/

	return sum;/*return sum*/
}
/**************************************************************************
* * *
* * * FUNCTION NAME: myCount
* * *
* * * DESCRIPTION: Count for the number of occurences of a particular element in array
* * *
* * * RETURNS:  SUCCESS
* * */
int myCount(int arr[MAX_SIZE], int item, int totalElements)/*function definition*/
{
	int count = 0; /*initializing count variable*/
	int  i = 0; /*initializing temp variable*/   
       	for(i = 0; i < totalElements; i++)/*traversing through total elements*/
	{
		if(arr[i] == item)/*checks the condition*/
		{
			count++; /*incrementing count value*/

		}

	}
	return count;/*return count value*/
}
/**************************************************************************
* * *
* * * FUNCTION NAME: myrev
* * *
* * * DESCRIPTION: Reverse the contents of the array
* * *
* * * RETURNS:  SUCCESS
* * */
void myrev(int arr[MAX_SIZE], int totalElements)/*function definition*/
{
	int temp = 0;/*initializing temp variable*/
	int start = 0;/*initializing start variable*/
	int end  = totalElements - 1;/*assigning value to end variable*/
	int i = 0;/*initializing index variable*/

	printf("\nElements Before Reversing : \n");/*printing formatted output*/

	for(i = 0; i < totalElements; i++)/*traversing through elemnts*/
	{
		printf("%d \t", arr[i]);/*printing formatted output*/
	}

	printf("\nElements after Reversing : \n");/*printing formatted output*/

	for(i=totalElements-1; i >= 0; i--)/*reverse traversing through elements */
	{
		printf("%d \t",arr[i]);/*printing formatted output*/
	}
}
/**************************************************************************
* * *
* * * FUNCTION NAME: revstr
* * *
* * * DESCRIPTION: Reverse the contents of the array
* * *
* * * RETURNS:  SUCCESS 
* * */
void revstr(char *str1)  /*function definition*/
{  
	int i;  /*declaring i*/
        int len;  /*declaring length*/
	int temp;  /*declaring temp*/
	len = strlen(str1);   /*get length of string*/
	for (i = 0; i < len/2; i++)  /*traversing through each string*/
	{  

		temp = str1[i];  /*temp value to str1[i]*/
		str1[i] = str1[len - i - 1];  /*str1[i] value to str1[len-i-1]*/
		str1[len - i - 1] = temp;  /* str1[len - i - 1] value to temp*/
	}  
}  
/**************************************************************************
* * *
* * * FUNCTION NAME: main
* * *
* * * DESCRIPTION: It call functions and execute here
* * *
* * * RETURNS:  EXIT_SUCCESS or EXIT_FAILURE
* * */
int main()
{
	int number = 0; /*initializing number*/
	int sum = 0; /*initializing sum*/
	int item = 0;/*initializing item*/
	int count = 0;/*initializing count*/
	int elements = 0;/*initializing elements*/
	char str[MAX_SIZE]; /*array of strings*/

	do
	{
		printf("\nNo. of Elements you want to Store : ");/*printing formatted output*/
		scanf("%d", &elements);/*reads input*/
		totalElements = inputElements(arr, elements, MAX_SIZE);/*declaring new variable*/

	}
	while(totalElements == EXIT_FAILURE); /*ending while loop*/

	printf("\nNo. of Elements Stored are: %d ",totalElements);/*printing formatted output*/
	printf("\nEnter No. of elements to print : ");/*printing formatted output*/
	scanf("%d", &number);/*reads input*/

	display(arr, number); /*function call*/
	sumOf_Max_and_MinEle(arr); /*function call*/

	printf("\nSum Of Min and Max Elements is : %d", sumOf_Max_and_MinEle(arr));/*printing formatted output*/
	printf("\nEnter element to count occurences : ");/*printing formatted output*/
	scanf("%d", &item);/*reads input*/
	count = myCount(arr, item, totalElements);/*declaring new variable*/
	printf("No of Occurences of %d is : %d\n", item, count);/*printing formatted output*/

	myrev(arr, totalElements); /*function call*/
	printf ("\nEnter the your name: ");  /*printing formatted output*/
	scanf("%s", str);/*reads input*/
	printf (" \n Before reversing the string: %s \n", str);  /*printing formatted output*/

	revstr(str);  /*function call*/

	printf (" After reversing the string: %s", str);  /*printing formatted output*/

	return EXIT_SUCCESS; /*return SUCCESS*/
}
