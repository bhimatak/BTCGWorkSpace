#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

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
			break;
		} 
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
				break;
			} 
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
