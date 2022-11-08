/* FILE  NAME : prog02.c
 *
 * DESCRIPTION : display first and last names and count and display the occurences
 *
 * REVISION HISTORY:
 *
 * DATE                 NAME                     REFERENCE               REASON
 * --------------------------------------------------------------------------------
 * 05 Nov  2022       Charishma                   SP101                New code
 *
 * **********************************************************************************/

#include "common.h"
void arrayDisplay(int array[], int count)
{
	int i;
	for(i = 0; i < count;i++)
	{
		printf("%d\n", array[i]);
	}
}
int arrayElement(int array[], int number, int size)
{
	int i;
	int accept = 0;
	if(number < size)
	{
		printf("Enter the elements of array");
		for(i=0;i < number; i++)
		{
			scanf("%d", &array[i]);
			accept++;
		}

	}
	else
	{
		printf("The maximum size is exceeded\n");
		
	}
	printf("The accepted array elements are: \n");
	for(i=0;i<number;i++)
	{
		printf("%d\n",array[i]);
	}
	return accept;
}
int sumArray(int array[], int number)
{
	int max;
	int min;
	int i;
	int sum;
	max = array[0];
	min = array[0];
	for(i=1; i < number; i++)
	{
		if(array[i] > max)
		{
			max = array[i];
		}
		if(array[i] < min)
		{
			min = array[i];
		}
	}
		sum= max +min;
		return sum;
}
int occurArray(int array[], int item, int size)
{
	int i;
	int occur = 0;
	for(i=0;i < size;i++)
	{
		if(array[i] == item)
		{
			occur++;
		}
	
	}
	return occur;
}
void myrev(int array[], int size)
{
	int i;
	for(i = size-1; i>=0; i--)
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
	int sumation;
	int item;
	int occurences;
	int num;
	int accepted;
	printf("Enter size of array:");
	scanf("%d",&size);
	printf("Enter the numnber of elements to enter in array:");
	scanf("%d",&num);
	accepted=arrayElement(array,num,size);
	printf("The number of elements accepted are:%d\n",accepted);
	printf("Enter the number of elements to display:");
	scanf("%d",&count);
	arrayDisplay(array,count);
	sumation=sumArray(array,num);
	printf("The sum of maximum and minimum element of array is :%d\n",sumation);
	printf("Enter the item to count number of occurences\n");
	scanf("%d",&item);
	occurences=occurArray(array,item,num);
	printf("The number of occurences of %d is %d\n",item,occurences);
	printf("The array elements in reverse order :\n");
	myrev(array,num);
	return 0;
}



