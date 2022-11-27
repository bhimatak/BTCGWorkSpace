/*************************
 * * FILE NAME : day15.c
 * *
 * * DESCRIPTION : This program is udes to print the age and name of a person.
 * *
 * * REVISION HISTORY :
 * * DATE	           NAME		REFERENCE	REASON
 * -----------------------------------------------------------------
 * * 12-11-2022		GOWTHAMI	ABC@1234	Employee Reference
 * *
 * *Copyright @2022 ,Employee referencelmtd.
 * *********************/

#include <common.h>
/*********************
 * *FUNCTION NAME : readperson
 * *
 * * DESCRIPTION : To read the members of the user
 * *
 * * RETURN : SUCCESS or FAILURE
 * **********************/
#define MAX 80//it gives the size 
struct person *ptr ;//ptr is pointing to the person
struct person *ptr2 ;//ptr is pointing towards the person
struct person 
{
	int age;
	float weight;
	char name[MAX];
};
void readperson(int n)
{
	ptr=(struct person*)malloc(n *sizeof(struct person));

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
