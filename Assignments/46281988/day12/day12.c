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
int arrelement(int arr[],int num,int size)
{
	int i;
	int accept=0;
	if(num<size)
	{
		printf("Enter the elements of array : ");
		for(i=0;i<num;i++)
		{
			scanf("%d",&arr[i]);
			accept++;
		}
	}
	else
	{
		printf("Max Size Exceeded\n");
		exit(EXIT_FAILURE);
	}
	printf("The accepted elements are: \n");
	for(i=0;i<num;i++)
	{
		printf("%d\n",arr[i]);
	}
	return accept;
}
int sumarr(int arr[],int num)
{
	int i;
	int max;
	int min;
	int sum;
	max=arr[0];
	min=arr[0];
	for(i=1;i<num;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
		sum=max+min;
		return sum;
}
int occarray(int arr[],int item,int size)
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
int main ()
{
	int arr[100];
	int size;
	int i;
	int summation;
	int count;
	int occurences;
	int number;
	int accepted;
	int item;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the number of elements into array:");
	scanf("%d",&number);
	accepted=arrelement(arr,number,size);
	printf("The no of elements accepted are :%d\n",accepted);
	printf("Enter the no of elements to display:");
	scanf("%d",&count);
	arrdisplay(arr,count);
	summation=sumarr(arr,number);
	printf("The sum of max and min element of array is :%d\n",summation);
	printf("Enter the item to count number of occurences\n");
	scanf("%d",&item);
	occurences=occarray(arr,item,number);
	printf("The number of occurences of %d is %d\n",item,occurences);
	printf("The array elements in reverse order :\n");
	myrev(arr,number);
	return 0;
}

