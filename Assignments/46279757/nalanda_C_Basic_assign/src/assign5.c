/***********************************************************************************
 * *
 * * FILE NAME    : assign5.c
 * * 
 * * DESCRIPTION  : Program is used to demonstrate  max length from user ,to extract the words,
 * *			store them in a double pointer dynamically allocating memory
 * *
 * * Revision History:
 * * DATE             NAME                   REFERENCE               REASON
 * **********************************************************************************
 * * 05-11-2022      Vasanthi                   New                  dynamically allocati-
 *                                                                          ng memory 
 * * Copyright 2022, Altran Group All Rights Reserved
 * *
 * *************************************************************************************
 * *				STANDARD HEADER FILE
 * **************************************************************************************/                                                                         
#include<common.h>
/*****************************************************************************************
 * *				FUNCTION DEFINING
 * **************************************************************************************/
extern int Cmd_validate(char* word);
extern int free_allocated_memory(char** server_name, int count);
extern char* concatenate_servernames(char* server_name[], int count);
extern char* extract_servername(char* word);
/****************************************************************************************
 * *
 * * FUNCTION NAME  : cmd_validate
 * *
 * * DESCRIPTION    : function receive an input and return pointerto allocated heap
 * *
 * * RETURNS        : SUCCESS or FAILURE
 * **************************************************************************************/
int cmd_validate(char* word)
{
	char *temp_var = NULL,*token=NULL;/*initailizing temporary value and token with null values*/
	int portNo,i=0,allAlphabets=1;/*initializing portNo,alphabets intialize with 1*/
	temp_var = (char*)calloc(strlen(word) + 1, sizeof(char));/*memory is assigned with zeo using calloc function*/
	if(temp_var == NULL)/*temporary value to null*/
	{
		printf("Memory is not allocated");/*prints memory not allocated*/
		return EXIT_FAILURE;/*returns failure*/
	}
	strcpy(temp_var, word);/*copying temp_var to word*/
	token = strtok(temp_var, ":");/*assigning to token value*/
	while(i < strlen(token))/*traverse through the token*/
	{
		if(isalpha(token[i]) == 0)/*the alphabet of an array is assigned to 0*/
		{
			allAlphabets = 0;/*assigning to 0*/
		}
		i++;/*incrementing value*/
	}
	if(allAlphabets)
	{
		token = strtok(NULL, ":");/*token initializing with null character*/
		if(token != NULL)/*check whether the token is not null*/
		{
			portNo = atoi(token);/*portNo assigning to token for type catsing*/
			if(portNo >=0 && portNo <= 1023)/*if portNo cobdition is true*/
			{
				free(temp_var);/*free up the memory*/
				temp_var = NULL;/*variable assigned with null value*/
				return EXIT_SUCCESS;/*return success*/
			}
		}
	}
	free(temp_var);/*free up the memory*/
	temp_var = NULL;/*assigning temp_var value to null*/
	return EXIT_FAILURE;/*returns failure*/
}
/******************************************************************************************
 * *
 * * FUNCTION NAME : extract_servername
 * *
 * * DESCRIPTION   : function to receive a double pointer input 
 * *
 * * RETURNS       : SUCCESS or FAILURE
 * ***************************************************************************************/
char* extract_servername(char* word)
{
	char* temp = NULL;/*assigning temp value with null*/
	char* token = NULL;/*assigning token value with null*/
	int portNo;/*intializing portNo*/
	char* servername = NULL;/*intializing servername with NULL*/
	temp = (char*)calloc(strlen(word)+1, sizeof(char));/*allocating memory to servername*/
	strcpy(temp,word); /*copying temp to word value*/
	token = strtok(temp, ":");/*strtok acts as a delimiter*/
	servername = (char*)calloc((strlen(token)+1) , sizeof(char));/*allocating memory to char and also the size*/
	strcpy(servername, token);/*copying servername to token*/
	printf("\nServer Name : %s", servername);/*prints the name which was taken from the user*/
	token = strtok(NULL, ":");/*delimiter is assigned with NULL values*/
	portNo = atoi(token);/*type casting */
	printf("\nPort Number : %d\n",portNo);/*prints the portNo*/
	free(temp);/*free up the memory*/
	temp = NULL;/*assigning temp with NULL value*/
	return servername;/*returns the name*/
}
/**********************************************************************************************
 * *
 * * FUNCTION NAME : concatenate_servernames
 * *
 * * DESCRIPTION   : Function to traverse and display all words stored
 * *
 * * RETURNS       : SUCCESS or FAILURE
 * *********************************************************************************************/
char* concatenate_servernames(char* server_name[], int count)
{
	char* result = NULL;/*result is initializing with null value*/
	int sizeof_result = 0,i;/*intializing  the size*/
	for(i = 0; i < count; i++)/*to traverse all the words in an array*/
	{
		sizeof_result += strlen(server_name[i]);/*based on the string length size will be print*/
	}
	result = (char*)calloc(sizeof_result + count, sizeof(char));/*size of words is stored in result*/
	for(i = 0; i < count; i++)/*traverse the columns*/
	{
		if(i == 0)/*value checking*/
		{
			strcpy(result, server_name[i]);/*copying result to server_name*/
		}
		else
		{
			strcat(result, server_name[i]);/*concatenating the words*/
		}
		if(i != count-1)
		{
			strncat(result, "_", 15);/*appends of the string*/
		}
	}
	return result;/*prints the result value*/
}
/************************************************************************************************
 * *
 * * FUNCTION NAME : free_memory
 * *
 * * DDESCRIPTION  : This function free up all the allocated memory
 * *
 * * RETURNS       : SUCCESS or FAILURE
 * ***********************************************************************************************/
int free_memory(char** server_name, int count)
{
	for(int i = 0; i < count; i++)/*traverse through the elements*/
	{
		free(server_name[i]);/*free up memory allocate to server_name*/
		server_name[i] = NULL;/*intializing with NULL value*/
	}
	free(server_name);/*removing memmory allocate to server_name*/
	server_name = NULL;/*initailizing with NULL value*/
	return EXIT_SUCCESS;/*returns EXIT_SUCCESS*/
}
/************************************************************************************************
 * *
 * * FUNCTION NAME : main
 * *
 * * DESCRIPTION   : This takes takes the inputy from the command line arguments
 * *
 * * RETURNS       : SUCCESS or FAILURE
 * **********************************************************************************************/
int main(int argc, char* argv[])
{
	int i;/*initalizing i value*/
	char* server_names;/*initializing server name*/
	char** server_name = NULL;/*assigning server_name with NULL value*/
	server_name = (char**)calloc(argc, sizeof(char));/*allocating memory and size to server_name*/
	char* concatenated_servernames = NULL;/*appends the server_names*/
	server_names = NULL;/*assigning to NULL values*/
	int count_valid_names = 0;/*to count the particular element occur*/
	if(argc >= 4)/*if args greater than 4 or not*/
	{
		for(i = 1; i < argc; i++)/*traversing through the arguments*/
		{
			if(cmd_validate(argv[i]) == EXIT_SUCCESS)/*if args is suucess or not*/
			{
				server_names=extract_servername(argv[i]);/*storing of names in server_names*/
				if(server_name != NULL)/*server_name is not equal to null*/
				{
					server_name[i] = NULL;/*initializing with null value*/
					server_name[count_valid_names] = server_names;/*to count the names of it*/
					count_valid_names++;/*incrementing the pointer*/
				}
				else
				{
					printf("\nMemory Can not be allocated!\n");/*prints memory not allocated*/
				}
			}
			else
			{
				printf("\n%s is not a valid word\n", argv[i]);/*argumenr entered is not valid*/
			}
		}
		concatenated_servernames = concatenate_servernames(server_name, count_valid_names);/*appends the names*/
		printf("\n\nConcatenated  Server Names is : %s\n", concatenated_servernames);/*prints the concatenated names*/
		free(concatenated_servernames);/*free up allocate memory*/
		concatenated_servernames = NULL;/*server_names is initialized with NULL*/
		int status = free_memory(server_name, count_valid_names);/*intializing memory to status*/
		if(status == EXIT_FAILURE)/*status checking*/
		{
			printf("Memory Can't be freed!\n");/*prints memory can't be removed*/
		}
	}
	else
	{
		printf("Please enter atleast 3 arguments\n");/*asks the user plz enter atlesst 3 arguments*/
	}
	
	return EXIT_SUCCESS;/*returns EXIT_SUCCESS*/
}
