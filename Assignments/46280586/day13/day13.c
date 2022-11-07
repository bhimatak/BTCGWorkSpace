/*******************************************************************************************
 * FILENAME :
 * DESCRAPTION :
 * REVISION History:
 * DATE                    NAME               REFERENCE                   REASON
 * ------------------------------------------------------------------------------------
 *  5 OCT 2022           SIRI                 NEW                          To print server name and port number
 *
 *  Copyright @2022 Altran All Rights   Reserved
 *  *********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_RANGE 1023
#define MAX_LENGTH 30
#define DELIMITER ":"
    
/************************************************************************************************************
 * FUNCTION NAME : Validate inputs and MAX LEN
 * DESCRIPTION: This function takes the servername portnumber
 * RETURN : SIZE
 * *********************************************************************88
 *******************************************/

 int validateInputs(char *input)
{
 char *serverName = NULL;/*char data type*/
 char *portNumber = NULL;/* char data type*/
 char token[MAX_LENGTH];/* char data type*/
 int portNo;i/* int data type*/
 int flag1 = 1;/* int data type*/
 int flag2 = 1;/* int data type*/
 int i;/* int data type*/
 int serverLen;/* int data type*/
 int portLen;/* int data type*/
										            
 strcpy(token,input);
 serverName = strtok(token, DELIMITER);
 portNumber = strtok(NULL, DELIMITER);
 serverLen = strlen(serverName);
 portLen = strlen(portNumber);
															            
 for(i = 0; i < serverLen; i++)
 {
    if(!isalpha(serverName[i]))
      {

        flag1 = 0;
  																	    break;
      }
  }
																            
 for(i=0; i< portLen; i++)
 {
																	   if(!isdigit(portNumber[i]))
																	   {
																		 flag2 = 0;
	      break;
																	    }
																	 }
																	            
																	 if(flag1 && flag2){
																	if(atoi(portNumber)>0 && atoi(portNumber)<=MAX_RANGE)
																	 {
																	  return (EXIT_SUCCESS);
																	 }
 }
 return(EXIT_FAILURE);
 }


    
 char* displayServerPort(char *input)
{
	            
   char token[MAX_LENGTH];
   char *serverName = NULL;
   char *portNumber = NULL;
   char *name = NULL;
   int serverLen;
  strcpy(token,input);
  serverName = strtok(token, DELIMITER);
  portNumber = strtok(NULL, DELIMITER);
  printf("Server Name: %s\t Port No: %s\n", serverName, portNumber);/* int data type*/
  serverLen = strlen(serverName);
  name = (char*) malloc (serverLen * sizeof(char));
  strcpy(name, serverName);
  return name;
}
    
  int main(int argc, char *argv[])
   {
	            
        int i, value;
       char *serverNames[MAX_LENGTH];
       char *name = NULL;
       char str[MAX_LENGTH];
					            
    if(argc < 3)
    {
							               
	    printf("Less number of arguments! Pass atleast 3 arguments");
									           
	    exit(EXIT_FAILURE);     
    }
						            
   for(i = 1; i < argc; i++)
   {
								                
	 value = validateInputs(argv[i]);
										           
	 if(value == 1)
	 {
	    exit(EXIT_FAILURE);
	    name = displayServerPort(argv[i]);
	    strcpy(serverNames[i],name);
	 }
	 return 0;
   }
							        
 }
