/****************************************************************************************
* *
* * FILE NAME : day14_15.c
* *
* * DESCRIPTION : This program is to demonstrate the user defined datatypes
* *
* * Revision History:
* *
* * DATE          NAME               REFERENCE                         REASON
* *
* * 12-11-2022    SAAHERA               New                           Initial creation
* * Copyright 2022, Altran Group All Rights Reserved
* *
****************************************************************************************
*                                STANDARD HEADER FILES
*****************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/***********************************************************************************************
*                                 MACROS
***********************************************************************************************/
#define MAX 80
/****************************************************************************************
                                     STRUCT DATA TYPE
***********************************************************************************************/				     
struct person *ptr ;
struct person *ptr2 ;
struct person
{
   int age;/*initiaizing age to struct data type*/
      float weight;/*weight initializing*/
      char name[MAX];/*name with max macro*/
};
/*****************************************************************************************************
* *
* * FUNCTION NAME : readperson
* * 
* * DESCRIPTION : this function to read person structure ftom user to populate and return the same
* *
* * RETURN : SUCCESS or FAILURE
* */
void readperson(int n)
{
     ptr = (struct person*) malloc(n * sizeof(struct person));
     if(ptr!=NULL)
     {
         for(int i = 0; i < n; ++i)
         {
             printf("Enter first name and age respectively: ");
             scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);
         }
     }
 }
void display(int n)
{
   printf("Displaying Information:\n");
   for(int i = 0; i < n; ++i)
   {
        printf("Name: %s\tAge: %d\n", (ptr+i)->name, (ptr+i)->age);
   }												        
}
void copy()
{   
     int n;
     printf("copy last name: \n");
     struct person *p1 = (ptr);    
     printf("Name : %s\tAge: %d\n", (p1+n-1)->name, (p1+n-1)->age);
}
void freememory()
{
   printf(" releasing allocated memory\n");
   free(ptr); 
   ptr = NULL;
   printf("all allocated memory released\n");
 }
 /************************************************************************
 * *
 * * FUNCTION NAME: main
 * * 
 * * DESCRIPTION : it carry out al operation in it
 * *
 * * RETURN: SUCCESS or FAILURE
 * */
int main()
{
     int n=0;
     printf("Enter the number of persons: ");
     scanf("%d", &n);
     copy(n);
     readperson(n);
     display(n);
     copy();
     freememory();
     return EXIT_SUCCESS;
}

