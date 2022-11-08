#include "common.h"

struct Employee
{
	int eID;
	int ePhone;
	char eName[50];
	char eAddr[200];
	char eGender;
}Emp1;

int main()
{
	Emp1.eID = 101;
	Emp1.ePhone = 997899238;
	strcpy(Emp1.eName,"Charishma");
	strcpy(Emp1.eAddr,"AP");
	Emp1.eGender = 'F';

	printf("\n%d", Emp1.eID);
	printf("\n%d", Emp1.ePhone);
	printf("\n%s", Emp1.eName);
	printf("\n%s", Emp1.eAddr);
	printf("\n%d", Emp1.eGender);

	return 0;
}


