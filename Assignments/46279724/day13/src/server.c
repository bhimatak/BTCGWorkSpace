/***************************************************************************************************************
 * FILENAME :service.c
 * DESCRIPTION :In this function sends a call event request to service.c
 * REVISION HISTROY : 
 * DATE                           NAME                             REFERENCE                            REASON
 * -----------------------------------------------------------------------------------------------------------
 *  6 NOV 2022                  Sireesha                           new                         new code for user
 *  ******************************************************************************************************/
#include<common.h>
#include<ctype.h>
/******************************************************************************************************
 *
 *                 HEADER INFORMATION
 *
 *****************************************************************************************************/
                                    
extern int Cmd_validate(char* word);                         /*cmd_validate used for validation of words*/                          
extern int free_allocated_memory(char** server_name, int count);            /*it frees the allocated memory for  elements in array*/
extern char* concatenate_servernames(char* server_name[], int count);        /*it is used to combine the servernames in array*/
extern char* extract_servername(char* word);               /*it is used to  extract the servernames */
int cmd_validate(char* word)
{
	char *temp_var = NULL,*token=NULL;   /*temp_var assigned value is null*/
	int portNo,i=0,allAlphabets=1;                 /*we can assign port no and alphabets*/
	temp_var = (char*)calloc(strlen(word) + 1, sizeof(char)); /*it frees memory assigned for elements*/
	if(temp_var == NULL)           
	{
		printf("Memory is not allocated"); /*temp_var ==null it prints memory not allocated*/
		return EXIT_FAILURE;            /*exit failure*/
	}
	strcpy(temp_var, word);          /*strcpy used to copy temp_var to word*/
	token = strtok(temp_var, ":");   
	while(i < strlen(token))
	{
		if(isalpha(token[i]) == 0)
		{
			allAlphabets = 0;
		}
		i++;   /*alphabets are incremented*/
	}
	if(allAlphabets)
	{
		token = strtok(NULL, ":");   /*strtok is assigned to null*/
		if(token != NULL)
		{
			portNo = atoi(token);  /*atoi converts character to integer value*/
			if(portNo >=0 && portNo <= 1023)
			{
				free(temp_var);/*if the statement executes then return exit sucess*/
				temp_var = NULL;
				return EXIT_SUCCESS;
			}
		}
	}
	free(temp_var);    /*next we can fress temp_var*/
	temp_var = NULL;       
	return EXIT_FAILURE;
}
char* extract_servername(char* word)   /* extract the servernames*/
{
	char* temp = NULL;              /*temp assigned to null*/
	char* token = NULL;                /*token assigned to null*/
	int portNo;
	char* servername = NULL;            /*servername assigned to null*/
	temp = (char*)calloc(strlen(word)+1, sizeof(char));     /*free the memory */
	strcpy(temp, word);                                    /*strcpy used to copy temp to word*/
	token = strtok(temp, ":");
	servername = (char*)calloc((strlen(token)+1) , sizeof(char)); /*free the strlen,size of char*/
	strcpy(servername, token);                                /*copy the servername,token*/
	printf("\nServer Name : %s", servername);                  /*print the servername*/
	token = strtok(NULL, ":");
	portNo = atoi(token);                    /*convert character to integer*/
	printf("\nPort Number : %d\n",portNo);      /*print port no*/
	free(temp);      /*free temp*/
	temp = NULL;
	return servername;
}
char* concatenate_servernames(char* server_name[], int count) /*combines the servernames*/
{
	char* result = NULL;            /* result assigned to null*/
	int sizeof_result = 0,i;
	for(i = 0; i < count; i++)
	{
		sizeof_result += strlen(server_name[i]); /*size of result is=strlen(server names)*/
	}
	result = (char*)calloc(sizeof_result + count, sizeof(char)); /*free memory*/
	for(i = 0; i < count; i++)
	{
		if(i == 0)
		{
			strcpy(result, server_name[i]);  /*copy the result,server_names*/
		}
		else
		{ 
			strcat(result, server_name[i]);/*combine the result,server_names*/
		}
		if(i != count-1)
		{
			strncat(result, "_", 15);
		}
	}
	return result;
}
int main(int argc, char* argv[])    /*main function*/
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
	if(cmd_validate(argv[i]) == EXIT_SUCCESS)   /*it validate exit success*/
	{
	server_names = extract_servername(argv[i]);
	if(server_name != NULL)
	{
	server_name[i] = NULL;
	server_name[count_valid_names] = server_names;
	count_valid_names++;	/*increment the count*/
	}
	else
	{
		printf("\nMemory Can not be allocated!\n");/*print memory can not be allocated*/
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
	printf("Please enter atleast 3 arguments\n");/*enter the arguments*/
	}
return EXIT_SUCCESS;
}
















