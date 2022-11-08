#ifdef _HEADER_H
#define _HEADER_H

/*******************************************************************************
 * *                       HEADER FILES
 * *******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*******************************************************************************
 * *                      MACROS 
 * *******************************************************************************/
#define MAX 80
#define name_ret int
#define FAILURE 0
#define SUCCESS 1

/*******************************************************************************
 * *                      USER DEFINED TYPES
 * *******************************************************************************/
typedef struct
{
	char *first_name;
	char *second_name;
}person_name_et;

/*******************************************************************************
 * *                      FUCNTION PROTOTYPES
 * *******************************************************************************/
extern name_ret update_person(person_name_et *, char *, char *);
extern name_ret display_person(person_name_et *[], int);
extern name_ret free_person(person_name_et *[],int);

#endif

