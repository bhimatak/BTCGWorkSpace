#include<stdio.h>
struct EMPLOYEE
{
	int ID , Age, Salary;
	char Name[50];
}
EMP[100];
void main()
{
	int  i ,n;
	printf("Enter the no of Employees\n");
	scanf("%d", &n);
	printf("Enter Employee information as ID, Name, Age, Salary\n");
	for(i=0;i<n;i++)
	{
		scanf("%d %s %d %d", &Emp[i].ID, Emp[i].Name, &Emp[i].Age, &Emp[i].Salary);
	}
	printf("\nEMP_NAME\tEMP_NAME\tEMP_AGE\t\tEMP_SAL\N");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t%s\t\t%d\t\t%d\n",Emp[i].ID, EMP[i].Name,EMP[i].Age,EMP[i].Salary);
	}
}

