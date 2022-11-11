#include<stdio.h>
#include<string.h>
struct Employee 
{
	int eID;
	long int ePhone;
	char eName[20];
	char eAddr[20];
	char eGender;
}emp1;
int main()
{
	emp1.eID=1424;
	emp1.ePhone=9123456789;
	strcpy(emp1.eName,"Lavanya");
	strcpy(emp1.eAddr,"Hyderabad");
	emp1.eGender='F';
	printf("%d", emp1.eID);
	printf("\n%ld",emp1.ePhone);
	printf("\n%s",emp1.eName);
	printf("\n%s",emp1.eAddr);
	printf("\n%d",emp1.eGender);
	return 0;
}

