/****************************************
  FILENAME : mainArray.c
  DESCRIPTION : This file include main from which the program starts.
  REVISION HISTORY :
  DATE                       NAME                     REFERENCE                         REASON
----------------------------------------------------------------------------------------------------------------------------------------
   5 NOV 2022             Yamabharathi                  new                  To perform multiple operations on single dimensional array.
 */

#include<display.h>                      /* header information*/

/*************************************************************
FILENAME : main()
DESCRIPTION : In this,function sends a call event request to display.c
RETURNS : SUCCESS, in case of error FAILURE.
*********************************************************************/

int main()
{
	int index;                                /*index is used to specify the index value of array.*/
	int max;                                  /*max is the size of the array*/
	int count;                                /*count is the no.of elements to be inserted into the array*/
	int item;                                 /*item is the element to be fetched*/

	printf("enter the size of array : ");
	scanf("%d",&max);
	int arr[max];                            /*array of size max which takes integer values*/
	
	for(index=0;index<max;index++)
	{
		scanf("%d",&arr[index]);
	}
	display(arr,max);                        /* display(arr,max) is used to invoke a function from display.c which prints elements of array.*/

	printf("enter the number of elements to enter : ");
	scanf("%d",&count);
	display1(arr,count,max);                /* display1(arr,count,max) function counts the extra elements added to the array*/                        
	
	sum(arr,max);                           /*sum(arr,max) returns the sum of maximum and minimum elements in a array.*/ 

	printf("\nenter the element to be fetched : ");
	scanf("%d",&item);
	mycount(arr,item,max);                 /*mycount(arr,max) returns the numbers of times a given element is repeated*/

	myrev(arr,max);                       /*myrev(arr,max) returns the array of elements in a reverse order*/
	return 0;
}
