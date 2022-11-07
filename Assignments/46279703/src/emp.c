#include<stdio.h>
#include<string.h>
struct Employee 
{
	int eID;
	int ePhone;
	char eName[50];
	char eAddr[200];
	char eGender;
};
int main()
{ 
	struct Employee Emp1;
	Emp1.eID=1123;
	Emp1.ePhone=1234567;
	strcpy(Emp1.eName,"Yamini");
	strcpy(Emp1.eAddr,"Vijayawada");
	Emp1.eGender ='F';
	printf("%d",Emp1.eID);
	printf("\n%d",Emp1.ePhone);
	printf("\n%s",Emp1.eName);
	printf("\n%s",Emp1.eAddr);
	printf("\n%c\n",Emp1.eGender);
	return 0;
}


