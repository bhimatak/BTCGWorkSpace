/*************************************************************************
 * 
 * FILE NAME    : qSort.c
 *
 * DESCRIPTION  : Using quick sort to sort a list of strings stored in an array
 * 
 * DATE      		NAME   		 REFERENCE          REASON
 *
 * 13-NOV-2022  	ANNAYASHA    	DAY17			Quick Sort     
 * 
 * Copyright 2010, Aricent Technologies (Holdings) Ltd
 * 
**************************************************************************/

/*************************************************************************
 *                                HEADER FILES
 *************************************************************************/

#include <common.h>


void quickSortMain(char items[][20], int count);
void quickSort(char items[][20], int left, int right);

/******************************************************************************
*
*       Function Name   : quickSortMain
*       Description     : sort a list list of string
*       Returns         : Success 
*
*******************************************************************************/
void quickSortMain(char items[][20], int count)
{
	quickSort(items, 0, count-1);
}

/******************************************************************************
*
*       Function Name   : quickSort
*       Description     : implement quick sort method
*       Returns         : Success
*
*******************************************************************************/
void quickSort(char items[][20], int left, int right)
{
	int i, j;
	char *x;
	char temp[20];

	i = left;
	j = right;
	x = items[(left+right)/2];

	do
	{
		while((strcmp(items[i],x) < 0) && (i < right))
		{
			i++;
		}
		while((strcmp(items[j],x) > 0) && (j > left))
		{
			j--;
		}
		if(i <= j)
		{
			strcpy(temp, items[i]);
			strcpy(items[i], items[j]);
			strcpy(items[j], temp);
			i++;
			j--;
		}
	}
	while(i <= j);

	if(left < j)
	{
		quickSort(items, left, j);
	}
	if(i < right)
	{
		quickSort(items, i, right);
	}
}

/******************************************************************************
*
*       Function Name   : main
*       Description     : this is the main method of the program
*       Returns         : Success 
*
*******************************************************************************/
int main()
{
	int i;
	int n;
	char str[][20] = {"this","is","my","house"};
	printf("Enter size(n): ");
	scanf("%d",&n);
	quickSortMain(str, n);
		 
	for(i=0; i<n; i++)
	{
		printf("%s\n", str[i]);
	}
	return 0;
}
