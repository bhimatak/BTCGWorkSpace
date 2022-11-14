/************************************************************************************************
 * *
 * * FILE NAME    :assign5b.c

* *
* * DESCRIPTION  : This program to demonstrate the user defined datatypes
* *
* * Revision History:
* * DATE           NAME          REFERENCE              REASON
* *
* * 12-11-2022    Lavanya        new                   Intial creation
* * Copyright 2022, Altran Group All Rights Reserved
* *
* *********************************************************************************************
* *					STANDARD HEADER FILES
* ********************************************************************************************/
#include<assign5b.h>
/*********************************************************************************************
* * 					STRUCT DATA TYPE
* *******************************************************************************************/
struct person *ptr;
struct person *ptr2 ;
struct person 
{
int age;/*intializing age to stuct type*/
float weight;/*weight intializing*/
char name[MAX];/*name with max macro*/
};
/*******************************************************************************************
* *
* * FUNCTION NAME : readperson
* *
* * DESCRIPTION   : This function to read person structure members from user to populate and
* *			return the same
* *
* * RETURNS       : SUCCESS or FAILURE
* *******************************************************************************************/
void readperson(int n)
{
ptr = (struct person*) malloc(n * sizeof(struct person));/*pointer allocating to struct person*/
if(ptr!=NULL)/*pointer is not null*/											
{						
for(int i = 0; i < n; ++i)/*travrse the loop to get name and age*/
{
printf("Enter the name and age respectively: ");/*prints name and age*/
scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);/*pointing to name and age*/
}
}
}
/****************************************************************************************************
* *
* * FUNCTION NAME :display
* *
* * DESCRIPTION   : This function traverse through each node and display its content
* *
* * RETURNS       : SUCCESS or FAILURE
* *************************************************************************************************/
void display(int n)
{
printf("Displaying Information:\n");/*displays information of person*/
for(int i = 0; i < n; ++i)/*traverse through each node*/
{
printf("Name: %s\tAge: %d\n", (ptr+i)->name, (ptr+i)->age);/*prints name and age*/
}
}
/**************************************************************************************************
* *
* * FUNCTION NAME : copy
* *
* * DESCRIPTION   : This function to get a copy of last person record and return the same
* *
* * RETURNS       : SUCCESS or FAILURE
* ***********************************************************************************************/
void copy(int n)
{
printf("last person's record: \n");/*prints last person record*/
printf("Name : %s\tAge: %d\n", (ptr+(n-1))->name, (ptr+(n-1))->age);/*last person name and age*/
}
/***************************************************************************************************
* *
* * FUNCTION NAME : freememory
* *
* * DESCRIPTION   : This function to free allocated memory
* *
* * RETURNS       : SUCCESS or FAILURE
* ***************************************************************************************************/
void freememory()
{
printf(" releasing allocated memory\n");/*relese of allocated memory*/
free(ptr); /*free up pointer*/
ptr = NULL;
printf("all allocated memory released\n");/*freeing up memory*/
}
/**************************************************************************************************
* *
* * FUNCTION NAME : main
* * 
* * DESCRIPTION   :It carry out all the operations mentioned in it
* *
* * RETURNS       : SUCCESS or FAILURE
* ****************************************************************************************************/
int main()
{
int n=0;
printf("Enter the number of persons: ");/*asks the user no. of persons to store*/
scanf("%d", &n);/*reads no. of persons*/
readperson(n);/*perfoms the readperson function*/
display(n);/*display persons information*/
copy(n);/*copy of last record information*/
freememory();/*free up memory*/
return EXIT_SUCCESS;
}

