/********************************************************************************************************************************************
  FILENAME : display.c
  DESCRIPTION : This file performs certain operations on a array like displaying the contents of array,adding some extra elements into the array,sum of minimum and maximum   elements of array,fetching for a element in a array and reversing the array.
  REVISION HISTORY :
  DATE                       NAME                     REFERENCE                         REASON
--------------------------------------------------------------------------------------------------------------------
   5 NOV 2022             Yamabharathi                  new                  To perform certain operations on array.
 **************************************************************************************************************************************************/

#include<display.h>               /* header information*/

/************************************************************
FUNCTION NAME : display(int arr[],int max)
DESCRIPTION : In this,function displays all the elements in a array.
RETURNS : returns nothing.
*********************************************************************/

void display(int arr[],int max)                        /*function which takes array and size, which returns all the elements in a array*/
{
	int index;                                     /*index is used to specify the index value of array*/
	printf("\n");
	for(index = 0;index<max;index++)
	{
		printf("%d\n",arr[index]);            /*prints array value at that particular index*/
	}

}

/**************************************************************************************
FUNCTION NAME : display(int arr[],int count,int max)
DESCRIPTION : In this,function displays the count of extra elements added to the array.
RETURNS : returns nothing.
*****************************************************************************************/

void display1(int arr[],int count,int max)
{
	int inc = 0;                          /* inc is the count of elements added to the array*/
	int index;                            /*index value is used to specify the index value of a array*/
	for(index = 0;index<count;index++)
	{
		scanf("%d",&arr[index]);
		inc++;                        /*if the condition satisfies,inc is incremented*/
	}
	printf("%d",inc);
}


/****************************************************************************************
FUNCTION NAME : sum(int arr[],int max)
DESCRIPTION : In this,function displays the sum of maximum and minimum numbers of a array.
RETURNS : returns integer..
*****************************************************************************************/

int sum(int arr[],int max)                                    
{
	int index=0;                                          /*index is used for specifying the index value*/
	int index1=0;                                         /*index1 is used for specifying the index value*/
	int swap;                                             /*swap is useful for swapping the values of a array*/
	for(index=0;index<max;index++)                        /*max is the size of the array*/
	{
		for(index1=0;index1<max;index1++)
		{
			if(arr[index]<arr[index1])
			{
				swap=arr[index];             /*replacing arr[i] with arr[i+1]*/
				arr[index]=arr[index1];
				arr[index1]=swap;
			}
		}
	}
	printf("\nminimum number is : %d",arr[0]);
	printf("\nmaximum number is : %d",arr[max-1]);
	printf("\nsum of maximum and minimum numbers is : %d",(arr[0]+arr[max-1]));
	return 0;
}

/***********************************************************************************
FUNCTION NAME : mycount(int arr[],int item,int max)
DESCRIPTION : In this,function displays the number of times a number is repeated.
RETURNS : returns integer.
************************************************************************************/

int mycount(int arr[],int item,int max)
{
	int index=0;                          /*index is used to specify the index value of array*/
	int value = 0;                       /*count of a number being repeated*/
	for(index=0;index<max;index++)
	{
		if(arr[index] == item)         /*if arr[index] is equal to specified element,,then value is incremented*/
		{
			value++;
		}
	}

	printf("\nthe number of occurances is : %d\n",value);
	return 0;
}

/***********************************************************************************
FUNCTION NAME : myrev(int arr[],int max)
DESCRIPTION : In this,function displays the reverse of elements in a array.
RETURNS : returns nothing.
**************************************************************************************/
void myrev(int arr[],int max)
{
	int index = 0;                         /*index is used for specifying the index value of array*/
	for(index=max-1;index>=0;index--)
	{
		printf("\n%d",arr[index]);
	}
}

