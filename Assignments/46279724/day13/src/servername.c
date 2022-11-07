#include"common.h"

int Cmd_validate(char* word)
{
		char *temp_var = NULL,
		     	     *token=NULL;
			int portNo,
			    	    i=0,
				    	    allAlphabets=1;
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
						  if(portNo >=0 && portNo <= 1023)
							{
							    free(temp_var);
							    temp_var = NULL;																						return EXIT_SUCCESS;
							}
						}
					
					    	}
				free(temp_var);
					temp_var = NULL;
						return EXIT_FAILURE;
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

															
