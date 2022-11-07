/************************************************************************************************************
 * * FILE NAME : arr12.c
 * * 
 * * DESCRIPTION : Find out the Maximum number ,Minimum number and reverse order
 * *
 * *REVISION HISTORY :
 * *
 * * DATE                                     NAME                       REFERENCE            REASON           
 * ------------------------------------------------------------------------------------------------------------
 *  5 NOV 2022                             YAMINI TALLA                     NEW          Initial Creation
 *  *
 *  * Copyright@2022 , Aricent Technologies (Holdings) Ltd
 *  *
 *  ************************************************************************************************************/

/***************************************************************************************************************
 * *                                   HEADER FILE
 * *************************************************************************************************************/
#include<common.h>
/****************************************************************************************************************
 * * FUNCTION NAME  :   main
 * *
 * *  DESCRIPTION  :    Description Maximum,Minimum number, reverse order 
 * *
 * *  RETURN   :  SUccess or FAILURE
 * ***************************************************************************************************************/ 
void arrayDisplay(int array[],int count)
{
	int i;                 /*for looping variable*/
	for(i=0;i<count;i++)     /*display the array*/
	{
		printf("%d\n",array[i]);
	}
}
int arrayElement(int arr[], int number,int size)
{
	int i;                /*for looping variable*/
	int a=0;
	if(number<size)      /*checking for sise*/
	{
		printf("Enter element of array:");
		for(i=0;i<number;i++)         
		{
			scanf("%d",&arr[i]);
			a++;
		}
	}
	else
	{
		printf("The Maximum size\n");            /*Maximum size*/ 
		exit(EXIT_FAILURE);
	}
	printf("The Accepted array eleents :\n");
	for(i=0;i<number;i++)
	{
		printf("%d\n",arr[i]);
	}
	return a;
}


int sumArray(int arr[],int number)         /*sumarray function is used*/ 
{
	int maximum;                     
	int minimum;
	int i;
	int sum;
	maximum=arr[0];
	minimum=arr[0];
	for(i=1;i<number;i++)            /*maximum or minimum using looping function*/
	{
		if(arr[i]>maximum)
		{
			maximum=arr[i];
		}
		if(arr[i]<minimum)
		{
			minimum=arr[i];
		}
	}
	sum=maximum+minimum;
	return sum;
}

int occurArray(int array[],int temp,int size)             /*function name occurArray*/
{
	int i;
	int occur=0;
	for(i=0;i<size;i++)
	{
		if(array[i]==temp)
		{
			occur++;
		}
	}
	return occur;
}

void myrev(int arr[],int size)
{
	int i;
	for(i=size-1;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
}

int main()               /*main function*/
{
	int occurences;
	int temp;
	int arr[100];
	int size;
	int count;
	int i;
	int summation;
	int num;
	int accepted;
	printf("size of array :");
	scanf("%d",&size);

	printf("Number of array :");
	scanf("%d",&num);

	accepted=arrayElement(arr,num,size);
	printf("Number of elements accecpted :");
	scanf("%d",&accepted);

	printf("Number of elements to dispaly:\n");
	scanf("%d",&count);
	arrayDisplay(arr,count);

	summation=sumArray(arr,num);
	printf("sum of MAX and MIN elements:\n");
	scanf("%d",&summation);

	printf("count number of occurences\n");
	scanf("%d",&temp);
	occurences=occurArray(arr,temp,num);
	printf("The occurence of %d is %d",temp,occurences);
	printf("The reverse oreder :\n");
	myrev(arr,num);
	return 0;
}


