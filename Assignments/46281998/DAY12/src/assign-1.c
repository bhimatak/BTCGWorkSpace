/**************************************************************************************************************
 *  *  * *FILE NAME : assign3b.c
 *  *  * *
 *  *  * *DESCRIPTION :This file defines the functions to perform some operations on input array and test the application.
 *  *  * *
 *  *  * *REVISION HISTORY:
 *  *  *  DATE              NAME                 REFERENCE                                            REASON
 *  *  * *****************************************************************************************************************
 *  *  * 05 OCT 2022   AKSHYARIKA MOHARANA         NEW                                        NEW CODE TO PERFORM FUNCTION
 *  *  *
 *  *  *Cpoyright @2022 Altran Group All Rights Reserved
 *  *  * *****************************************************************************************************************/

#include<common.h>
#define MAX_SIZE 50

int arr[MAX_SIZE] = {0};
int totalElements = 0;
extern void display(int arr[MAX_SIZE], int number);
extern int inputElements(int arr[MAX_SIZE], int elements, int max);
extern int sumOf_Max_and_MinEle(int arr[MAX_SIZE]);
extern int myCount(int arr[MAX_SIZE], int item, int totalElements);
extern void myrev(int arr[MAX_SIZE], int totalElements);
extern void revstr(char *str1);
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

void display(int arr[MAX_SIZE], int number)
{
	int i = 0;for(i = 0; i < number; i++)
	{
		printf("\n%d", arr[i]);
	}
}

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
		if(arr[i] > maximum)
		{
			maximum = arr[i];
		}
	}
	sum = minimum + maximum;
	return sum;
}
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
void myrev(int arr[MAX_SIZE], int totalElements)
{
      /* int temp = 0;
       int start = 0;
       int end = totalElements - 1;*/
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
/********************************************************************************************************
 *  * *FUNCTION NAME:main()
 *  * *DESCRIPTION:This function calls the required function to perform  operations on input array.
 *  * *RETURNS:SUCCESS and in case of failure ERROR
 *  * *****************************************************************************************************/
int main()
{
	 int number = 0;
	 /*int sum = 0;*/
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
	  printf (" \n Before reversing the string: %s \n", str);
	  revstr(str);
	  printf (" After reversing the string: %s", str);
	  return EXIT_SUCCESS;
}




