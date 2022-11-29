/************************************************************************************************
 * * FILE NAME : assign2c.c
 * *   
 * * DESCRIPTION : This file contains function to showing Employee details
 * *
 * * REVISION HISTORY:
 * * DATE              NAME                       REFERENCE                       REASON
 * * --------------------------------------------------------------------------------------------------------------
 * * 2 Nov 2022    Nadigatla Parimala Rani                NEW                         New Code To display employee details
 * ***************************************************************************************************/
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
/************************************************************************************************
 * * FUNCTION NAME : get_detail()
 * *   
 * * DESCRIPTION : This function takes employee informations as user input
 * *
 * * RETURNS : store inputs and in case of failure ERROR
 * * **************************************************************************************************/
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
/************************************************************************************************
 * * FUNCTION NAME : display_detail()
 * *   
 * * DESCRIPTION : This function displays name gender age and salary of employee
 * *
 * * RETURNS : employee details and in case of failure ERROR
 * * **************************************************************************************************/
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
/************************************************************************************************
 * * FUNCTION NAME : struct_detail()
 * *   
 * * DESCRIPTION : This function storing inputs in a structure
 * *
 * * RETURNS : none
 * * **************************************************************************************************/
static void struct_detail()
{
	strcpy(emp.Ename, name);
	emp.Egender = gender;
	emp.Eage = age;
	emp.Esalary = salary;
}
/************************************************************************************************
 * * FUNCTION NAME : struct_display()
 * *   
 * * DESCRIPTION : This function read employee details from input structure
 * *
 * * RETURNS : employee details and in case of failure ERROR
 * * **************************************************************************************************/
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
/************************************************************************************************
 * * FUNCTION NAME : main()
 * *   
 * * DESCRIPTION : This function calls other defined functions to give required output
 * *
 * * RETURNS : EXIT_SUCCESS and in case of failure ERROR
 * * **************************************************************************************************/
int main()
{
	get_detail();       

	display_detail();   

	struct_detail();    

	struct_display();   
	 
	return EXIT_SUCCESS;
}