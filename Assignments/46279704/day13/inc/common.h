/* FILE NAME : prog02.c
 *
 * DESCRIPTION : the file defines the function which sends external message from server
 *
 * REVISION  HISTORY :
 * 
 *  DATE                NAME            REFERENCE                 REASON
 * ------------------------------------------------------------------------
 *  6 NOV 2022       Charishma          CAPG1234                   new code
 *                      
 * * *****************************************************************************/
#ifndef _COMMON_H_
#define _COMMON_H_
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>

extern int cmd_validate(char* word);
extern int free_allocated_memory(char** server_name,int count);
extern char* concatenate_servernames(char* server_name[],int count);
extern char* extract_servername(char* word);
#endif
