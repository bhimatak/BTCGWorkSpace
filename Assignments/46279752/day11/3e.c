/**********************************************************************
 * * FILENAME : 3e.c
 * * 
 * * DESCRIPTION : This file read a line of text of max length 80 from
 * *  	           userm to extract words and store them in double
 * * 		   pointer dynamically allocating memory and perform 
 * *		    the given operations
 * *
 * * REVISION HISTORY:
 * * 
 * * DATE 	     NAME       REFERENCE 	REASON
 * *------------------------------------------------------------
 * * 6 October2022  Ramadevi     sgfdsh      Assignment of CG
 * *
 * * Copyright @ 2022 alluser referral
 * *
 * *********************************************************************/

#include <stdio.h>/*Header file */
#include <string.h>/* Header file */
#include <stdlib.h>/* Header file */
#include <ctype.h>/* Header file */

#ifndef _HEADER_H/* Macro defined */
#define _HEADER_H

//#define EXIT_SUCCESS 
//#define EXIT_FAILURE

extern int Cmd_validate(char* word);
extern int free_allocated_memory(char** server_name, int count);
extern char* concatenate_servernames(char* server_name[], int count);
extern char* extract_servername(char* word);

#endif/*End of macro*/
/***********************************************************************
 * * FUNCTION NAME: main
 * *
 * * DESCRIPTION : It displays the output to the user
 * *
 * * RETURNS : RETURNS results, in case of success
 * *	       RETURNS error , in case of errors 
 * *
 * *********************************************************************/
int cmd_validate(char* word)
{
	char *temp_var = NULL,*token=NULL;
	int portNo,i=0,allAlphabets=1;
	temp_var = (char*)calloc(strlen(word) + 1, sizeof(char));
	if(temp_var == NULL)
	{
		printf("Memory is not allocated");
        	return -1;
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
			if(portNo >=0 && portNo <= 1023)
			{
				free(temp_var);
                		temp_var = NULL;
                		return 1;
			}
		}

	}
	free(temp_var);
    	temp_var = NULL;

    	return 0;
}
char* extract_servername(char* word)
{
	char* temp = NULL;
	char* token = NULL;
 	int portNo;
    	char* servername = NULL;
    	temp = (char*)calloc(strlen(word)+1, sizeof(char));
    	strcpy(temp, word);
    	token = strtok(temp, ":");
    	servername = (char*)calloc((strlen(token)+1) , sizeof(char));
    	strcpy(servername, token);
    	printf("\nServer Name : %s", servername);
    	token = strtok(NULL, ":");
    	portNo = atoi(token);
    	printf("\nPort Number : %d\n",portNo);
    	free(temp);
    	temp = NULL;
    	return servername;
}
char* concatenate_servernames(char* server_name[], int count)
{
	char* result = NULL;
	int sizeof_result = 0, i;
	for(i = 0; i < count; i++)
	{
		sizeof_result += strlen(server_name[i]);
	}
	result = (char*)calloc(sizeof_result + count, sizeof(char));
    
    	for(i = 0; i < count; i++)
	{
		if(i==0)
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
int free_memory(char** server_name, int count)
{
	for(int i = 0; i < count; i++)
	{
		free(server_name[i]);
        	server_name[i] = NULL;
	}

	free(server_name);
        server_name = NULL;
        return 0;
}
int main(int argc, char* argv[])
{   
	int i;
        char* server_names;
        char** server_name = NULL;
    	server_name = (char **)calloc(argc, sizeof(char));
    	char* concatenated_servernames = NULL;
    	server_names = NULL;
    	int count_valid_names = 0;

	if(argc >= 4)
	{
		for(i = 1; i < argc; i++)
		{
			if(cmd_validate(argv[i]) == EXIT_SUCCESS)
			{
				 server_names = extract_server_names(argv[i] );
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
        	free(concatenated_servernames);
        	concatenated_servernames = NULL;
        	int status = free_memory(server_name, count_valid_names);

		if(status == EXIT_FAILURE)
		{	
			printf("Memory Can't be freed!\n");
		}	
	}
	else
	{
		printf("Please enter atleast 3 arguments\n");
	}

	return 0;
}
