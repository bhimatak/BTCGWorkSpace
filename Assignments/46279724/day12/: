/******************************************************************************************************************************
 * *FILENAME : mainARRAY.c
 * *DESCRIPTION : In this, function sends a call event request to display.c
 * RETURNS : SUCCESS, in case any error FAILURE.
 * ************************************************************************************************************************/
#include<display.h>          /* header information*/
int main()
{
	int i;                       /*index is to specify the index value of array.*/
	int max;                       /*max is the size of the array*/
	int item;                      /*count is the no of elements to be inserted into the array*/
	int count;                     /*item is the element to be fetched*/ 

	printf("enter the size of array :");   /*enter the size of array*/
	scanf("%d",&max);
	int arr[max];                              /*array of size max which takes integer values*/

	for(i=0;i<max;i++)                         
	{
		scanf("%d",&arr[i]);
	}
	display(arr,max);                              /*display(arr,max) is used to integer values*/

	printf("enter the number of elements:");
	scanf("%d",&count);
	display1(arr,count,max);                       /*display1(arr,max,count) function used to counts the extra elements added to array*/

	sum(arr,max);                                 /*sum(arr,max) returns the sum of maximum and minimum elements in a array*/

	printf("\nenter the elements to be fetched :");
	scanf("%d",&item);
	mycount(arr,item,max);                          /*mycount(arr,max)returns the number of times a given elements is requested*/

	myrev(arr,max);                               /*myrev(arr,max) returns the array of elements in a reverse order*/
	return 0;
}



