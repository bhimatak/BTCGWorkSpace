#include <stdio.h>/* Header file */
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
	

