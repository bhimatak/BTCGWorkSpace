#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int i,j;
	printf("no of elements to be entered:");
	scanf("%d",&n);
	int a[n];
	int temp;
	printf("enter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
		
