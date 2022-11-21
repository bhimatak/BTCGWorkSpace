/****************************************************************************************************
* *
* * FILE NAME : day_17.c
* * 
* * DESCRIPTION : Program to demonstrate quick sort using strings
* *
* * Revision History :
* * DATE            NAME               REFERENCE                  REASON
* * 12-11-22         SAAHERA              new                       Assignments
* *
* * Copyright 2022, Altran Group Al Rights Reserved
* *
* ***************************************************************************************
* *                        STANDARD HEADER FILES
* ****************************************************************************************/
#include<stdio.h>
#include<string.h>
/*****************************************************************************************
* *
* * FUNCTION NAME : swap
* *
* * DESCRIPTION :  It swaps the string in sorting order
* *
* * RETURNS : SUCCESS or FAILURE
* */
void swap(char* x,char* y)
{
     char t; /*character initialization*/
     t=*x; // swap condition//
     *x=*y;
     *y=t;	
 }
 /*********************************************************************************************
 * * 
 * * FUNCTION NAME : partition
 * *
 * * DESCRIPTION : Thi function describes the string with pivot
 * *
 * * RETURN : SUCCESS or FAILURE
 ***/
int partition(char a[],int first, int last)
{
     int i,j; /* initializing 2 variables*/
     char x;/* character initialization*/
     x=a[last];/*character with last index*/
     i=first-1;/*first index*/
     for(j=first;j<last;j++)/*traversing through the array*/
     {
          if(a[j]<=x)/*swapping condition*/
          {
	        i=i+1;
		swap(&a[i],&a[j]); 
	  }
     }
     swap(&a[i+1],&a[last]);/*swap of 1st and last index*/
     return i+1;/* increment of string*/
 }
 /***********************************************************************************************************
 * *
 * * FUNCTION NAME : quicksort
 * *
 * * DESCRIPTION : This describes quicksort analysis
 * *
 * * RETURN : SUCCESS or FAILURE
 **/
void quicksort(char a[],int first,int last)
{
      int pi;/*initializing pivot*/
      if(first<last)/* first index val <last index val*/
      {
           pi=partition(a,first,last);/*assiging to pivot*/
	   quicksort(a,first,pi-1);/*condition check*/
	   quicksort(a,pi+1,last);
       }
}
/*********************************************************************************
* *
* * FUNCTION NAME : main
* *
* * DESCRIPTION : This function carry out the operations which was mentioned here
* *
* * RETURNS : SUCCESS or FAILURE
* */
void main()
{
       char a[20][100];/*initializing char array with 2d*/
       int n,i,first=0,last,size;/*initializing with first last values*/
       printf("Enter the number of string you want to store: ");
       scanf("%d",&size);
       printf("Enter %d strings",size);
       for(i=0;i<=size;i++)/*traversing string*/
       {
          fgets(a[i],100,stdin);/*string read from keyboard*/												        
	  last=strlen(a[i])-2;/*strlength compare*/
	  quicksort(a[i],first,last);
       }
       printf("\nsorted strings are:");
       for(i=0;i<5;i++)   
       printf("%s",a[i]);		
}
