/********************************************************************************************************
 * * FILENAME : assign5.c
 * * DESCRIPTION : This file contains the below mentioned functions
 * * REVISION HISTORY:
 * * DATE              NAME               REFERENCE                      REASON
 * * ----------------------------------------------------------------------------------------------------
 * * 05 Nov 2022    ABHILIPSA SWAIN          NEW                        NEW CODE TO PERFORM OPERATIONS
 * * 
 * ******************************************************************************************************/

#include "common.h"
#include <ctype.h>
extern int cmd_validate(char* word);
extern int free_allocated_memory(char** server_name, int count);
extern char* concatenate_servernames(char* server_name[], int count);
extern char* extract_servername(char* word);

/*******************************************************************************************************
 * * FUNCTION NAME : cmd_validate()
 * * DESCRIPTION : This function validates.
 * * RETURNS : SUCCESS and in case of failure ERROR
 * *****************************************************************************************************/

int cmd_validate(char* word)
{
	char *temp_var = NULL,
	     *token = NULL;
	int portNo,
	    i=0,
	    allAlphabets = 1;
	temp_var = (char*)calloc(strlen(word) + 1, sizeof(char));
	if(temp_var == NULL)
	{
		printf("Memory is not allocated");
		return EXIT_FAILURE;
	}
	strcpy(temp_var, word);
	token = strtok(temp_var, ":");
	while(i < strlen(token))
	{
		if(isalpha(token[i]) == 0)
		{
			allAlphabets = 0;
		}
		i++;
	}
	if(allAlphabets)
	{
		token = strtok(NULL, ":");
		if(token != NULL)
		{
			portNo = atoi(token);
			if(portNo >= 0 && portNo <= 1023)
			{
				free(temp_var);
				temp_var = NULL;
				return EXIT_SUCCESS;
			}
		}
	}
	free(temp_var);
	temp_var = NULL;
	return EXIT_FAILURE;
}

/*******************************************************************************************
 * * FUNCTION NAME : extract_servername()
 * * DESCRIPTION : It extracts the server name
 * * RETURNS : SUCCESS and in case of failure ERROR
 * ****************************************************************************************/

char* extract_servername(char* word)
{
	char* temp = NULL;
	char* token = NULL;
	int portNo;
	char* servername = NULL;
	temp = (char*)calloc(strlen(word)+1, sizeof(char));
	strcpy(temp, word);
	token = strtok(temp, ":");
	servername = (char*)calloc((strlen(token)+1), sizeof(char));
	strcpy(servername, token);
	printf("\nServer Name : %s", servername);
	token = strtok(NULL, ":");
	portNo = atoi(token);
	printf("\nPort Number : %d\n", portNo);
	free(temp);
	temp = NULL;
	return servername;
}

/********************************************************************************************
 * * FUNCTION NAME : concatenate_servernames()
 * * DESCRIPTION : It concatenates servernames
 * * RETURNS : SUCCESS and in case of failure ERROR
 * ******************************************************************************************/

char* concatenate_servernames(char* server_name[], int count)
{
	char* result = NULL;
	int sizeof_result = 0,i;
	for(i = 0;i < count; i++)
	{
		sizeof_result += strlen(server_name[i]);
	}
	result = (char*)calloc(sizeof_result + count, sizeof(char));
	for(i = 0; i < count; i++)
	{
		if(i == 0)
		{
			strcpy(result, server_name[i]);
		}
		else
		{
			strcat(result, server_name[i]);
		}
		if(i != count-1)
		{
			strncat(result, "_", 15);
		}
	}
	return result;
}

/******************************************************************************************
 * * FUNCTION NAME : main()
 * * DESCRIPTION : All the functions are called here
 * * RETURNS : SUCCESS and in case of failure ERROR
 * ***************************************************************************************/

int main(int argc, char* argv[])
{
	int i;
	char* server_names;
	char** server_name = NULL;
	server_name = (char**)calloc(argc, sizeof(char));
	char* concatenated_servernames = NULL;
	server_names = NULL;
	int count_valid_names = 0;
	if(argc >= 4)
	{
		for(i = 1;i < argc; i++)
		{
			if(cmd_validate(argv[i])==EXIT_SUCCESS)
			{
				server_names = extract_servername(argv[i]);
				if(server_name != NULL)
				{
					server_name[i] = NULL;
					server_name[count_valid_names] = server_names;
					count_valid_names++;
				}
				else
				{
					printf("\nMemory cannot be allocated\n");
				}
			}
			else
			{
				printf("\n%s is not a valid name\n", argv[i]);
			}
		}
		concatenated_servernames = concatenate_servernames(server_name, count_valid_names);
		printf("\n\nConcatenated Server Names is : %s\n", concatenated_servernames);
	}
	else
	{
		printf("Please enter atleast 3 arguments\n");
	}
	return EXIT_SUCCESS;
}
