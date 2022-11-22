#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 30
char nm[MAX];
char gen;
int age;
float salary;
struct EmpData
{
	char Ename[MAX];
	char Egen;
	int Eage;
	float Esalary;
}emp;
static void get_details()
{
	printf("Enter your name:");
	fgets(nm,MAX,stdin);
	printf("Enter a gender:");
	scanf("%c",&gen);
	printf("Enter salary:");
	scanf("%f",&salary);
}
static int display_detail()
{
	printf("\nName: %s",nm);
	printf("Gender: %c",gen);
	if(age<0)
		printf("\nEnter appropiate age");
	else
		printf("\nAge:%d",age);
	printf("\nMonthly salary :%.2f",salary);
	return 0;
}
static void struct_detail()
{
	strcpy(emp.Ename,nm);
	emp.Egen=gen;
	emp.Eage=age;
	emp.Esalary=salary;
}
static void struct_display()
{
	printf("\nData in the structure\n");
	printf("\nName:%s",emp.Ename);
	printf("\nGender:%c",emp.Egen);
	if(emp.Eage <0)
		printf("\nEnter appropiate age!");
	else
		printf("\nAge :%d",emp.Eage);
	printf("\nMonthly salary :%.2f\n",emp.Esalary);
}
int main()
{
	get_details();
	display_detail();
	struct_detail();
	struct_display();
	return EXIT_SUCCESS;
}

