#include "swap.h"

int *arrange01(int arr[],int n)
{
       for(i=0;i<n-1;i++)
       {
          for(int j=i+1;j<n;j++)
          {
             if(arr[i]>arr[j])
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
          }
      }
      return arr[n];
}
