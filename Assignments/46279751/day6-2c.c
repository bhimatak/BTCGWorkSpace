/***************************************************************************
 * * FILE NAME : day15.c
 * *
 * * DESCRIPTION : This program is udes to print the age and name of a person.
 * *
 * * REVISION HISTORY :
 * * DATE	NAME		REFERENCE	REASON
 * * -----------------------------------------------------------------
 * * 12-11-2022		RUJITHA		ABC@1234	Employee Reference
 * *
 * *Copyright @2022 ,Employee referencelmtd.
 * ***************************************************************/
#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
/***************************************************************
 * *FUNCTION NAME : main
 * *
 * * DESCRIPTION : To display the details
 * *
 * * RETURN : SUCCESS or FAILURE
 * **************************************************************/
char name[30];//char array size
char gender;
int age;
float salary;
struct EmpData
{
	char Ename [30];
	char Egender;
	int Eage;
	float Esalary;
} emp;//The struct variable is displayed here
static void get_detail()//this function is used to get the details of the user
{
	printf("Enter your Name:");
	fgets (name, 30, stdin);
	
	printf("\nSpecify your gender: "); 
	scanf("%c", &gender);
	
	printf("\nEnter your age:");
	scanf("%d", &age);
	printf("\nEnter your salary: "); 
	scanf("%f", &salary);
}
static int display_detail()//This function is used to display the details of the user
{
	printf("\n Name: %s", name);
	printf("\n Age: %c", gender);

	if (age < 0)
	{
		printf("\n Enter appropriate age!");
	}
	 else
	 {
		 printf("\n Age: %d", age);
	 }
	 printf("\n Monthly salary: %.2f", salary);
}
static void struct_detail()
{
	strcpy (emp.Ename, name); 
	emp.Egender = gender;
	emp.Eage=age; 
	emp.Esalary = salary;

}
static void struct_display()
{
	printf("\n Data in the structure"); 
	printf("\n Name: %s", emp.Ename); 
	printf("\n Age: %c", emp.Egender);
}
int main()
{
	get_detail();

	display_detail();

	struct_detail();

	struct_display();

	return 0;
}




