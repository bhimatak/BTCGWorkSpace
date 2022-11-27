#include <stdio.h>/*Header file*/
#include <stdlib.h>/* Header file */
#include <string.h>/* Header file */
#define MAX 80/* Macro */
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
	

