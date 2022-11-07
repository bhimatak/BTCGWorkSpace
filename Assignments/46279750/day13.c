/***********************************************************************************************************
 * * FILENAME : day13.c
 * *
 * * DESCRIPTION: program to demonstrate the pointer operations  on string and array to a function
 * *
 * * Revision History:
 * * DATE            NAME                 REFERENCE                   REASON
 * *  
 * * 05-11-2022      SAAHERA               ABC                         Initial creation
 * * 
 * * Copyright 2022, Altran Group All Rights Reserved
 * *
 * * *****************************************************************************************************
 * *                                          STANDARD HEADER FILES
 * * *******************************************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**********************************************************************************************************
 * *                                                  MACROS
 * * *********************************************************************************************************/
#ifndef _HEADER_H
#define _HEADER_H
#define EXIT_SUCCESS
#define EXIT_FAILURE
extern int Cmd_validate(char* word);
extern int free_allocated_memory(char** server_name, int count);
extern char* concatenate_servernames(char* server_name[], int count);
extern char* extract_servername(char* word);
#endif
/*********************************************************************************************************
 * *  
 * * FUNCTION NAME: acess_array through pointers
 * * 
 * * DESCRIPTION: access_array of each element
 * * 
 * * RETURN: SUCCESS or FAILURE
 * */
int cmd_validate(char* word) 
{
	char *temp_var = NULL, *token = NULL; /* initialize pointer tp temp_var and token*/
	int portNo, i=0, allAlphabets=1; /*initialize portNo value and allAlphabets*/
	temp_var=(char*)calloc(strlen(word)+ 1, sizeof(char)); /* initialize calloc to string length of words*/
	if(temp_var == NULL) /* initialize temp)var value to NULL*/
	{
		printf("Memory is not allocated"); /* print formatted out*/
		return EXIT_FAILURE;
	}
	strcpy(temp_var, word); /* perform string copy on temp_var and word*/
	token=strtok(temp_var, ":"); /*initialize string token on temp_var*/
	while(i<strlen(token))/* condition string length of token less than to i value*/
	{
		if(isalpha(token[i])==0) /*whether isalpha token value equalto zero*/
		{
			allAlphabets=0;
		}
																					}															i++; /* i value increment*/															}
									if(allAlphabets)
											{
														token=strtok(NULL, ":"); /*initialize string token to NULL*/
																if(token!=NULL) /* if it is not Null*/
																			{
																							portNo=atoi(token);
																										if(portNo>=0 && portNo<=1023)/* portno and address of portNo. declaring*/
																														{
																																			free(temp_var); /* free the temp_var*/
																																							temp_var=NULL; 
																																											return EXIT_SUCCESS;
																																														}
																												}
																	}
										free(temp_var);
											temp_var=NULL;
												return EXIT_FAILURE;
}
char* extract_servername(char* word)
{
		char* temp = NULL; /* initialize char temp value to NULL*/
		       	char* token = NULL; /* initialize char token to NULL*/
			       	int portNo;
				       	char* servername = NULL;
					       	temp = (char*)calloc(strlen(word)+1, sizeof(char)); /* initiaizing char pointer to calloc function og string length and sizeof char*/
							strcpy(temp, word);/* string copy function on temp, word*/
								token = strtok(temp, ":");
								       	servername = (char*)calloc((strlen(token)+1) , sizeof(char));
									       	strcpy(servername, token);
										       	printf("\nServer Name : %s", servername);/*print formatted out of server name*/
											       	token = strtok(NULL, ":");
												       	portNo = atoi(token); /* portNo is equalizing tp alphabet to integer function*/
													       	printf("\nPort Number : %d\n",portNo); /* print formatted out of port number*/
														       	free(temp);
															       	temp = NULL;
																	return servername;
}
char* concatenate_servernames(char* server_name[], int count)
{
		char* result =NULL;
			int sizeof_result=0, i;
				for(i=0;i<count;i++) /*traversing count on each element*/
						{
									sizeof_result += strlen(server_name[i]); /*sizeof function equalizing to length of string and server_name*/
										}
					result=(char*)calloc(sizeof_result + count, sizeof(char));
						for(i=0;i<count;i++)
								{
											if(i==0)
														{
																		strcpy(result, server_name[i]); /* copy the results of server_name*/
																				}
													else
																{
																				strcat(result, server_name[i]); /* performing concatenation on result and server_name*/
																						}
															if(i!=count-1)
																		{
																						strncat(result, "_",15);/* string cat value initialize to 15*/
																								}
																}
							return result;
}
int free_memory(char** server_name, int count)
{
		for(int i=0;i<count;i++)
				{
							free(server_name[i]); 
									server_name[i]=NULL;/* initializing server_name to NULL*/
										}
			free(server_name);
				server_name=NULL;
					return EXIT_SUCCESS;
}
/*******************************************************************************************************
 *  * *
 *   * * FUNCTION NAME: main
 *    * *
 *     * * DESCRIPTION: This function calls the array_acess elements with pointer and string to perform ceratain operations
 *      * *
 *       * * RETURN: SUCCESS or FAILURE
 *        * **********************************************************************************************************/
int main(int argc, char* argv[])
{
		int i;
			char* server_names;
			       	char** server_name = NULL; /* char pointer pointing to server_name*/
				       	server_name = (char*)calloc(argc, sizeof(char));
					       	char* concatenated_servernames = NULL;/*char concatenated server_name to NULL*/
						      	server_names = NULL;
							       	int count_valid_names = 0; /* initialize count_valid_names to 0*/
									if(argc>=4)/* initialize argument count to >=4*/
											{
														for(i=1;i<argc;i++)/* traversing argc on each i value*/
																	{
																					if(cmd_validate(argv[i]) == EXIT_SUCCESS)
																									{
																														server_names=extract_server_names(argv[i]);/*initialize server_name = extract_server_name valur of argv*/
																																		if(server_name!=NULL)
																																							{
																																													server_name[i]=NULL;
																																																		server_name[count_valid_names]=server_names;
																																																							count_valid_names++; /*increment count_valid_names*/
																																																											}
																																						else
																																											{
																																																	printf("\nMemory cannot be allocated!\n"); /*print formatted out*/
																																																					}
																																									}
																								else
																												{
																																	printf("\n%s is not a valid word\n", argv[i]);
																																				}
																										}
																concatenated_servernames = concatenate_servernames(server_name, count_valid_names);
																		printf("\n\nConcatenated Server Names i : %s\n", concatenated_servernames);
																				free(concatenated_servernames);/* free the server_nmaes*/
																						concatenated_servernames=NULL;
																								int status=free_memory(server_name,count_valid_names);/*initializing satus to free_memory*/
																										if(status == EXIT_FAILU:																			}
																											}
										else
												{
															printf("please enter atleast 3 arguments\n");
																}
											return EXIT_SUCCESS;
}
				    



