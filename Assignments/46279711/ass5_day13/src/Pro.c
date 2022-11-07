#include<common.h>
#include<ctype.h>

/*******************************************************************************
 ** FILE NAME  : Pro.c
 **
 ** DESCRIPTION : This file defines the function which send external message for Refer.
 **
 ** Revision History :
 ** DATE            NAME              REFERENCE            REASON
 ** ----------------------------------------------------------------------
 ** 04 NOV 2022    TEJA SRI           ARRAY                 NEW CODE
 **
 **
 ** Copyright @ 2022 Capgemini All Rights Reserved
 **
 *****************************************************************************************/

/********************************************************************************************  
 ** FUNCTION NAME : CMD_VALIDATE, FREE_ALLOCATED_MEMORY,CONCATENATE_SERVERNMAES AND EXTRACT_SERVERNAME
 **
 ** DESCRIPTION : This function return the "ARRAY"
 **
 ** RETURN : This function return server names and port number and concatenate all server names
 **
 **
 *******************************************************************************************/
extern int Cmd_validate(char* word);
extern int free_allocated_memory(char** server_name, int count);
extern char* concatenate_servernames(char* server_name[], int count);
extern char* extract_servername(char* word);

int cmd_validate(char* word)
{
	char *tmp_v = NULL,
	     *token=NULL;  /*char data type with pointer*/
	int port_No,
	    i=0,
	    allAlphabets=1; /*int data type to store integer*/
	tmp_v = (char*)calloc(strlen(word) + 1, sizeof(char));
	if(tmp_v == NULL)
	{
		printf("Memory is not allocated");
		return EXIT_FAILURE;
	}
	strcpy(tmp_v, word);
	token = strtok(tmp_v, ":");
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
			port_No = atoi(token);
			if(port_No >=0 && port_No <= 1023)
			{
				free(tmp_v);
				tmp_v = NULL;
				return EXIT_SUCCESS;
			}
		}
	}
	free(tmp_v);
	tmp_v = NULL;
	return EXIT_FAILURE;
}
char* extract_servername(char* word)
{
	char* tmp = NULL;    /*char data type initilize with NULL*/
	char* token = NULL;   /*char data type initilze with NULL*/
	int port_No;           /*int data type*/
	char* servername = NULL;/*char data type with pointer*/
	tmp = (char*)calloc(strlen(word)+1, sizeof(char));
	strcpy(tmp, word);
	token = strtok(tmp, ":");
	servername = (char*)calloc((strlen(token)+1) , sizeof(char));
	strcpy(servername, token);
	printf("\nServer Name : %s", servername);
	token = strtok(NULL, ":");
	port_No = atoi(token);
	printf("\nPort Number : %d\n",port_No);
	free(tmp);
	tmp = NULL;
	return servername;
}

char* concatenate_servernames(char* server_name[], int count)
{
	char* res = NULL;  /*char data type initilize to NULL*/
	int size_result = 0,i; /*int data type */
	for(i = 0; i < count; i++)
	{
		size_result += strlen(server_name[i]);
	}
	res = (char*)calloc(size_result + count, sizeof(char));
	for(i = 0; i < count; i++)
	{
		if(i == 0)
		{
			strcpy(res, server_name[i]);
		}
		else
		{
			strcat(res, server_name[i]);
		}
		if(i != count-1)
		{
			strncat(res, "_", 15);
		}
	}
	return res;
}
int main(int argc, char* argv[])
{
	int i;                          /*int data type */
	char* server_names;             /*char data type refered as pointer*/
	char** server_name = NULL;
	server_name = (char**)calloc(argc, sizeof(char));
	char* concatenated_servernames = NULL;
	server_names = NULL;
	int count_valid_names = 0;
	if(argc >= 4)
	{
		for(i = 1; i < argc; i++)
		{
			if(cmd_validate(argv[i]) == EXIT_SUCCESS)
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
					printf("\nMemory Can not be allocated!\n");
				}
			}
			else
			{
				printf("\n%s is not a valid word\n", argv[i]);
			}
		}
		concatenated_servernames = concatenate_servernames(server_name, count_valid_names);
		printf("\n\nConcatenated  Server Names is : %s\n", concatenated_servernames);
	}
	else
	{
		printf("Please enter atleast 3 arguments\n");
	}
	return EXIT_SUCCESS;
}

