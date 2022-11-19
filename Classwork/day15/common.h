#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct personalDetails
{
	int _id;
	char _name[30];
	char _gender;

}PD;

typedef struct loginDetails
{
	int _id;
	char _uName[30];
	char _passwd[30];
}LD;


PD * signUp(PD *);
int singIn(LD *);
int readPD(PD *);
int writePD(PD *);
int readLD(LD *);
int writeLD(LD *);

void dispPD(PD *);
int tokenizePD(PD *, char *);


#endif