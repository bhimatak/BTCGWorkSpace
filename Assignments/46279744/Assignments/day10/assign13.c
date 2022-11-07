/**********************************************************************************
 * * FILENAME 	: assign10_3e.c
 * *
 * * DESCRIPTION : The file defines the command validate,extract server names,concatenate and free memory.
 * *
 * Revision History :
 * *
 * DATE                NAME              REFERNCE                REASON
 * ---------------------------------------------------------------------------------------
 * 5 NOV 2022	       Bhargavi		w3.resorces		trying the code for assignment
 * *
 * *
 * Copyright 2022 Altran Group All Rights Reserved
 * *
 * **********************************************************************************************/
#ifndef _Assign10_3e.c
#define _ASSIGN10_3e.c
#include <stdio.h>/*header file*/
#include <string.h>/*header ile*/
#include <stdlib.h>/*header file*/
#include <ctype.h> /*header file*/
#ifndef _HEADER_H
#define _HEADER_H
#define EXIT_SUCCESS 
#define EXIT_FAILURE 
extern int Cmd_validate(char* word);
extern int free_allocated_memory(char** server_name, int count);
extern char* concatenate_servernames(char* server_name[], int count);
extern char* extract_servername(char* word);
#endif/*END of asssign10_3e.c macro*/
/*********************************************************************************
 * *FUNCTION NAME 	: cmd_validate,extract_servername,concatenate_servername,free_memory
 * *
 * *DESCRIPTION 	: Invoke the functions and test applications
 * * RETURNS		: EXIT_FAILURE, It returns abnormal termination
 * 			  EXIT_SUCCESS, It indicates the execution status
 * *
 * *
 * **********************************************************************************/
int cmd_validate(char* word)
{
	    /*initializing variables*/
	    char *temp_var = NULL,*token=NULL;/*temp_var,token pointing to char datatype*/
	    int portNo,i=0,allAlphabets=1;/*portno,allAlphabets of integer datatype*/
	    temp_var = (char*)calloc(strlen(word) + 1, sizeof(char));/*Dynamicaly allocate memory of calloc*/ 
	   if(temp_var == NULL)		    
	  {  
		 printf("Memory is not allocated");
		 return EXIT_FAILURE;
	  }  
	   strcpy(temp_var, word);/*copy of string from word to temp_var*/
	   token = strtok(temp_var, ":");        
	   while(i < strlen(token))/*while condition for checking allAlphbets*/
	   {
		   if(isalpha(token[i]) == 0)/*if condition then allAlphabets equals zero*/
		 {
			allAlphabets = 0;
		 }			               
	         i++;/*increment of i*/
	  }
	   if(allAlphabets)
	  {
		 token = strtok(NULL, ":");
	         if(token != NULL)
	        {  
		 portNo = atoi(token);
										               
	          if(portNo >=0 && portNo <= 1023)/*checks portno using condition*/
	         {
		     free(temp_var);
		     temp_var = NULL;
		     return EXIT_SUCCESS;/*returns the execution of success status*/
		 }
		}
	   }																			        
	    free(temp_var);/*dynamically memory allocated for free*/
	    temp_var = NULL;/*temp_var initializes to null*/
	    return EXIT_FAILURE;
}
char* extract_servername(char* word)
{
	/*Initialization of variables*/
	    char* temp = NULL;/*temp pointer pointing to char datatype*/
	    char* token = NULL;
	    int portNo;/*integer datatype*/
	    char* servername = NULL;
	    temp = (char*)calloc(strlen(word)+1, sizeof(char));/*dynamically allocate memory using calloc*/
	    strcpy(temp, word);/*copy from word to temp*/
	    token = strtok(temp, ":");
	    servername = (char*)calloc((strlen(token)+1) , sizeof(char));
	    strcpy(servername, token);/*copy of string from token to servername*/
	    printf("\nServer Name : %s", servername);/*printf statement*/
	    token = strtok(NULL, ":");
	    portNo = atoi(token);
	    printf("\nPort Number : %d\n",portNo);/*prints the port number*/
	    free(temp);/*free the memory*/
	    temp = NULL;
	    return servername;/*returns the server name*/

}
char* concatenate_servernames(char* server_name[], int count)
{
	    char* result = NULL;
	    int sizeof_result = 0,i;/*initialization of variable*/
	    for(i = 0; i < count; i++)
	   {
		sizeof_result += strlen(server_name[i]);
	   }
	   result = (char*)calloc(sizeof_result + count, sizeof(char));	/*dynamically allocate memory using calloc*/
	   for(i = 0; i < count; i++)/*for loop condition*/
	   {
		   if(i == 0)/*checks condition if equals then string copy*/
		  {
			strcpy(result, server_name[i]);
		  } 
	           else/*or string concatination*/
		  {
			strcat(result, server_name[i]);
		  } 
	           if(i != count-1)/*checks if condition*/
		  {
			 strncat(result, "_", 15);
		  }
          }
        return result;/*return result*/
}
int free_memory(char** server_name, int count)
 {     
	        for(int i = 0; i < count; i++)/*for loop condition*/
		{
			free(server_name[i]);/*free the server name*/
			server_name[i] = NULL;
		}       
		free(server_name);
		server_name = NULL;
		return EXIT_SUCCESS;
 }
int main(int argc, char* argv[])
{
	    /*intialization of variables*/
	    int i;/*integer datatype*/
	    char* server_names;/*server_name pointing to char datatype*/
            char** server_name = NULL;
	    server_name = (char*)calloc(argc, sizeof(char));/*dynamically allocate memory using calloc*/
	    char* concatenated_servernames = NULL;
	    server_names = NULL;
	    int count_valid_names = 0;
	    if(argc >= 4)/*condition checks the argc*/
	    {
		for(i = 1; i < argc; i++)
	       {
			if(cmd_validate(argv[i]) == EXIT_SUCCESS)/*checks the cmd_validate is equals to exit_success*/
			{
				server_names = extract_server_names(argv[i]);
				if(server_name != NULL)/*checks if server_name is not equals to null*/
				{
					server_name[i] = NULL;
					server_name[count_valid_names] = server_names;
					count_valid_names++;/*increment of countvalid name*/
				}
				else
				{
					printf("\nMemory Can not be allocated!\n");/*memory can not be allocated*/
				}
			}
			 else
			{
					printf("\n%s is not a valid word\n", argv[i]);/*not a valid word*/
			}
	       }
			concatenated_servernames = concatenate_servernames(server_name, count_valid_names);
			printf("\n\nConcatenated  Server Names is : %s\n", concatenated_servernames);/*concatenated server name*/
			free(concatenated_servernames);/*free of memory*/
			concatenated_servernames = NULL;
			int status = free_memory(server_name, count_valid_names);    
			if(status == EXIT_FAILURE)/*checks if status is equals to exit failure*/
			{
				printf("Memory Can't be freed!\n");/*memory cant be freed*/
			}
	       }
		else/*checks if not equals*/
		{
			printf("Please enter atleast 3 arguments\n");/*Take input from user*/
		}		
               return EXIT_SUCCESS;/*returns exit success if execution success*/
}
