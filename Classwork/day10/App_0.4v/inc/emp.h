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

int addEmpDetails(EMP *, int);
void dispEmpAll(EMP *, int, int);
int updateEmpName(EMP *, char *);
int updateEmpPhone(EMP *, int);
int updateEmpSalary(EMP *, float);
int findEmpID(EMP *, int, int);
int findEmpName(EMP *, int, char *);
int delEmpID(EMP *);
void dispEmpIDs(EMP *, int);

int writeToFile(EMP *, char *);
int readDBAll(EMP *, char *, int );
int countRecs(char *, int *);
int updateEmpRecs(EMP *, char *, int);
int loadData(EMP *, int*, char *);
int writeData(EMP *, char *, int );
float getMaxSal(EMP *, int);

#endif
