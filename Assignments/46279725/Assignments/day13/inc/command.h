#include"stdio.h"
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
extern int Cmd_validate(char* word);
extern int free_allocated_memory(char** server_name, int count);
extern char* concatenate_servernames(char* server_name[], int count);
extern char* extract_servername(char* word);
