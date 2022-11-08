/*FILE NAME    : name_det_main.c
*
* *  DESCRIPTION  : Program for storing first name and second name for
* *		  a set of persons.
* *
* *  DATE      NAME    REFERENCE          REASON
* *
* *  1-JUN-10  Sibu    PRISM-3 C FG       Initial Creation.
* *
* *  Copyright 2010, Aricent Technologies (Holdings) Ltd
* *
* **************************************************************************/
/*****************************************************************************
 * *                       HEADER FILES
 * ******************************************************************************/
#include "name_det_header.h"

/*****************************************************************************
 * *                       LOCAL MACROS
 * ******************************************************************************/
#define SIZE 10

/******************************************************************************
 * *
 * *       Function Name   : main
 * *       Description     : Accepts a first name and second name of a max of 10
 * *			  persons and stores it in an array of structure.
 * *       Returns         : Success or Failure
 * *
 * *******************************************************************************/
int main()
{
	char f_name[MAX], s_name[MAX],input[MAX];
	person_name_et *ptr_person[SIZE];
	name_ret ret_val = SUCCESS;
	char *fgets_ret = NULL;
	int person_index = 0;

	memset(f_name,0,MAX);
	memset(s_name,0,MAX);
	        
	while(person_index <= SIZE)
	{
		printf("Do you want to continue. 'quit' to terminate\n");
		fgets_ret = fgets(input,MAX,stdin);
		if(NULL == fgets_ret)
		{
			printf("fgets failed\n");
			ret_val = FAILURE;
			break;								    } 
		if(strncmp(input,"quit",4) == 0)
		{
			ret_val = SUCCESS;
			break;
		}
		else
		{
			printf("Enter the first name - maximum 31 characters\n");
			fgets_ret = fgets(f_name, MAX, stdin);
			if(NULL == fgets_ret)
			{
				printf("fgets failed\n");
				ret_val = FAILURE;
				break;												        } 

			printf("Enter the second name - maximum 31 characters\n");
			fgets_ret = fgets(s_name, MAX, stdin);
			if(NULL == fgets_ret)
			{
				printf("fgets failed\n");
				ret_val = FAILURE;
				break;
			} 
			ret_val = update_person(ptr_person[person_index],f_name,s_name);
			if(FAILURE == ret_val)
			{
				printf("update_person -failed\n");
				break;
			}
		}
		person_index += 1;
	} /* End of while */
	if(FAILURE == ret_val)
	{
		printf("Updating Details - Failure\n");
		printf("Displaying current output\n");
	}
	else
	{
		printf("Updating Details - Success\n");
		printf("Displaying current output\n");
	}

	ret_val = display_person(ptr_person,person_index);
	if(FAILURE == ret_val)
	{
		printf("Display failed\n");
		free_person(ptr_person,person_index);
	} 

	return 0;
}

