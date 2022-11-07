/*************************************************************************************
 * * FUNCTION NAME 	: Assign12.c
 * * 
 * * DESCRIPTION 	: This file defines input elements,mycount,myrev,revstr
 * *
 * *Revision History	: 
 * * DATE                NAME            REFERNCE                 REASON
 * *-----------------------------------------------------------------------------------------
 * * 5 NOV 2022         BHARGAVI         W3.resorces              find the different applications
 * *
 * *Copyright  2022 Altran All Group Rights Reserved
 * *
 * *******************************************************************************************/
#ifndef _ASSIGN12.C
#define _ASSIGN12.C
#include <stdio.h>/*header file*/
#include <stdlib.h>/*header file*/
#include <string.h>/*header file*/
#define MAX_SIZE 50
#endif/*END OF ASSIGN12.C macro*/
/*intialization of variables*/
int arr[MAX_SIZE] = {0};/*integer datatype*/
int totalElements = 0;/*integer datatype*/
extern void display(int arr[MAX_SIZE], int number);/*define extern */
extern int inputElements(int arr[MAX_SIZE], int elements, int max);
extern int sumOf_Max_and_MinEle(int arr[MAX_SIZE]);
extern int myCount(int arr[MAX_SIZE], int item, int totalElements);
extern void myrev(int arr[MAX_SIZE], int totalElements);
extern void revstr(char *str1);
/*********************************************************************************************
 * *FUNCTION NAME     :  inputelements,sum_of_max and min,mycount,myrev,revstr
 * *
 * *DESCRIPTION       : Invoke the function and test applications
 * *
 * *RETURNS           : EXIT_STATUS,EXIT_FAILURE,EXIT_SUCCESS
 * *
 * *
 * *******************************************************************************************/
int inputElements(int arr[MAX_SIZE], int elements, int max)
{
	    if(elements <= max)/*Checks if elements less than max*/
	    {
		 int i = 0;
		 for(i = 0; i < elements; i++)/*for loop condition*/
		{
			 printf("\nEnter the element arr[%d] : ",i);/*takes input from user*/
			 scanf("%d", &arr[i]);/*reads the address of arr*/
		}
		 return i;/*returns i*/
						        
	    }
	    else
	   {
		     printf("\nWarning ! Limit of Array Exceeded");/*else it shows warning*/
		     return EXIT_FAILURE;/*returns exit_failure*/
	   }
}
void display(int arr[MAX_SIZE], int number)
{
	    int i = 0;/*initialization variable*/
	    for(i = 0; i < number; i++)
	   {
		 printf("\n%d", arr[i]);/*prints arr[i]*/
	   }
}
int sumOf_Max_and_MinEle(int arr[MAX_SIZE])
{
	/*intialization of variable*/
	    int minimum = arr[0],
	        maximum = arr[0],sum = 0,i = 0;
	    for(i = 0; i < totalElements; i++)/*for loop condition*/
	   {
		 if(arr[i] < minimum)/*checks the minimum*/
	       {
		   minimum = arr[i];/*stores arr[i] into minimum*/
	       }
	        if(arr[i] > maximum)/*checks the maximum*/
		{
			  maximum = arr[i];/*stores arr[i] into maximum*/
		 }
	   }
    	    sum = minimum + maximum;  
            return sum;/*return sum value*/
}
int myCount(int arr[MAX_SIZE], int item, int totalElements)
{
	/*intialization of variables*/
	    int count = 0,
	    i = 0;    
	    for(i = 0; i < totalElements; i++)
	    {
	   	    if(arr[i] == item)/*condition checks arr[i] is equals to item*/
		   {
			 count++;/*increment of count*/
		   }
	    } 
	        return count;/*return count*/
}
void myrev(int arr[MAX_SIZE], int totalElements)
{
	/*intialization of variables*/
	    int temp = 0,start = 0,end  = totalElements - 1,i = 0;       
	    printf("\nElements Before Reversing : \n");	/*prints element before reverse*/  
	    for(i = 0; i < totalElements; i++)
	   {
		 printf("%d \t", arr[i]);/*prints arr[i]*/
	   }	       
	   printf("\nElements after Reversing : \n");  /*prints after reversing*/
	   for(i=totalElements-1; i >= 0; i--)
	   {
		printf("%d \t",arr[i]);
	   }
}
void revstr(char *str1)  
{  
	/*intialization of variables*/
	    int i, len, temp;  /*integer datatype*/
	    len = strlen(str1);   /*length of a string*/
	    for (i = 0; i < len/2; i++)  
	    {  				    
		temp = str1[i];  /*str1 stores into temp*/
		str1[i] = str1[len - i - 1];  /*str1 stores into str1[i]*/
	        str1[len - i - 1] = temp;/*temp stores into str1*/
	    }  
}  
/*main function to call the above defines function*/
int main()
{
	/*intialization of variable*/
	    int number =0,sum = 0,item = 0,count =0, elements = 0;
	    char str[MAX_SIZE];	   /*str is of char datatype*/
	    do
	   {
		   printf("\nNo. of Elements you want to Store : ");/*prints the elements want to store*/
		   scanf("%d", &elements);totalElements = inputElements(arr, elements, MAX_SIZE);	           
	   }
	    while(totalElements == EXIT_FAILURE);/*while loop checks the condition*/
	        printf("\nNo. of Elements Stored are: %d ",totalElements);/*prints the element stored*/
	        printf("\nEnter No. of elements to print : ");/*takes input from the user*/
		scanf("%d", &number);        
	        display(arr, number);/*display arr and number*/
		sumOf_Max_and_MinEle(arr);/*calls the sum of max and min function*/
		printf("\nSum Of Min and Max Elements is : %d", sumOf_Max_and_MinEle(arr));/*sum of min and max elememts*/
		printf("\nEnter element to count occurences : ");/*takes input from user*/
		scanf("%d", &item);count = myCount(arr, item, totalElements);
		printf("No of Occurences of %d is : %d\n", item, count);/*no of occurences*/
		myrev(arr, totalElements); /*calling my rev function*/
		printf ("\nEnter the your name: ");  
		scanf("%s", str);
	        printf (" \n Before reversing the string: %s \n", str);/*after reversing*/  		         
	        revstr(str); /*calls revstr*/
		printf (" After reversing the string: %s", str);/*after reversing the string*/	         
		return EXIT_SUCCESS;/*return exit success*/
}
