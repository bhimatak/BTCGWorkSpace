#include<stdio.h>
struct employee
{
	char name[20];
	int empId;
	float salary;
	int phone number;
	char address[30];
	char gender[10];
};
int main()
{
	struct employee emp;
	printf("\n enter the details :\n");
	printf("name :");
	fgets(emp.name);
	printf("Id :");
	scanf("%d", &emp.empId);
	printf("Salary :");
	scanf("%f", &emp.empsalary);
	printf("phone number :");
	scanf("%d", &emp.empnumber);
	printf("address :");
	scanf("%s", &emp.empaddress);
	printf("gender :");
	scanf("%s", &emp.empgender);

	printf("\n enter details is:");
	printf("\n name: %s" , emp.name);
	printf("\n Id: %d" , emp.Id);
	printf("\n phone number: %f" , emp.salary);
	printf("\n address: %s" , emp.address);
	printf("\n gender: %s" , emp.gender);
	return 0;
}
