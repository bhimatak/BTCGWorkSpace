/*
Demo to represent nesting of structure
*/

#include <stdio.h>
#include <string.h>

/*
struct EmpDetials
{
	int eID;
	char eName[20];

	struct PersonalDetails{
		char adNo[20];
		char dob[12];
		int phno;
		char Gender;
	};
	
};
*/

struct EmpDetails
{
	int eID;
	char eName[20];
	
};

typedef struct EmpDetails EMP;
/*
typedef unsigned long long ULL;
typedef int INTEGER;
*/


typedef struct EmpDetails1
{
	int eID;
	char eName[20];
	
}EMP1;


int main()
{
	EMP E[10];
	/*ULL i;
	INTEGER iv;
	*/
	EMP1 e1;
	
	E[0].eID = 101;
	strcpy(E[0].eName, "Bhima");

	printf("\nDetails\nName: %s\nID: %d", E[0].eName, E[0].eID);

	printf("\n\n");

	return 0;
}