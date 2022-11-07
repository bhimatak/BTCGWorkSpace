/*************************************************************************
 *  * *
 * * *  FILE NAME    : assign1.c
 * * *
 * *  DESCRIPTION  : Finds out the no.of elements in array,no.of elements accepted,sum of max and mini elements of array,count the no.of occurences,reverse of array elements
 * *
 * *  DATE            NAME          REFERENCE            REASON
 * *----------------------------------------------------------------------------
 * *  04 NOV 2022     Lavanya         New             Initial Creation.
 * *
 * * Copyright@2022, Aricent Technologies (Holdings) Ltd
 * *
 **************************************************************************/
/********           HEADER FILE           *************
 * *************************************************************************/
#include<assign1.h>

/***************************************************************************/
/******************************************************************************
 *  * *
 *  * *       Function Name   : Main
 *  * *       Description     : Operations of an integer arrays
 *  * *       Returns         : Success or Failure
 *  * *
 * *******************************************************************************/
void arrayDisplay (int array[], int count)

{
	int i;/*integer datatype*/
	for (i=0;i<count; i++)
	{
		printf("%d\n", array[i]);
	}
}
int arrayElement (int array[], int number, int size)
{
	int i;
	int accept=0;/*initializing variable to zero*/
       	if (number<size)
	{
		printf("Enter the elements of array:");
		/*for loop*/
	       	for (i=0;i<number;i++)
		{
			scanf("%d", &array[i]); 
			accept++;
		}
	}

	else
	{
		printf("The maximum size is exceeded\n");
	       	exit(EXIT_FAILURE);
	}
	printf("The accepted array elemets are: \n"); 
	for (i=0;i<number; i++)
	{
		printf("%d\n", array[i]);
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
	for(i=1;i<number;i++)
	{

		if (array[i]>max)

		{
			max=array[i];

		}

		if (array[i]<min)

		{

			min=array[i];

		}

	}

	sum=max+min;

	return sum;/*returns sum*/

}
int occurArray(int array[], int item, int size)
{
	int i;
	int occur=0;
	for (i=0;i<size;i++)
	{
		if (array[i]==item) 
		{
			occur++;
		}
	}
       	return occur;
}
void myrev(int array[], int size)
{
	int i;

	for (i=size-1;i>=0; i--)
	{
	       	printf("%d\n", array[i]);
	 }
}	

int main()
{

	int array[100];

	int size;

	int count;

	int i; int summation;

	int item;

	int occurences;

	int num;

	int accepted;

	printf("Enter size of array: "); 
	
	scanf("%d",&size);

	printf("Enter the number of elements to enter in array: "); 
	
	scanf("%d", &num);

	accepted=arrayElement (array, num, size);
       	printf("The number of elements accepted are: %d\n", accepted);

	printf("Enter the number of elements to display:");

	scanf("%d", &count); 

	arrayDisplay(array, count);
	summation=sumArray(array, num);

	printf("The sum of maximum and minimum element of array is: %d\n", summation); 
	
	printf("Enter the item to count number of occurences\n");

	scanf("%d", &item);

	occurences=occurArray(array,item,num); 
	
	printf("The number of occurences of %d is %d\n", item, occurences);

	printf("The array elements in reverse order: \n");
       	myrev(array, num);
	return 0;
}


