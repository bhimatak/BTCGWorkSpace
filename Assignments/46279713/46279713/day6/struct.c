#include <stdio.h>

struct Employee
{
	int id;
	int age;
        int salary;
	char name[30];
	char desgn[20];
};

int main()
{
	struct Employee e;
	printf("Enter the id of the Employee: ");
	scanf("%d", &e.id);
	printf("Enter the age of the Employee: ");
	scanf("%d", &e.age);
	printf("Enter the name of the Employee: ");
	scanf("%s", &e.name);
	printf("Enter the designation of the Employee: ");
	scanf("%s" , &e.desgn);
	printf("Enter the salary of the Employee: ");
	scanf("%d", &e.salary);
	printf("\nEmployee Details:\n");
	printf("Employee Id: %d\n", e.id);
	printf("Employee Name: %s\n", e.name);
	printf("Employee age: %d\n", e.age);
	printf("Employee designation: %s\n", e.desgn);
	printf("Employee salary: %d\n", e.salary);
	return 0;
}
