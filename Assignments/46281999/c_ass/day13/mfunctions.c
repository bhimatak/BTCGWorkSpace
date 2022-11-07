#include "header.h"
int validateInputs(char *input)
{

    char *serverName = NULL;
    char *portNumber = NULL;
    char token[MAX_LENGTH];
    int flag1 = 1;
    int flag2 = 1;
    int i;
    int serverLen;
    int portLen;

    strcpy(token, input);

    serverName = strtok(token, DELIMITER);
    portNumber = strtok(NULL, DELIMITER);

    serverLen = strlen(serverName);
    portLen = strlen(portNumber);

    for (i = 0; i < serverLen; i++)
    {
        if (!isalpha(serverName[i]))
        {
            flag1 = 0;
            break;
        }
    }

    for (i = 0; i < portLen; i++)
    {
        if (!isdigit(portNumber[i]))
        {
            flag2 = 0;
            break;
        }
    }

    if (flag1 && flag2)
    {
        if (atoi(portNumber) > 0 && atoi(portNumber) <= MAX_RANGE)
        {
            return (EXIT_SUCCESS);
        }
    }
    return (EXIT_FAILURE);
}

/*
function to receive a word, to extract and display server name and port number. Should store and return pointer to the server name
*/

char *displayServerPort(char *input)
{

    char token[MAX_LENGTH];
    char *serverName = NULL;
    char *portNumber = NULL;
    char *name = NULL;
    int serverLen;

    strcpy(token, input);

    serverName = strtok(token, DELIMITER);
    portNumber = strtok(NULL, DELIMITER);

    printf("Server Name: %s\t Port No: %s\n", serverName, portNumber);

    serverLen = strlen(serverName);
    name = malloc(serverLen + 1);
    strcpy(name, serverName);

    return name;
}