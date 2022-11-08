/*******************************************************************************
 * *
 * *  FILE NAME    : asiign5.c
 * *
 * *  DESCRIPTION  : This file contents an application of command line arguments
 * *
 * *  DATE     		NAME    	REFERENCE          REASON
 * *
 * *  08-NOV-2022	ANNAYASHA	DAY013		Command Line Arguments
 * *
 * *  Copyright 2010, Aricent Technologies (Holdings) Ltd
 * *
 * *****************************************************************************/

/*******************************************************************************
 * *                       Header Files
 * *****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*************************************************************************
 * *                       LOCAL FUNCTIONS
 * ***********************************************************************/
int getWords(char *, char*, char *);
int validSName(char *);
int validPNum();
void concatSName(char *, char *, int );

/******************************************************************************
 * *
 * *       Function Name  : main
 * *       Description    : main method of the program	
 * *       Returns        : SUCCESS 
 * *
 * *******************************************************************************/
int main(int argc, char *argv[])
{
	int i, cwords=0, retValue=0;
	char servNames[10][100] = { '\0',};
	char portNums[10][10] = {'\0',};
	char cSNames[100] = {'\0', };

	if(argc <= 1)
	{
		printf("\nUsage: ./app serverName1:port1 serverName2:port2 ....\n");
		exit(EXIT_FAILURE);
	}

	for(i=1, cwords=0;i<argc;i++,cwords++)
	{
		retValue = getWords(servNames[cwords], portNums[cwords], argv[i]);
		if(retValue == 1)
			cwords--;

	}

	for(i=0;i<cwords;i++)
	{
		printf("\n%s",servNames[i]);
		if(i==cwords-1)
		{

			concatSName(servNames[i], cSNames, 0);
		}
		else
			concatSName(servNames[i], cSNames, 1);	
	}
	printf("\n%s",cSNames);

	printf("\n\n");
	return 0;
}

/******************************************************************************
 * *
 * *       Function Name  : getWords
 * *       Description    : getting words in the arguments
 * *			 
 * *       Returns        : SUCCESS 
 * *
 * *******************************************************************************/
int getWords(char *sNames, char *pNums, char *argv)
{
	char *tokens;

	tokens = strtok(argv, ":");
	if(validSName(tokens) == 0)
	{
						
		return 1;
	}
	strcpy(sNames,tokens);


	tokens = strtok(NULL, ":");
	if(validPNum(tokens) == 0)
	{
		return 1;
	}
	if((atoi(tokens)>=0)&&(atoi(tokens)<=1023))
		strcpy(pNums, tokens);
	else
	{	
		return 1;
	}
									
	return 0;
}

/******************************************************************************
 * *
 * *       Function Name  : validSName
 * *       Description    : valid the server name
 * *       Returns        : SUCCESS 
 * *
 * *******************************************************************************/
int validSName(char *sName)
{
	int size = 0, i;
	int flag = 0;
	if(sName != NULL)
	{
		size = strlen(sName);
		for(i=0;i<size;i++)
		{
			if(isalpha(sName[i])== 0)
			{
				flag = 1;
				break;
			}
		}
	}
	else
		flag = 1;

	if(flag == 1)
		return 0;
	return 1;		
}

/******************************************************************************
 * *
 * *       Function Name  : validPNum
 * *       Description    : valid the port number
 * *       Returns        : SUCCESS 
 * *
 * *******************************************************************************/
int validPNum(char *pNum)
{
	int size = 0, i;
	int flag = 0;
	if(pNum != NULL)
	{
		size = strlen(pNum);
		for(i=0;i<size;i++)
		{
			if(isdigit(pNum[i])== 0)
			{
				flag = 1;
				break;
			}
		}
	}
	else
		flag = 1;

	if(flag == 1)
		return 0;
	return 1;
}

/******************************************************************************
 * *
 * *       Function Name  : concatSName
 * *       Description    : concat the server name
 * *       Returns        : SUCCESS
 * *
 * *******************************************************************************/
void concatSName(char *sNames, char *cSNames, int n)
{
	int i;
	strcat(cSNames, sNames);
	if(n == 1)
		strcat(cSNames,"_");

}
