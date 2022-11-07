/************************************************************************
 * FILENAME :DAY12.C
 * DESCRAPTION :This file defines the MAX SIZEof an array
 * REVISION History :
 *  DATE                NAME                   REFERENCE              REASON
 *  -------------------------------------------------------------------------------------------------------------
 *  5 OCT 2022          SIRI                   NEW                        To print reverese swaping occurences
 * *********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 50

/**********************************************************************************************
 * FUNCTION NAME:
 * DESCRIPTION :This function display the total num of elements swaping before an after and number of occurenses
 * RETURN SUCCESS
 * *************************************************************************
 * *****************************************/

int arr[MAX_SIZE] = {0};
int totalElements = 0;
extern void display(int arr[MAX_SIZE], int number);
extern int inputElements(int arr[MAX_SIZE], int elements, int max);
extern int sumOf_Max_and_MinEle(int arr[MAX_SIZE]);
extern int myCount(int arr[MAX_SIZE], int item, int totalElements);
extern void myrev(int arr[MAX_SIZE], int totalElements);
extern void revstr(char *str1);
int inputElements(int arr[MAX_SIZE], int elements, int max)
{
   if(elements <= max)
     {
	 int i = 0;for(i = 0; i < elements; i++)
	 {
	    printf("\nEnter the element arr[%d] : ",i);/*prints the content*/
	    scanf("%d", &arr[i]);/*scans the variable*/
	 }
	 return i;/*returns the value*/
						        
     }
    else
    {
	 printf("\nWarning ! Limit of Array Exceeded");/*prints the content*/
					            
	 return EXIT_FAILURE;
    }
}
void display(int arr[MAX_SIZE], int number)
{
    int i = 0;for(i = 0; i < number; i++)
     {
	 printf("\n%d", arr[i]);/* prints the content*/
					        
    }
}
int sumOf_Max_and_MinEle(int arr[MAX_SIZE])
{
   int minimum = arr[0],
  maximum = arr[0],
  sum = 0,
  i = 0;
 for(i = 0; i < totalElements; i++)
 {
   if(arr[i] < minimum)
  minimum = arr[i];
  if(arr[i] > maximum)
   {
      maximum = arr[i];
												        }
   }
			    
	 sum = minimum + maximum;
         return sum;
}
int myCount(int arr[MAX_SIZE], int item, int totalElements)
{
   int count = 0,
   i = 0;
  for(i = 0; i < totalElements; i++)
   {
	 if(arr[i] == item)
	   {
		 count++;
										            
	   }
					            
  }
 return count;
}
void myrev(int arr[MAX_SIZE], int totalElements)
{
   int temp = 0,
  start = 0,
  end  = totalElements - 1,
   i = 0;
   printf("\nElements Before Reversing : \n");/*prints the content*/
   for(i = 0; i < totalElements; i++)
     {
	 printf("%d \t", arr[i]);/*prints the content*/
     }
		       
   printf("\nElements after Reversing : \n");/*prints the content*/
			   
    for(i=totalElements-1; i >= 0; i--)
     {
						       
	 printf("%d \t",arr[i]);/*prints the content*/
							   
     }
}
void revstr(char *str1)  
{  
	      
  int i, len, temp;  
  len = strlen(str1);   
 for (i = 0; i < len/2; i++)  
  {  
	temp = str1[i];  
        str1[i] = str1[len - i - 1];  
         str1[len - i - 1] = temp;  
  }  
}  
int main()
{
   int number = 0,
   sum = 0,
   item = 0,
  count = 0,
  elements = 0;
  char str[MAX_SIZE];
		   
 do
 {
   printf("\nNo. of Elements you want to Store : ");/*prints the content*/
  scanf("%d", &elements);totalElements = inputElements(arr, elements, MAX_SIZE);/*scan the variable*/
 }
  while(totalElements == EXIT_FAILURE);
  printf("\nNo. of Elements Stored are: %d ",totalElements);/*prints the content*/
  printf("\nEnter No. of elements to print : ");/*prints the content*/
  scanf("%d", &number);/* scan the variable*/
  display(arr, number);
  sumOf_Max_and_MinEle(arr);
  printf("\nSum Of Min and Max Elements is : %d", sumOf_Max_and_MinEle(arr));/*prints the content*/
  printf("\nEnter element to count occurences : ");/*prints the content*/
  scanf("%d", &item);count = myCount(arr, item, totalElements);/*scan the variable*/
  printf("No of Occurences of %d is : %d\n", item, count);/*prints the content*/
  myrev(arr, totalElements);
  printf ("\nEnter the your name: ");  /*prints the content*/
 scanf("%s", str);/*sacns the variable*/
 printf (" \n Before reversing the string: %s \n", str);/*prints the content*/  
 revstr(str);  
 printf (" After reversing the string: %s", str);  /*prints the content*/
 return EXIT_SUCCESS;
 }


