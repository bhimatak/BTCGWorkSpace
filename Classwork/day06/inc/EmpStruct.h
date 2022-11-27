#ifndef EMPSTRUCT_H
#define EMPSTRUCT_H

#include <common.h>

struct  EmpStruct
{
	int eID;
	int ePhone;
	char eName[BUFF];
	char eAddr[BUFF];
	char eGender;
};

void dispEmp(struct EmpStruct [], int);

void getEmpDetails(struct EmpStruct[], int);

int findEmpDetails(struct EmpStruct [], char *);

//int findEmpDetails(struct EmpStruct [], char *, int);

#endif
