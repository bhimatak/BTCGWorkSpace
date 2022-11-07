/*********************************************************
 * * FUNCTION NAME  : assign.c
 * *
 * * DESCRIPTION    : This function defines the "MAX SIZE"
 * *
 * *Return          : This function return the maximum size of number.
 * **************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void arrdisplay(int arr[],int count)
{
	int i;
	for(i=0;i<count;i++)
	{
		printf("%d\n",arr[i]);
	}
}
int arrelement(int arr[],int num, int size)
{
	int i;
	int temp=0;
	if(num<size)
	{
		printf("Enter array elements:");
		for(i=0;i<num;i++)
		{
			scanf("%d",&arr[i]);
			temp++;
		}
	}
	else
	{
		printf("The max size is exceeded\n");
		exit(EXIT_FAILURE);
	}
	printf("The array elements are:\n");
	for(i=0;i<num;i++)
	{
		printf("%d\n",arr[i]);
	}
	return temp;
}

int addarr(int arr[],int num)
{
	int m1;
	int m2;
	int i;
	int add;
	m1=arr[0];
	m2=arr[0];
	for(i=1;i<num;i++)
	{
		if(arr[i]>m1)
		{
			m1=arr[i];
		}
		if(arr[i]<m2)
		{
			m2=arr[i];
		}
	}
	add=m1+m2;
	return add;
}
int occarr(int arr[],int item, int size)
{
	int i;
	int occ=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]==item)
		{
			occ++;
		}
	}
	return occ;
}
void myrev(int arr[],int size)
{
	int i;
	for(i=size-1;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
}

int main()
{
	int arr[100];
	int size;
	int count;
	int i;
	int addition;
	int item;
	int occurence;
	int num;
	int accepted;
	printf("Enter size of array:");
	scanf("%d",&size);
	printf("Enter number of elements to enter in array:");
	scanf("%d",&num);
	accepted=arrelement(arr,num,size);
	printf("The number of elements accepted are:%d\n",accepted);
	printf("Enter the number of elements to display:");
	scanf("%d",&count);
	arrdisplay(arr,count);
	addition=addarr(arr,num);
	printf("The addition of m1 and m2 elements of array is:%d\n",addition);
	printf("Enter the item to count number of ocurence\n");
	scanf("%d",&item);
	occurence=occarr(arr,item,num);
	printf("The number of occurence of %dnis %d\n",item,occurence);
	printf("The array elements in reverse order:\n");
	myrev(arr,num);
	return 0;
}

