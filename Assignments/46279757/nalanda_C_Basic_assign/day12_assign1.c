/***********************************************************************
 * *
 * * FILE NAME   : day12_assign1.c
 * *
 * * DESCRIPTION  : Program to demonstrate a fixed size array in initialization
 * *			 all elements if the array to zero
 * *
 * * Revision History:
 * * DATE		NAME		REFERENCE		REASON
 * ***********************************************************************
 * * 05-11-2022      Vasanthi              New               Array creation
 * *
 * * Copyright 2022, Altran Group All rights reserved
 * *
 * ************************************************************************
 * *				STANDARD HEADER FILES
 * ************************************************************************/         
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*************************************************************************
 * *				MACROS
 * **********************************************************************/
#define MAX_SIZE 50
int arr[MAX_SIZE] = {0};/*array initializing with zero*/
int totalElements = 0;/*total sum assigned to 0*/
/*************************************************************************
 * *    		FUNCTION DEFINING
 * ***********************************************************************/
extern void display(int arr[MAX_SIZE], int number);
extern int inputElements(int arr[MAX_SIZE], int elements, int max);
extern int sumOf_Max_and_MinEle(int arr[MAX_SIZE]);
extern int myCount(int arr[MAX_SIZE], int item, int totalElements);
extern void myrev(int arr[MAX_SIZE], int totalElements);
extern void revstr(char *str1);
/************************************************************************
 * *
 * * FUNCTION NAME : inputElements
 * *
 * * DESCRIPTION   : Accept arry elements from the user and returns the number 
 * 			of elements accepted
 * *
 * * RETURNS      : SUCCESS or FAILURE
 * ***********************************************************************/			
int inputElements(int arr[MAX_SIZE], int elements, int max)
{
	if(elements <= max)/*checking whether the element is less than max size*/
	{
		int i = 0;for(i = 0; i < elements; i++)/*traverse through the elements*/
		{
			printf("\nEnter the element arr[%d] : ",i);/*reads the elements from user*/
			scanf("%d", &arr[i]);/*prints the array elements*/
		}
		return i;/*returns elements*/
		        
	}
	else
	{
		printf("\nWarning ! Limit of Array Exceeded");/*returns max size of array is exceeded*/
		return EXIT_FAILURE;/*returns failure*/
	}
}
/***************************************************************************
 * *
 * * FUNCTION NAME : display
 * *
 * * DESCRIPTION   : It display the elements each on one line and returns void
 * *
 * * RETURNS       : prints elements
 * **************************************************************************/
void display(int arr[MAX_SIZE], int number)
{
	int i = 0;/*initializing i */
	for(i = 0; i < number; i++)/*traversing through the elemnts*/
	{
		printf("\n%d", arr[i]);/*prints the elements*/
	}
}
/***************************************************************************
 * *
 * * FUNCTION NAME : sumOf_Max_and_MinEle
 * *
 * * DESCRIPTION   : This function returns the sum of max and min elements
 * * 			of the array
 * *
 * * RETURNS       : max and min element
 * *************************************************************************/
int sumOf_Max_and_MinEle(int arr[MAX_SIZE])
{
	 int minimum = arr[0],/*min value initialization*/
	 maximum = arr[0],/*max array value intialization*/
	 sum = 0,/*intializing sum with 0*/
	 i = 0;/*i value assigned to 0*/
	 for(i = 0; i < totalElements; i++)/*iterate the loop to get max and min elements*/
	 {
		 if(arr[i] < minimum)/*to check array valuw with min*/
		 {
			 minimum = arr[i];/*gets the min array value*/
		 }
		 if(arr[i] > maximum)/*to check the array value is greater than max element*/
		 {
			 maximum = arr[i];/*gets the max element*/
		 
		 }
	 }
	 sum = minimum + maximum;/*sum of max and min element stored in sum */
	 return sum;/*returns the sum of min and max*/
}
/***************************************************************************
 * *
 * * FUNCTION NAME : myCount
 * *
 * * DESCRIPTION  : this function counts the no. of occurences of particular 
 * *			element in the array
 * *
 * * RETURNS      : count of an element
 ****************************************************************************/
int myCount(int arr[MAX_SIZE], int item, int totalElements)
{
	int count = 0,/*initializing of count to count the values in array*/
	i = 0;/*value assigned with 0*/
	for(i = 0; i < totalElements; i++)/*traverse through the elements in the array*/
	{
		if(arr[i] == item)/*elements check with array*/
		{
	            count++;/*incrementing count */
						                
		}

	}
	return count;/*returns the particular count of an element*/
}
/***************************************************************************
 * *
 * * FUNCTION NAME  : myrev
 * *
 * * DESCRIPTION    : reverse the contents of the array
 * *
 * * RETURNS        : reverse elements
 * ************************************************************************/
void myrev(int arr[MAX_SIZE], int totalElements)
{
	int temp = 0,/*intializing temporary value*/
	start = 0,/*to start the reverse element*/
	end  = totalElements - 1,/*initializing end and total elements decreasing*/
	i = 0;/*initializing i with 0 value*/
	printf("\nElements Before Reversing : \n");
	for(i = 0; i < totalElements; i++)/*iterate the loop to reverse the element*/
	{
		printf("%d \t", arr[i]);/*reads the reverse element*/
	}
	printf("\nElements after Reversing : \n");/*prints the reverse eleement*/
	for(i=totalElements-1; i >= 0; i--)/*traverse the loop to get the end of elements*/ 
	{
		printf("%d \t",arr[i]);/*prints the array elemeent*/
	}
}
/******************************************************************************
 * *
 * * FUNCTION NAME : revstr
 * * 
 * * DESCRIPTION   : this function reverse  the string
 * *
 * * RETURNS      : returns reverse string
 * *************************************************************************/
void revstr(char *str1)  
{
	int i, len, temp;  /*intializing i value,length and temmp value*/
	len = strlen(str1); /*to get the length of the string*/
	for (i = 0; i < len/2; i++) 
	{
		temp = str1[i];  /*string is assigned with temp value*/
		str1[i] = str1[len - i - 1];  /*to get reverse value*/
		str1[len - i - 1] = temp; /*reverse string*/
	}
}
/********************************************************************
 * *
 * * FUNCTION NAME  : main
 * * 
 * * DESCRIPTION    : This function takes the particular operation to perform 
 * * 			on the elements of array 
 * * 
 * * RETURNS        : returns SUCCESS or FAILURE
 * ******************************************************************/
int main()
{
	 int number = 0,/*to take no. of elements from the user*/
	 sum = 0,/*inializing sum*/
	 item = 0,/*item initialization*/
	 count = 0,/*to count particular element occur*/
	 elements = 0;/*elements value assigned with zero*/
	 char str[MAX_SIZE];/*intializing character with MAX_SIZE*/
	 do/*to xheck the condition*/
	 {
		 printf("\nNo. of Elements you want to Store : ");/*gets the elements from the user*/
		 scanf("%d", &elements);totalElements = inputElements(arr, elements, MAX_SIZE);/*prints the eleements int hte form of array*/
	 }
	 while(totalElements == EXIT_FAILURE);/*if the condition is true then only loop iterate*/
	 printf("\nNo. of Elements Stored are: %d ",totalElements);/*reads the no. of elemeents to bestored*/
	 printf("\nEnter No. of elements to print : ");/*asks the user how many you want to print*/
	 scanf("%d", &number);/*prints the number*/
	 display(arr, number);/*display the array elements*/
	 sumOf_Max_and_MinEle(arr);/*returns the sum of max and min elements*/
	 printf("\nSum Of Min and Max Elements is : %d", sumOf_Max_and_MinEle(arr));/*cxalculate the sum of min and max elemenst*/
	 printf("\nEnter element to count occurences : ");/*asks the user to count the no. of particular element*/
	 scanf("%d", &item);/*prints the particular item*/
	 count = myCount(arr, item, totalElements);/*count the particular element occurence*/
	 printf("No of Occurences of %d is : %d\n", item, count);/*returns the occurence of eelement*/
	 myrev(arr, totalElements);/*reverse of the array elements*/
	 printf ("\nEnter the your name: ");  /*asks the user to enter your name*/
	 scanf("%s", str);/*prints the string*/
	 printf (" \n Before reversing the string: %s \n", str); /*before reversing the string*/
	 revstr(str);  /*prints the before reversing the string*/
         printf (" After reversing the string: %s", str);  /*prints after reversing the string*/
         return EXIT_SUCCESS; /* returns success*/   
}
		        
