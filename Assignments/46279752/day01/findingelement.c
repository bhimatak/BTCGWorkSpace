#include<stdio.h>
#include<stdlib.h>
int findingelement(int arr[],int n)
{
	int i;
	int j;
	for(i=0;i<n;i++)
	{
		int flag=0;
		for(int j=0;j<i;j++)
		{
			if(arr[j]>=arr[i])
			{
				flag=1;
				break;
			}
		}
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<=arr[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			return arr[i];
		}
	}
	return 0;
}
int main()
{
	int n;
	int i;
	printf("enter size of array: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter elements of array: ");
		scanf("%d",&arr[i]);
	}
	printf("%d\n",findingelement(arr,n));
	return 0;
}

