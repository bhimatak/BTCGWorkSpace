/********************************************************************************
 ** FILE NAME: swap.c
 **
 ** DESCRIPTION :the file contains to swap alternative elements in a list
 **
 ** Revision History : 
 **
 ** DATE            NAME          REFERENCE            REASON
 ** ----------------------------------------------------------------------------
 ** 02 OCT 2022     SRIVANI         NEW                To swap alternative elements **
 **
*********************************************************************************/
#include<stdio.h>
#include<stdlib.h>
int main()
{
        int i,n,t;
        printf("Enter number of elements in array :");
        scanf("%d",&n);
        int arr[n];
        printf("Elements before swapping :");
        for(i=0;i<n;i++)
                scanf("%d",&arr[i]);
        for(i=0;i<n-1;i=i+2)
        {
                t=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=t;
        }
        printf("Elements are swapping :");
        for(i=0;i<n;i++)
                printf("%d",arr[i]);
        return 0;
}
