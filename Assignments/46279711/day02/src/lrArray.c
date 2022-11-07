#include<stdio.h>
#include<stdlib.h>
int Findelement(int arr[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		int flag=0;
		for(j=0;j<i;j++)
		{
			if(arr[j]>=arr[i])
			{
				flag=1;
				break;
			}
		}
		for(j=j+1;j<n;j++)
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
	return -1 ;
}
int main()
{
	int n;
	int i;
	printf("Enter size of array:  \n");
	scanf("%d",&n);
	int arr[n];
	printf("enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The output %d\n", Findelement(arr,n));
	return 0;
}

