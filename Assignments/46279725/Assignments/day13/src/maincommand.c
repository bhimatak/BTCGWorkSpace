#include"command.h"
/*********************************************************************************************************************************
 * FUNCTION NAME : cmd_validate(char* word)
 * DESCRIPTION : in this, it ue uesd to check the enough arguments are received or not.
 * RETURN TYPE : integer
 *******************************************************************************************************************************/

int cmd_validate(char* word)
{
	char *temp_var = NULL,                               /*temp_var of type char is assigned to null*/
	*token=NULL;                                         /*token is used to seperate the alphabets*/
	int portNo;                      
	int i=0;
	int allAlphabets=1;                                  /*alphabets count is assigned to 1*/
	temp_var = (char*)calloc(strlen(word) + 1, sizeof(char));
	if(temp_var == NULL)                                 /*if no variable is assigned then display memory is not allocated*/
	{
		printf("Memory is not allocated");
		return EXIT_FAILURE;
	}
	strcpy(temp_var, word);                               /*if it is not null, then copy word to temp_var*/
	token = strtok(temp_var, ":");                        /*to seperate all the temp_var and assign it to token*/
	while(i < strlen(token))                             /*condition to check whether all are alphabets or not*/
	{
		if(isalpha(token[i]) == 0)
		{
			allAlphabets = 0;
		}
		i++;
	}
	if(allAlphabets)                                     /*if some alphabets are present, then the execution satisfies*/
	{
		token = strtok(NULL, ":");
		if(token != NULL)
		{
			portNo = atoi(token);                 /*atoi is used to change the alphabet to an integer*/
			if(portNo >=0 && portNo <= 1023)
			{
				free(temp_var);																				    temp_var = NULL;	
				return EXIT_SUCCESS;
																																														}			
		}
	}
	free(temp_var);
	temp_var = NULL;
	return EXIT_FAILURE;
}

/****************************************************************************************************************************
 * FUNCTION NAME : extract_servername(char* word)
 * DESCRIPTION : TO extract the server word
 * RETURNS : success,if failure error
 *****************************************************************************************************************************/
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

/******************************************************************************************************************************
 * FUNCTION NAME : concatenate_servernames(char* server_name[],int count)
 * DESCRIPTION : to concatenetae the server name
 * RETURNS : SUCCESS, In case of error FAILURE
 * ******************************************************************************************************************************/
char* concatenate_servernames(char* server_name[], int count)
{
	char* result = NULL;
	int sizeof_result = 0,i;
	for(i = 0; i < count; i++)
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
/***********************************************************************************************************************************
 * FUNCTION NAME: main(int argc,char* argv)
 * DESCRIPTION : the program starts here.
 * RETURNS : int
 * *********************************************************************************************************************************/
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

