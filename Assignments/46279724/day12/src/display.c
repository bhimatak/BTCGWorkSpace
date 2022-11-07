/***************************************************************************************************
 * FUNCTION NAME:display(int arr[],int max)
 * DESCRIPTION:In this,function displays all the elements in an array.
 * RETURNS : SUCCESS in case any error FAILURE.
 * ************************************************************************************************/
#include<stdio.h>
/*********************************
*header information
**********************************/
void display(int arr[],int max)              /*function which takes array and size,which returns all the elements in an array.*/
{
	int i;
	printf("\n");                         /*i is specified to the index value of array*/
	for(i=0;i<max;i++)
	{
		printf("%d\n",arr[i]);         /* prints array values at that particular index*/
	}
}
/******************************************************************************************
 * FUNCTION NAME:display(int arr[],int count,int max)
 * DESCRIPTION:In this function displays the count of extra elements added to the array./
 * RETURNS : nothing
 * ******************************************************************************************/

void display1(int arr[],int count,int max)
{
	int inc =0;                                   /*inc is the count of elements added to the array*/
	int i;                                        /* i value is used to specify the index value of an array*/
	for(i=0;i<count;i++)
	{
		scanf("%d",&arr[i]);
		inc++;                               /*if the condition satisfies ,inc is incremented*/
	}
	printf("%d",inc);
}
/****************************************************************************************************
 * * FUNCTION NAME:sum(int arr[],int max)
 * * DESCRIPTION:In this function displays the sum of min and max elements in the array./
 * * RETURNS : nothing
 * **********************************************************************************************/
int sum(int arr[],int max)
{
	int i=0;                        /*i is used to specify the index value.*/
	int i1=0;                       /*i1 is used to specify the index value.*/
	int s;                           /* s is used to specify swap*/
	for(i=0;i<max;i++)               /*max is the size of the array*/
	{
		for(i1=0;i1<max;i1++)
		{
			if(arr[i]<arr[i1])
			{
				s=arr[i];                   /*replacing arr[i] with arr[i+1]*/
				arr[i]=arr[i1];
				arr[i1]=s;
			}
		}
	}
	printf("\nminimum number is :%d",arr[0]);
	printf("\nmaximum number is :%d",arr[max-1]);
	printf("\nno of maximum and minimum number is :%d",(arr[0]+arr[max-1]));
}
/****************************************************************************************************
 * *FUNCTION NAME:mycount(int arr[],int max,int item)
 * *DESCRIPTION:In this function displays the no of times no is repeated in the array./
 * * RETURNS : nothing
 * **********************************************************************************************************/
int mycount(int arr[],int item,int max)
{
	int i=0;
	int val=0;                      
	for(i=0;i<max;i++)                      /*count of a no being repeated*/
	{
		if(arr[i]==item)              /*arr[i] is used to specify element the value incremented*/
		{
			val++;
		}
	}
	printf("\n the no of occurance is :%d\n",val);
}
/****************************************************************************************************
 * *FUNCTION NAME:myrev(int arr[],int max)
 * *DESCRIPTION:In this function displays the reverse of no in the array./
 * *RETURNS : nothing
 * **********************************************************************************************/
void myrev(int arr[],int max)
{
	int i=0;                   /*i is specify the index value*/
	for(i=max-1;i>0;i--)
	{
		printf("\n%d",arr[i]);
	}
}

			
