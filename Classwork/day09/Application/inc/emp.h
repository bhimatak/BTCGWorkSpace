#ifndef EMP_H
#define EMP_H
#include <common.h>

typedef struct empDetails
{
	int eID;
	int ePhone;
	float eSalary;
	char eActive;  // '1' -> Active, '0'-> inactive
	char eName[BUFF];
	char eGender;

}EMP;

int addEmpDetails(EMP *);
void dispEmpAll(EMP *, int, int);
int updateEmpName(EMP *, char *);
int updateEmpPhone(EMP *, int);
int updateEmpSalary(EMP *, int);
int findEmpID(EMP *, int, int);
int findEmpName(EMP *, int, char *);
int delEmpID(EMP *, int, int);
void dispEmpIDs(EMP *, int);



#endif
