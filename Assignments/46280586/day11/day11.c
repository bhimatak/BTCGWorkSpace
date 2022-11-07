/*****************************************************************************
 *  * FILENAME :DAY11.C
 *   * DESCRAPTION :
 *    * REVISIOM History:
 *     * DATE         NAME         REFERENCE             REASON
 *      * ------------------------------------------------------------------------------
 *       *  5 OCT 2022  SIRI           NEW        To print  memory allocation   
 *        *  *************************************************/   

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#ifndef _HEADER_H
#define _HEADER_H
#define EXIT_SUCCESS 
#define EXIT_FAILURE 
extern int Cmd_validate(char* word);
extern int free_allocated_memory(char** server_name, int count);
extern char* concatenate_servernames(char* server_name[], int count);
extern char* extract_servername(char* word);
#endif
/***********************************************************************
 * * FUNCTION NAME:cmd_validate
 * * DESCRIPTION:This function server name port number 
 * * RETURN :SUCCESS
 * ***********************************************
 * **********************************/

int cmd_validate(char* word)
{
  char *temp_var = NULL,/* char data type*/
  *token=NULL;
  int portNo,
  i=0,
 allAlphabets=1;
 temp_var = (char*)calloc(strlen(word) + 1, sizeof(char));
 if(temp_var == NULL)/* it is if condition*/
			   				    
 {
	printf("Memory is not allocated");/*prints the content*/
	return EXIT_FAILURE;
 }
		   			    
  strcpy(temp_var, word);
 token = strtok(temp_var, ":");
		      				    
 while(i < strlen(token))/* while condtion*/
			       					        
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
	char* temp = NULL;
	char* token = NULL;
	int portNo;
	 char* servername = NULL;
	 temp = (char*)calloc(strlen(word)+1, sizeof(char));
	strcpy(temp, word);
	token = strtok(temp, ":");
	servername = (char*)calloc((strlen(token)+1) , sizeof(char));
	strcpy(servername, token);
        printf("\nServer Name : %s", servername);/*prints the content*/
	token = strtok(NULL, ":");
	portNo = atoi(token);
        printf("\nPort Number : %d\n",portNo);/*prints the content*/
	free(temp);
       temp = NULL;
																              return servername;

}
char* concatenate_servernames(char* server_name[],int count)
{
	char* result = NULL;
	int sizeof_result = 0,
	 i;
			 		        
	for(i = 0; i < count; i++)
	 {
		sizeof_result += strlen(server_name[i]);
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
													 								        
			 if(i!=count-1)
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
		    return EXIT_SUCCESS;
}

int main(int argc, char* argv[])
{
	   int i;
	   char* server_names;
	    char** server_name = NULL;
	    server_name = (char*)calloc(argc, sizeof(char));
	   char* concatenated_servernames = NULL;
	   server_names = NULL;
	  int count_valid_names = 0;
	  if(argc >= 4)
	   {
		for(i = 1; i < argc; i++)
		{
		   if(Cmd_validate(argv[i]) == EXIT_SUCCESS)
		    {
															 			              server_names = extract_server_names(argv[i]);
																		          }															                    
											 								 if(server_name != NULL)
																			 {
		     server_name[i] = NULL;
		     server_name[count_valid_names] = server_names;
		     count_valid_names++;
                  }

																			  else
																			 {
			printf("\nMemory Can not be allocated!\n");/*prints the content*/
																																			 }   
																																							
		}
						   											 }		            
		 else
		 {
									  								                    printf("\n%s is not a valid word\n", argv[i]);/*prints the content*/
																												   							 }
	         }
	          concatenated_servernames = concatenate_servernames(server_name,count_valid_names);
		  printf("\n\nConcatenated Server Names is : %s\n",concatenated_servernames);/*prints the content*/
			       
		  free(concatenated_servernames);
		  concatenated_servernames = NULL;
		  int status = free_memory(server_name,count_valid_names);
		  if(status==EXIT_FAILURE)
		     {
			 printf("Memory Can't be freed!\n");/*prints the content*/
		     }
                     }
                   else 
                  {   
	         	printf("Please enter atleast 3 arguments\n");/*prints the content*/
                   }   
                  return EXIT_SUCCESS;
                  }

								            
 

