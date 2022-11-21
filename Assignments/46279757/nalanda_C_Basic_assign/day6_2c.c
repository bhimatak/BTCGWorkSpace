/**************************************************************************************
 * *
 * * FILE NAME : day6_2c.c
 * *
 * *DESCRIPTION: program to demonstrate the functions to read and store of the data 
 * *		using structures
 * *
 * *Revision History
 * *DATE        NAME             REFERENCE         REASON
 * *
 * *18-11-2022  vasanthi          New              Initial Creation
 * *
 * *Copyright 2022, Altran Group All Rights Reserved
 * *********************************************************************************
 * *				STANDARD HEADER FILES
 * **********************************************************************************/
#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
//varibles declaration
char name[30]; 
char gender;
int age; 
float salary;
//structure employee data
struct EmpData
{
	char Ename [30]; /*name initalization*/
	char Egender;/*gender initialization*/
	int Eage; 
	float Esalary;//age and sal intialization


}emp;
/************************************************************************************
 * *
 * * FUNCTION NAME:get_detail()
 * *
 * * DESCRIPTION  :This function gets the details of the employee
 * *
 * * RETURNS      : SUCCESS or FAILURE
 * *********************************************************************************/
static void get_detail()
{
	printf("Enter your Name:"); fgets (name, 30, stdin);//reads empname
	printf("\nSpecify your gender: "); 
	scanf("%c", &gender);//reads emp gender 
	printf("\nEnter your age:"); 
	scanf("%d", &age);//reads emp age
	printf("\nEnter your salary: "); 
	scanf("%f", &salary);//reads emp salary
}
/**************************************************************************************
 * *
 * * FUNCTION NAME :display_detail
 * *
 * * DESCRIPTION   : This function displays the employee details
 * *
 * * RETURNS       : SUCCESS or FAILURE
 * ************************************************************************************/
static int display_detail()
{
	printf("\n Name: %s", name); //prints employee name
	printf("\n Age: %c", gender);//prints emp gender
	if (age< 01)//if emp gives <1 
		printf("\n Enter appropriate age!");//prints enter appropriate age
	else
		printf("\n Age: %d", age);
	printf("\n Monthly salary: %.2f", salary);//prints monthly sal in float
}
/****************************************************************************************
 * *
 * * FUNCTION NAME:struct_detail
 * *
 * * DESCRIPTION : Tjhis function trakes the employee data in the form of structure
 * *
 * * RETURNS     : SUCCESS or FAILURE
 * *************************************************************************************/
static void struct_detail()
{
	strcpy (emp. Ename, name); //copies emp ename to name,gender,age,salary
	emp. Egender = gender; 
	emp. Eage = age; 
	emp.Esalary = salary;
}
/***************************************************************************************
 * *
 * * FUNCTION NAME :struct_display
 * *
 * *DESCRIPTION   : This function displays the employee details in the form of structure
 * *
 * *RETURNS       :SUCCESS or FAILURE
 * ***************************************************************************************/
static void struct_display()
{
	printf("\n Data in the structure"); 
	printf("\n Name: %s", emp. Ename); 
	printf("\n Age: %c", emp. Egender);
	if (emp. Eage < 0)
		printf("\n Enter appropriate age!");
	else
		printf("\n Age: %d", emp. Eage);
	printf("\n Monthly salary: %.2f", emp.Esalary);
}
/*****************************************************************************************
 * *
 * * FUNCTION NAME : main
 * *
 * * DESCRIPTION   : This function gets all the operations define in it
 * *
 * * RETURNS       : SUCCESS or FAILURE
 * ******************************************************************************************/
int main()
{
	get_detail();//get employee details


	display_detail();//display employee details method



	struct_detail();//employee details in the form of structure


	struct_display();//displays employee data in the form of struture



	return EXIT_SUCCESS;//returns success
}













