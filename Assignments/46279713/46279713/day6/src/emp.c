#include<stdio.h>
#include<stdlib.h>
struct emp{
	int eId;
	char ename[20];
	float esalary;
};
int main()
{
	struct emp e;
	int i;
	printf("Enter employee details\n");
	printf("emp id:\t");
	scanf("%d",&e.eId);
        printf("emp name:\t");
	scanf("%s",&e.ename);
      	printf("emp salary:\t");
	scanf("%f",&e.esalary);
	printf("\n\n");
	printf("enter 1 to print\n");
	scanf("%d" ,&i);
	if(i==1)
	{
		printf("Employee detailsis\n\n");
		printf("\n emp id:\t%d",e.eId);
		printf("\n emp name :\t%s",e.ename);
		printf("\n emp salary :\t%f",e.esalary);
	}
	else
		printf("Invalid status");
}


