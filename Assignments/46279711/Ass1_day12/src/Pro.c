#include "common.h"
/*******************************************************************************
 ** FILE NAME  : Pro.c
 **
 ** DESCRIPTION : This file defines the function which send external message for Refer.
 **
 ** Revision History :
 ** DATE            NAME              REFERENCE            REASON
 ** ----------------------------------------------------------------------
 ** 04 NOV 2022    TEJA SRI           ARRAY                 NEW CODE
 **
 **
 ** Copyright @ 2022 Capgemini All Rights Reserved
 **
 *****************************************************************************************/

/********************************************************************************************  
 ** FUNCTION NAME : myrev and mycount
 ** 
 ** DESCRIPTION : This function return the "ARRAY"
 **
 ** RETURN : This function return array, count in array and reverse of array 
 **
 **
 *******************************************************************************************/
#define MAX 100
int myrev(int myarray[],int maxarrsize);
int mycount(int arr4[],int item,int size);    /*Header*/
int main()
{
	int array[10] = {1,2,3,4,5,6,7,8,9,10}; /*declaring array values*/
	int arr4[10]={1,1,2,2,2,2,3,4,2,2};  /*array with int data type*/
	int size = sizeof(arr4);             /*int data type to get size of array*/
	int item = 2;                        /*int data type to get particular number*/
	int size2,i;     /*int data type to declare size and index*/
	int arr2[MAX];  /*array with int data type*/
	int j; /*int data type for index*/
	int max=0;      /*int data type to display maximum value*/
	int min=0;      /*int data type to display minimum value*/
	int k,sum=0;    /*int data type */
	int arr3[10] = {1,2,8,5,9,4,6,3,7,10};   /*array with int data type*/
	int arr5[4]={5,10,7,11};
	int maxarrsize =4;    /*int data type to store size*/
	int ik;               /*int data type*/
	max =arr3[0];         /*int data type initilize to 1st value of array*/
	min = arr3[0];        /*int data type initilize to 1st value of array*/
	for(j=0;j<10;j++)
	{
		printf("%d \n", array[j]);
		//printf("void\n");
	}
	printf("\n Enter size of array:\n");
	scanf("%d",&size2);
	printf("\n The size of array:%d\n",size2);
	if(size2 <0 || size2 >=101)
	{
		printf("Invalid \n ");
		printf("Enter below 100 \n");
	}
	else 
	{
		for(i=0;i<size2-1;i++)
		{
			scanf("%d\n",&arr2[i]);
		}
	}
	for(k=0;k<10;k++)
	{
		if(max < arr3[k])
		{
			max = arr3[k];
		}
		if(min > arr3[k])
		{
			min = arr3[k];
		}
	}
	printf("The max value is :%d \n",max);
	printf("The min value is :%d \n",min);
	sum = max + min;
	printf("The sum of max and min values is %d\n",sum);
	printf("occurence of elemnt 2 is: %d \n",mycount(arr4,item,size)); 
	myrev(arr5,maxarrsize);
	printf("reverse order:\n");
        for(ik=0;ik<maxarrsize;ik++)
        {
	       printf("%d\n",arr5[ik]);
        }
}
int mycount(int arr4[],int item,int size)
{
	int res =0;  /*int data type to count*/
	int i;       /*int data type for looping*/
	for(i=0;i<size;i++)
	{
		if(item == arr4[i])
		{
			res++;
		}
	}
	return res;
}



int myrev(int arr5[],int maxarrsize)
{
	int i;        /*int data type to specify index*/
	int temp;	/*int data type to store temporary value*/
	for(i=0;i<maxarrsize/2;i++)
	{
		temp =arr5[i];
		arr5[i] = arr5[maxarrsize-i-1];
		arr5[maxarrsize-i-1] = temp;
	}
}
