/****************************************************************************
 * FILE NAME: assign1.c
 * DESERIPTION : array elements
 * DATE                 NAME          REFERENCE               REASON
 * --------------------------------------------------------------------------
 *  05 Nov 2022          deepika        CG material              new
 *  Copyright 2010     ,Aricent Technogies(Holdings) Ltd
 *  ***************************************************************************/
#include <common.h>
void array_Display(int array[],int count)
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
	  printf("Enter the elements of array: ");
          for(i=0;i<number;i++)
          {
	     scanf("%d",&array[i]);
	     accept++;
          }
       }
       else
       {
	   printf("The maximum size is exceeded\n");
	   exit(EXIT_FAILURE);
       }
       printf("The accepted array elements are:\n");
       for(i=0;i<number;i++)
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
       for(i=1;i<number;i++)
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
      int n;
      int occur=0;
      for(n=0;n<size;n++)
      {
	  if(array[n]==item)
	  {
	       occur++;
	  }
      }
      return occur;
}
void myrev(int array[],int size)
{
      int n;
      for(n=size-1;n>=0;n--)
      {
	 printf("%d\n",array[n]);
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
      printf("Enter size of array:");
      scanf("%d",&size);
      printf("Enter the number of elements to enter in array:");
      scanf("%d",&num);
      accepted=arrayElement(array,num,size);
      printf("The number of elements accepted are:%d\n",accepted);
      printf("Enter the number of elements to display:");
      scanf("%d",&count);
      array_Display(array,count);
      summation=sumArray(array,num);
      printf("The sum of maximum and minimum  element of array is:%d\n",summation);
      printf("Enter the item to count number of occurences\n");
      scanf("%d",&item);
      occurences=occurArray(array,item,num);
      printf("The number of occurences of %d is %d\n",item,occurences);
      printf("The array elements in reverse order:\n");
      myrev(array,num);
      return 0;
}


