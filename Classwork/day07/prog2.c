/*
Demo to represent nesting of structure
*/

#include <stdio.h>
#include <string.h>


typedef struct EmpDetials
{
	int eID;
	char eName[20];

	struct PersonalDetails{
		char adno[20];
		char dob[12];
		int phno;
		char gender;
	}PD;   //PD is the name of the variable of type struct PersonalDetails
	
}EMP;





int main()
{
	EMP E1,E2;
	
	E1.eID = 1001;


	strcpy(E1.eName, "Bhima");
	strcpy(E1.PD.adno,"120120120120120");
	E1.PD.phno = 998800;
	E1.PD.gender = 'M';
	strcpy(E1.PD.dob,"12-12-12");

	E2.eID = 1002;
	strcpy(E2.eName, "Shankar");
	strcpy(E2.PD.adno,"121120120120121");
	E2.PD.phno = 998801;
	E2.PD.gender = 'M';
	strcpy(E2.PD.dob,"11-11-11");
	

	printf("\nDetails\nName: %s\nID: %d", E1.eName, E1.eID);
	printf("\nDOB: %s",E1.PD.dob);
	printf("\nAdNo: %s", E1.PD.adno);
	printf("\nGender: %c", E1.PD.gender);
	printf("\nPhNo: %d", E1.PD.phno);


	printf("\nDetails\nName: %s\nID: %d", E2.eName, E2.eID);
	printf("\nDOB: %s",E2.PD.dob);
	printf("\nAdNo: %s", E2.PD.adno);
	printf("\nGender: %c", E2.PD.gender);
	printf("\nPhNo: %d", E2.PD.phno);

	printf("\n\n");

	return 0;
}