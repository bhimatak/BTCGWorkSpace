#include <common.h>

void dispWelcome()
{
	//system("clear");
	printf("\n\t======================Welcome=====================\n");
	printf("\n\t============Employee Management System============\n");
	sleep(1);
}

int dispMainMenu()
{
	int ch;
	dispWelcome();
	printf("\n\tPress,");
	printf("\n\t1. Add Employees");
	printf("\n\t2. Update Employee");
	printf("\n\t3. Find Employee by ID");
	printf("\n\t4. Find Employee by Name");
	printf("\n\t5. Delete Employee");
	printf("\n\t6. Display All Employees");
	printf("\n\t7. Search and Display Employee");
	printf("\n\t8. Exit");
	printf("\n\tChoice: ");
	scanf("%d", &ch);

	return ch;
}

int dispUpdateMenu()
{
	int ch;
	printf("\n\tPress,");
	printf("\n\t1. Update Employee Name");
	printf("\n\t2. Update Employee Phone");
	printf("\n\t3. Update Employee Salary");
	printf("\n\t4. Exit");
	printf("\n\tChoice: ");
	scanf("%d", &ch);

	return ch;
}
