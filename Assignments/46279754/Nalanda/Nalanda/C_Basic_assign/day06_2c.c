#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
char name[30]; 
char gender;
int age;
float salary;
struct EmpData
{
	char Ename [30];
	char Egender; 
	int Eage;
	float Esalary;
}emp;
static void get_detail()
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

static int display_detail()
{
	printf("\n Name: %s", name);
	printf("\n Age: %c", gender);
	if (age < 01 )

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
	strcpy (emp. Ename, name);
	emp. Egender = gender; 
	emp. Eage = age;
	emp.Esalary = salary;
}
static void struct_display()
{
	printf("\n Data in the structure");
	printf("\n Name: %s", emp. Ename);
	printf("\n Age: %c", emp. Egender);

	if (emp. Eage < 0) 
	{
		printf("\n Enter appropriate age!");
	}
	else
	{
		printf("\n Age: %d", emp. Eage);
	}

	printf("\n Monthly salary: %.2f", emp.Esalary);
}
int main()
{
	get_detail();
        display_detail();
	struct_detail();
	struct_display();
	return EXIT_SUCCESS;
}
