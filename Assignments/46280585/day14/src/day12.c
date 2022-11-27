/****************************************************************************************
 * * FILE NAME : day12.c
 * *
 * * DESCRIPTION : This program finds the user defined datatypes
 * *
 * *REVISION HISTORY:
 * * DATE                      NAME               REFERENCE               REASON
 * -----------------------------------------------------------------------------------
 * * 10 NOV 2022          KELLA GOWTHAMI             NEW                 Initial CREATION
 * *
 * * Copyright@2022 ,Aricient Technologies(Holding) Ltd
 * *************************************************************************************/

/***************************************************************************************
 * *                         HEADER FILE
 ****************************************************************************************/
#include <common.h>
/*****************************************************************************************
 * * FUNCTION NAME  :    readperson
 * *
 * * DESCRIPTION   :  To read the members of the user
 * *
 * * RETURNS : SUCCESS or FAILURE
 * ****************************************************************************************/
struct person *ptr ;
struct person *ptr2 ;
struct person {
   int age;
   float weight;
   char name[MAX];
};
void readperson(int n)
{
    ptr = (struct person*) malloc(n * sizeof(struct person));
    
    if(ptr!=NULL)
    {

        for(int i = 0; i < n; ++i)
        {
            printf("Enter the name and age respectively: ");
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

void copy(int n)
{   
    printf("last person's record: \n");
    
    printf("Name : %s\tAge: %d\n", (ptr+(n-1))->name, (ptr+(n-1))->age);
}
void freememory()
{
    printf(" releasing allocated memory\n");
    free(ptr); 
    ptr = NULL;
    printf("all allocated memory released\n");
}
int main()
{
   int n=0;
   
   printf("Enter the number of persons: ");
   scanf("%d", &n);
   readperson(n);
   display(n);
   copy(n);
   freememory();
   return EXIT_SUCCESS;
}
