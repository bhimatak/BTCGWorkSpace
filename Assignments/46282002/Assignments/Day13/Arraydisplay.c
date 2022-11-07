/*Day12 Assignment
 * FILE NAME:Arraydisplay.c
 * DESCRIPTION: display elements,summation of max and min elements summation,reverse array,and occurence of 1 item 
 * *****/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
int sum(int array[SIZE],int sz);
int mycount(int array[SIZE],int sz);
int  myrev(int myarray[SIZE],int sz);
int  main()
{
	int size;
	int arr[SIZE];
	int i;
	printf("Enter size:");
	scanf("%d",&size);
	printf("Enter elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Display array elements:");
	for(i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
	sum(arr,size);
	mycount(arr,size);
	myrev(arr,size);
	return 0;
}
int sum(int array[SIZE],int sz)
{
	int min=array[0];
	int max=array[0];
	int summation=0;
	int i;
	for(i=0;i<sz;i++)
	{
		if(array[i]>max)
			max=array[i];
	}
	for(i=0;i<sz;i++)
	{
		if(array[i]<min)
			min=array[i];

	}
	summation=max+min;
	printf("the summation of array is %d", summation);
	return 0;
}
 int mycount(int array[SIZE],int sz)
{
	int item;
	int i;
	int j;
	int ct=0;
	printf("\nEnter a item:");
	scanf("%d",&item);
	for(i=0;i<sz;i++)
	{
		if(array[i]==item)
			ct++;
	}
	printf("%d is %d times\n",item,ct);
}
int  myrev(int myarray[SIZE],int sz)
{
	int i;
        printf("reverse array is\n:");
	for(i=sz-1;i>=0;i--)
	{
		printf("%d\t",myarray[i]);
	}
}

