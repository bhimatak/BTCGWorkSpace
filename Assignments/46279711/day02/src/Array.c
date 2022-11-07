#include <stdio.h>
#include<stdlib.h>
void swap(int *a1, int *a2);
int main()
{
	int a[10];
	int i,n,temp;
	printf("How many elements ....\n");
	scanf("%d", &n);
        printf("Enter elements  \n");
	for( i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
        if(n/2 == 0)
	{
		for(i=0;i<n;i=i+2)
		{		
			swap(a+i,a+i+1);
		}
		printf("Done \n ");
		for(i=0;i<n;i++)
		{
			printf("a[%d] = %d\n", i, a[i]);
		}
	}
	else
	{
		//n = n - 1;
		for(i=0;i<n-1;i=i+2)
		{
			swap(a+i,a+i+1);
		}
		printf("Done \n ");
		for(i=0;i<n;i++)
		{
			printf("a[%d] = %d\n", i, a[i]);
		}
	
	}
}
void swap(int *a1, int *a2)
{
	int temp;
	temp = *a1;
	*a1 = *a2;
	*a2 = temp;
}

