/**************************************************************
 * *
 * *
 * *FILE NAME:day12.c
 * *
 * *DESCRIPTION:Print array in reversed order,sum of array elements and count the number of occurence of a number
 * *
 * *REVISED HISTORY:
 * *-------------------------------------------------------------------------------------------------------------------------------------------------------------
 * *DATE             NAME                          REFERENCE                   REASON
 * *6 OCT2022      Jasmeet Kaur                   CAPG1234                printing array in reversed order and counting the number of occurence of a given element
 * *Copyright @2022 Altran Group All Rights Reserved
 * *-------------------------------------------------------------------------------------------------------------------------------------------------------------
 * *
 * */
#include "common.h"
void arrayDisplay(int array[],int count)
{
	int i;
	for(i=0;i<count;i++)
	{
		printf("%d\n",array[i]);
	}
}

int arrayElement(int array[],int number,int size)
{
	int i;
	int accept=0;
	if(number<size)
	{
		printf("Enter the array elements:");
		for(i=0;i<number;i++)
		{
			scanf("%d",&array[i]);
			accept++;
		}
	}
	else
	{
        	printf("The maximum size is exceeded\n");
                
        }
	printf("The accepted array elements are:\n");
	for(int i=0;i<number;i++)
	{
		printf("%d\n",array[i]);
	}
    return accept;	
}

int sumArray(int array[],int number)
{
	int max;
	int min;
	int i;
	int sum;
	max=array[0];
	min=array[0];
	for(i=0;i<number;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
		if(array[i]<min)
		{
			min=array[i];
		}
	}
	sum=max+min;
	return sum;
}

int occurArray(int array[],int item,int size)
{
	int i;
	int occur=0;
	for(i=0;i<size;i++)
		{
			if(array[i]==item)
			{
				occur++;
			}
		}
	return occur;
}

void myrev(int array[],int size)
{
	int i;
	for(i=size-1;i>=0;i--)
	{
		printf("%d\n",array[i]);
	}
}

int main()
{
	int array[100];
	int size;
	int count;
	int i;
	int summation;
	int item;
	int occurences;
	int num;
	int accepted;
	printf("Enter size of array");
	scanf("%d",&size);
	printf("Enter the number of elements to enter in the array:");
	scanf("%d",&num);
	accepted=arrayElement(array,num,size);
	printf("The number of elements accepted are:%d\n",accepted);
	printf("Enter the number of elements to be displayed");
	scanf("%d",&count);
	arrayDisplay(array,count);
	summation=(sumArray(array,num));
	printf("The sum of msx and min is%d\n",summation);
        printf("Enter the item to count number of occurences\n");
        scanf("%d",&item);
        occurences=occurArray(array,item,num);
        printf("The number of occurenced of %d is %d\n",item,occurences);
        printf("The array elements in reverse order :\n");
        myrev(array,num);
        return 0;
	
	}	
			





