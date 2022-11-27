/*********************************
 * *
 * * FILE NAME   :day17.c
 * *
 * * DESCRIPTION : program to demontrate the quick sort using strings
 * *
 * *Revision History:
 * * DATE 		NAME   		REFERNCE 		REASON
 * * 
 * * 12-11-2022        GOWTHAMI          new                     Employee referal
 * *
 * * @Copyright 2022 All Rights Reserved
 * *
 * *******************************
 * *	STANDARD HEADER FILES
 * * *******************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*********************************
 * *
 * * FUNCTION NAME : swap
 * *
 * * DESCRIPTION   : It swaps the strings in sorting order
 * *
 * * RETURNS       : SUCCESS or FAILURE
 * ********************************/
void swap(char* x,char* y)
{
	char t;
	t=*x;
	*x=*y;
	*y=t;
}
int partition(char a[],int first, int last)
{
	int i,j;//initializing 2 variables/
	char x;//character intialization/
	x=a[last];//character with last index/
	i=first-1;//first index/
	for(j=first;j<last;j++)//traverse through the array/
	{
		if(a[j]<=x)//swapping condition/
		{
			i=i+1;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[last]);//swap of 1st and last index/
	return i+1;//increment of strings/
}
/********************************
 * *
 * * FUNCTION NAME : quicksort
 * *
 * * DESCRIPTION   : This describes the quicksort analysis
 * *
 * * RETURNS       : SUCCESS or FAILURE
 * * ********************************/

void quicksort(char a[],int first,int last)
{
	int pi;//initializing pivot/
	if(first<last)//first index value <ladt index value/
	{
		pi=partition(a,first,last);//assigning to pivot/
		quicksort(a,first,pi-1);//condition check/
		quicksort(a,pi+1,last);
	}
}
/*******************************
 * *
 * * FUNCTION NAME : main
 * *
 * * DESCRIPTION   : This function carry out the operations which was mentioned here
 * *
 * * RETURNS       : SUCCESS or FAILURE
 * * *******************************/
int main()
{
	char a[20][100];//initializing char array with 2D/
	int i,first=0,last,size;//initializing with first,last values/
	printf("Enter the number of string you want to store: ");//aska the user no. of strings to be stored/
	scanf("%d",&size);//prints the strings/
	printf("Enter %d strings",size);//enter string size/
	for(i=0;i<=size;i++)//traverse the strings/
	{
		fgets(a[i],100,stdin);//strings read from the keyboard/
		last=strlen(a[i])-2;//stlength compare/
		quicksort(a[i],first,last);//applying quick sort algorithm/
	}
	printf("\nsorted strings are:");//after sorting strings/
	for(i=0;i<5;i++)//loop traversing/
		printf("%s",a[i]);//prints string//
	return 0;
}
