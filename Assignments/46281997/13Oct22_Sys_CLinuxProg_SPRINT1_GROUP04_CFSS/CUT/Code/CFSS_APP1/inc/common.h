/****************************************************************************************************
 * FILE NAME      : common.h
 *
 * DESCRIPTION    : This file contains header files, macros definitons and the function prototypes 
 *                required for call forwarding services
 *                
 *
 * Revision History:
 *
 * DATE         NAME                REFERENCE          REASON
 ********************************************************************************************************
 * 24-11-22    GROUP 04                New           Changes Committed
 *********************************************************************************************************
 * Copyright 2022, Altran Group All Rights Reserved
 *
 *******************************************************************************************************/

/***************************************************************************
*                           MACROS DEFINITION
*****************************************************************************/
#ifndef COMMON_H
#define COMMON_H

/***************************************************************************
*                           HEADER FILES
*****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>


/***************************************************************************
*                             STRUCTURES
*****************************************************************************/
typedef struct userPersonalDetails
{
	int _id;
	int _phNo;
	char _uName[30];
	char _gender;
	int regFlag;
	struct userPersonalDetails *next;

}UPD;

typedef struct loginDetails
{
	int _id;
	char _uName[30];
	char _passwd[30];
	struct loginDetails *next;
}LD;
typedef struct callForwarding
{
	int _id;
	int regFlag;
	int cfsNumber;
	int cfsActive;
	char status[20];
	struct callForwarding *next;
}CFSS;

/***************************************************************************
*                           FUNCTION PROTOTYPE
*****************************************************************************/

UPD *signUp(UPD *, int*);
LD *signInDetails(LD*, int);

int  signInUser(LD *, int *);

UPD * loadUPD();
LD * loadLD();
CFSS * loadCFSS();
CFSS *initCFSS(CFSS *, int);

int tokenizeUPD(UPD *, char*);
int tokenizeLD(LD *, char*);
int tokenizeCFSS(CFSS *, char*);

int writeUPD(UPD *);
int writeLD(LD *);
int writeCFSS(CFSS *);

int readUPD(UPD *);
int readLD(LD *);
int readCFSS(CFSS *);

void removeLeading(char *, char*);
void removeTrailing(char *);

void AdminLogin();
int UpdateDetails(UPD *);
void cfsActivation(CFSS *, UPD *, int);
void cfsDeactivation(CFSS *);

void makeCall(UPD *, CFSS *, int );

#endif /*end of ifndef COMMON_H*/
