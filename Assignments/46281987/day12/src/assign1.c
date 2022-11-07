/*************************************************************************
 * 
 * FILE NAME    : assign1.c
 *
 * DESCRIPTION  : Operations of Interger Array
 * 
 * DATE      		NAME   		 REFERENCE          REASON
 *
 * 05-NOV-2022  	ANNAYASHA    	   DAY12	Array Operations     
 * 
 * Copyright 2010, Aricent Technologies (Holdings) Ltd
 * 
 **************************************************************************/

/*************************************************************************
 *                                HEADER FILES
 **************************************************************************/

#include <common.h>

/**********************************************************
 * 
 * Function Name   : displayArr
 * Description     : this function display array elements
 * Returns         : Success
 * 
 *********************************************************/

void displayArr(int arr[], int n)
{
	int i;
	printf("Array elements are: \n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n",arr[i]);
	}
		        
}

int min(int a,int b)
{
	int min = a;
	if(min > b)
		min = b;
	return min;
}
 
int max(int a,int b)
{
	int max = a;
	if(max < b)
		max = b;
	return max;
}

/**********************************************************
 *  
 * Function Name   : getMin
 * Description     : to get minimum element
 * Returns         : Success
 *      
 *****************************************************/

int getMin(int arr[], int n)
{
	int res = arr[0];
	for (int i = 1; i < n; i++)
		res = min(res, arr[i]);
	printf("Min element: %d\n",res);
	return res;
}

/**********************************************************
 *  
 * Function Name   : getMax
 * Description     : to get maximum element
 * Returns         : Success
 *      
 *********************************************************/

int getMax(int arr[], int n)
{
	int res = arr[0];
	for (int i = 1; i < n; i++)
		res = max(res, arr[i]);
	printf("Max element: %d\n",res);
	return res;
}
 
/************************************************************
 *  
 * Function Name   : findSum
 * Description     : find sum of minimum and maximum element
 * Returns         : Success
 *   
 *************************************************************/

int findSum(int arr[], int n)
{
	int sum;
	int min = getMin(arr, n);
	int max = getMax(arr, n);
	sum=min+max;
	return sum;
}

/*******************************************************************************************
 *  
 * Function Name   : myCount
 * Description     : Count for the number of occurences of a particular element in the array
 * Returns         : Success
 *      
 *******************************************************************************************/

int myCount(int arr[], int n, int eCount)
{
	int count = 0;
	for ( int i = 0; i < n; i++ )
	{
		if ( arr[i] == eCount ) 
			++count; 
	}
	return count;
}

/*****************************************************
 *  
 * Function Name   : myRev
 * Description     : Reverse the contents of the array
 * Returns         : Success
 *     
 *****************************************************/

void myRev(int arr[] , int n)  
{  
	int i; 
	int tmp ;  
	for(i=0 ; i<n/2 ; i++)  
	{  
		tmp = arr[i] ;  
		arr[i] = arr[n-1-i];  
		arr[n-1-i]=tmp;  
	}  
}  

/******************************************************
 *
 * Function Name   : main
 * Description     : this is main method of the program
 * Returns         : Success 
 * 
 * *****************************************************/

int main()
{
	int arr[]={12,53,6,20,2,10,6,7,10,6,34,6};
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum;
	int c;			    

	displayArr(arr, n);

	sum=findSum(arr, n);
	printf("Sum of max and min element is = %d\n",sum);				        

	c=myCount(arr,n,6);
	printf("The number occurs %d times\n",c);
					        
	myRev(arr,n) ;  
	printf ("After reversing the array: \n" ) ;  	
	for (int i=0 ; i<n ; i++)  
	{  
		printf("%d ",arr[i]) ;  
	}  

	printf("\n");

	return 0;
}
