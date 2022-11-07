#include<common.h>
extern int Cmd_validate(char* word);
extern int free_allocated_memory(char** server_name, int count);
extern char* concatenate_servernames(char* server_name[], int count);
extern char* extract_servername(char* word);


int cmd_validate(char* word)
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
													          return EXIT_SUCCESS;
														            }
									           }
					        }
		     free(temp_var);
		          temp_var = NULL;
			       return EXIT_FAILURE;
}
     char* extract_servername(char* word)
{
