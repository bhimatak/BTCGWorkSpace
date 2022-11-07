#include "swap.h"
int main()
 {
         int i,t;
         printf("Enter number of elements in array : ");
         scanf("%d",&n);
         int arr[n];
         int n = sizeof(arr) / sizeof(arr[0]);

         int *arr = arrange01(arr, n);
         for (i=0;i<n;i++)
         {
              printf("%d",arr[i]);
         }

         return 0;
 }
