/*******************************************************************************************************************
 ** FILENAME        : assign2c.c
 ** DESCRIPTION     : This file contains functions to take employee details from user display t
                      hem in the given formatted way
 ** REVISION HISTORY:
 ** DATE              NAME                       REFERENCE                       REASON
 ** -----------------------------------------------------------------------------------------------------------------
 **  03 Nov 2022    POOJA NATH                   NEW                          NEW CODE TO PERFORM GIVEN OPERATION
 **
 ********************************************************************************************************************/

/*header files.*/
#include<common.h>
#define MAX 30


char name[MAX];
char gender;
int age;
float salary;
struct EmpData
{
	char Ename[MAX];
	char Egender;
	int  Eage;
	float Esalary;
} emp;


/*******************************************************************
 ** FUNCTION NAME : get_detail()
 ** DESCRIPTION   : This function takes input from the user
 ** RETURNS       : SUCCESS incase of failure ERROR
 **********************************************************************/
static void get_detail()
{
	printf("Enter your Name:\n");
	fgets(name, MAX, stdin);	   
	printf("Specify your gender:\n");
	scanf("%c", &gender);	    
	printf("Enter your age:\n");
	scanf("%d", &age);	    
	printf("Enter your salary:\n");
	scanf("%f", &salary);	       
}

/*******************************************************************
 ** FUNCTION NAME : display_detail()
 ** DESCRIPTION   : This function displays all the details
 ** RETURNS       : Displays details incase of failure ERROR
 **********************************************************************/
static int display_detail()
{
	printf("\nName: %s", name);
	printf("\nGender %c", gender);	    
	if (age < 0)
	{
		printf("\nEnter appropriate age!");
	}
	else
	{
		printf("\nAge: %d", age);
	}
	printf("\nMonthly salary: %.2f", salary);
	return 0;
}

/*******************************************************************
 ** FUNCTION NAME : struct_detail()
 ** DESCRIPTION   : This function read and store details but 
                    in a structure
 ** RETURNS       : Store details incase of failure ERROR
 *********************************************************************/
static void struct_detail()
{
	strcpy(emp.Ename, name);
	emp.Egender = gender;
	emp.Eage = age;
	emp.Esalary = salary;
}

/*******************************************************************
 ** FUNCTION NAME : struct_display()
 ** DESCRIPTION   : This function to display employee details 
                    but read from input structure
 ** RETURNS       : display details incase of failure ERROR
 *********************************************************************/
static void struct_display()
{
	printf("\nData in the structure:\n");
	printf("\nName: %s", emp.Ename);
	printf("\nGender: %c",emp.Egender);	    
	if (emp.Eage < 0)
	{
		printf("\nEnter appropriate age!");
	}	
	else
	{
		printf("\nAge: %d", emp.Eage);
	}	    
	printf("\nMonthly salary: %.2f\n", emp.Esalary);
}

/*******************************************************************
 ** FUNCTION NAME : main
 ** DESCRIPTION   : This function contains other defined function
 *                  for the employee details
 ** RETURNS       : SUCCESS incase of failure ERROR
 *********************************************************************/
int main()
{
	get_detail();       
	display_detail();   
	struct_detail();    
	struct_display();    
	return EXIT_SUCCESS;
}



