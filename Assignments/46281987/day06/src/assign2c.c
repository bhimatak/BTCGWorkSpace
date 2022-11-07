/***********************************************************
 ** FILENAME : assign2c.c
 **
 ** DESCRIPTION: This file contents the details of employee
 **
 ** Revision History :
 ** DATE                NAME            REFERENCE          REASON
 ** --------------------------------------------------------------------
 ** 02 NOV 2022         ANNAYASHA       DAY06       EMPLOYEE DETAILS
 **
 **
 ** Copyright 2010, Aricent Technologies (Holdings) Ltd
 **
 ************************************************************/
#include <common.h>

/**************************************************************************************
 ** FUNCTION NAME: read
 ** DESCRIPTION: this function read and store first name, last name, gender, age, salary
 **
 ** RETURNS: EXIT_SUCCESS
 **************************************************************************************/
void read()
{
	char first_name[10];
	char last_name[10];
	char gender[10];
	int age;
	float salary;

	printf("Enter first name: ");
	scanf("%s",first_name);
	printf("Enter last name: ");
	scanf("%s",last_name);
	printf("Enter gender: ");
	scanf("%s",gender);
	printf("Enter age: ");
	scanf("%d",&age);
	printf("Enter salary: ");
	scanf("%f",&salary);
}

/*****************************************************
 ** FUNCTION NAME: display
 ** DESCRIPTION: display all the read values
 **
 ** RETURNS: SUCCESS
 ******************************************************/
void display()
{
	 char first_name[10];
	 char last_name[10];
	 char gender[10];
	 int age;
	 float salary;
 	 printf("\nName: %s %s.\n",first_name,last_name);
 	 printf("Gender: %s\n",gender);
 	 printf("Age: %d\n",age);
 	 printf("Salary: %.2f\n",salary);
}


/*****************************************************
 ** FUNCTION NAME: perform
 ** DESCRIPTION: perform read function requirements
 **
 ** RETURNS: The function returns age
 *******************************************************/
int perform1()
{
	int age;
	if(age<0)
	{
		printf("invalid age");
	}
	
	return age;
}


/*****************************************************
 ** FUNCTION NAME: main
 ** DESCRIPTION: main method of program
 **
 ** RETURNS: Success
 *******************************************************/
int main()
{
	read();
	display();
	perform1();

	return 0;
}



	
