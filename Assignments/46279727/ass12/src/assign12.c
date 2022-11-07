/*******************************************************************************************************
 *  
 *  FILE NAME    :  assign09.c
 *  DESCRIPTION  :  defines few operations on an integer array
 *   
 *  DATE              NAME           REFERENCE              REASON
 *       
 *  06-nov-2022       Triveni       CG Material           2D char array initialization
 *         
 *  Copyright 2010, Arcient Technologies (Holdings)Ltd
 *           
 *************************************************************************************************/

 /**********************************************************************************************
  *                                HEADER INFORMATION
  *************************************************************************************************/
#include<common.h>
void subarray(int arr[], int ns)
{
	for(int x=0;x<ns;x++)
        printf("%d ",arr[x]);
        printf("\n");
}
int arrayelements(int arr[],int ns,int maxarrsize)
{
	if(ns>maxarrsize)
        return 0;
        printf("Enter array Elements: ");    
        for(int x=0;x<ns;x++)
       	{
        scanf("%d",&arr[x]);
    	}
        printf("Array elements are : ");
        for(int x=0;x<ns;x++)
       	{
        printf("%d ",arr[x]);
	}
        return 1;
}
int sumofmaxandmin(int arr[],int n)
{
	int max=arr[0];
	int min=arr[0];
        for(int x=1;x<n;x++) 
       	{
        if(arr[x]>max)
	max=arr[x];
	if(arr[x]<min)
        min=arr[x];
        }
        return max+min;
}
int mycount(int arr[], int item, int maxarrsize)
{
	int count=0;
	for(int x=0;x<maxarrsize;x++)
       	{
        if(arr[x]==item)
	count=count+1;
	}
        return count;
}
void myrev(int myarray[],int maxarrsize) 
{
	int temp;
	for(int x=0;x<maxarrsize/2;x++)
       	{
        temp=myarray[x];
        myarray[x]=myarray[maxarrsize-x-1];
        myarray[maxarrsize-x-1]=temp;
 }
        printf("Array elements After reversal: ");
        for(int x=0;x<maxarrsize;x++) 
	{
        printf("%d ",myarray[x]);
	}
        printf("\n");
}
int main()
{
	int choice,arr[1000],maxarrsize,ns,item;
        while(1)
       	{
        printf("Enter ur choice : 1.Display an array/or a subset of the array 2.Accept array elemnents from user 3.sum of the maximum and minimum element 4.number of occurences of a particular element 5.Reverse the contents of the array 6.exit :  ");
	scanf("%d",&choice);
	switch(choice)
       	{
case 1:
	printf("Enter maximum array size: ");
        scanf("%d",&maxarrsize);
        printf("Enter array Elements: ");
        for(int x=0;x<maxarrsize;x++)
       	{
        scanf("%d",&arr[x]);
        }
        printf("Enter number of Elements to Display: ");
        scanf("%d",&ns);
        subarray(arr,ns);
        break;
case 2:
        printf("Enter maximum array size: ");
	scanf("%d",&maxarrsize);
        printf("Enter number of Elements to Accept: ");
       	scanf("%d",&ns);
	if(arrayelements(arr,ns,maxarrsize)==0)
        printf("maximum size of the array should not exceed.");
        printf("\n");
	break;
case 3:
        printf("Enter maximum array size: ");
	scanf("%d",&maxarrsize);
	printf("Enter array Elements: ");
	for(int x=0;x<maxarrsize;x++)
       	{
        scanf("%d",&arr[x]);
	}
        printf("the sum of the maximum and minimum element of the array : %d\n",sumofmaxandmin(arr,maxarrsize));
        break;
case 4:
	printf("Enter maximum array size: ");
        scanf("%d",&maxarrsize);
        printf("Enter array Elements: ");
        for(int x=0;x<maxarrsize;x++)
       	{
        scanf("%d",&arr[x]);
	}	
	printf("Enter item : ");
	scanf("%d",&item);
	printf("Count for the number of occurences of a particular element in an array : %d\n",mycount(arr,item,maxarrsize));
        break;
case 5:
	printf("Enter maximum array size: ");
        scanf("%d",&maxarrsize);
	printf("Enter array Elements: ");
	for(int x=0;x<maxarrsize;x++)
       	{
        scanf("%d",&arr[x]);
        }
	myrev(arr,maxarrsize);
        break;
case 6:
        exit(0);
	default:
	printf("Please Enter valid choice");
            }
	}
        return 0;
}

