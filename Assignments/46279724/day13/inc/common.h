/*****************************************************************************************************************
 * FILENAME : common.h
 * DESCRPTION : This file includes main from which the program start here
 * REVISION HISTROY :
 * DATE                    NAME                                REFERENCE                          REASON
 * ------------------------------------------------------------------------------------------------------
 *  6 NOV 2022            sireesha                              new                      new code for user
 *  ********************************************************************************************************************/
#ifndef COMMON_H
#define COMMON_H
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
/*************************************************************************************************************
 *
 *
 *                      HEADER INFORMATION
 *
 *
 *******************************************************************************************************/
extern int Cmd_validate(char* word);
extern int free_allocated_memory(char** server_name, int count);   /*we can write functions in the header function*/
extern char* concatenate_servernames(char* server_name[], int count);  
extern char* extract_servername(char* word);

#endif                                     /*File ends here*/


