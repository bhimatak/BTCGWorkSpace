#include<stdio.h>
#include<stdlib.h>
int bubble_sort(int a[],int size);
int main()
{
	  
	  int n,i,j,temp;
	  int array[100];
	  printf("Enter the size of Array : ");
	  scanf("%d",&n);
	  int a[n];
	  for(i=0;i<n;i++)
	  {
		  printf("Enter %d element : ",i+1);
		  scanf("%d",&array[i]);
	  }
	  bubble_sort(array,n);
	  int display();
	  {
	  printf("After array sorted list:\n");
	  for(i=0;i<n;i++)
	  {
		  printf("%d\n",array[i]);
	  }
		  return 0;
}
}
int bubble_sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;++i)
	{
		for(j=0;j<(n-i-1);j++)
			if(a[j]>a[j+1])
		       	{
			  temp=a[j];
			  a[j]=a[j+1];
			  a[j+1]=temp;
			}
														                
	}
}


