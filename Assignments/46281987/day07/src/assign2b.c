/*************************************************************************
 * *
 * *  FILE NAME    : assign2b.c
 * *
 * *  DESCRIPTION  : Perform String Operation in array
 * *
 * *  DATE      	NAME    	REFERENCE          REASON
 * *
 * *  05-NOV-2022 	ANNAYASHA   	DAY07		String Operation
 * *
 * *  Copyright 2010, Aricent Technologies (Holdings) Ltd
 * *
 * **************************************************************************/


/*************************************************************************
 * *                               HEADER FILES
 * *************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*************************************************************************
 * *                               MACROS
 * *************************************************************************/

#define MAX_BUFF 1024

char *getLine(char *);
int getWords(char **, char *);

void displayWords(char **, int, int);

int LWord(char **, int); 
int RepSubStr(char *);
void dispWordsch(char *, char );

/******************************************************************************
 * *
 * *  Function Name   : main
 * *  Description     : main method of the program
 * *  Returns         : Success
 * *
 * *******************************************************************************/

int main()
{
	char *Line = NULL; //[100] = {'\0', };
	char *tempLine=NULL;
	char **Words=NULL;//[30][100] = {'\0', };
	int i, NofWords=0;
	int lWord=0;
		
	char **tempWords=NULL;//[30][100];
	char *tokens;


	Line = (char *)malloc(100);
	tempLine = (char *)malloc(100);
				
	Words = (char **)malloc(100);
	for(i=0;i<100;i++)
	{
		Words[i] = (char *)malloc(100);
		memset(Words[i],'\0', 100);
	}

	tempWords = (char **)malloc(100);
	for(i=0;i<100;i++)
	{
		tempWords[i] = (char *)malloc(100);
		memset(tempWords[i],'\0', 100);
	}
	if(getLine(Line)==NULL)
	{
		printf("\nSomething Went Wrong!\n");
		exit(EXIT_FAILURE);
	}

	printf("\nLine: %s", Line);
			

	strcpy(tempLine, Line);
				
	NofWords = getWords(Words, tempLine);
	printf("\nNo of Words: %d\n", NofWords);
	displayWords(Words, NofWords, 0);
							

	lWord = LWord(Words, NofWords);

	printf("\nLongest Word Size : %d", lWord);

	strcpy(tempLine, Line);
										
	if(RepSubStr(tempLine)==0)
	{
		printf("\nSub String Not Found\n");	
		printf("\nThe Line remains uncahnged:\n%s", tempLine);												
	}

	displayWords(Words, NofWords, 1);
	strcpy(tempLine, Line);													

	dispWordsch(tempLine, '!');
	printf("\n\n");

	return 0;
}

/******************************************************
 * *
 * * Function Name   : getLine
 * * Description     : display the line from the user
 * * Returns         : Success 
 * *
 * *****************************************************/

char *getLine(char *l)
{
	char *pos;
	fgets(l,1024, stdin);
	if ((pos=strchr(l, '\n')) != NULL) 
		*pos = '\0';
	if(strlen(l)==0)
		return NULL;

	return l;
}

/******************************************************
 * 
 * Function Name   : getWords
 * Description     : print each word in a single line
 * Returns         : Success
 *     
 * **************************************************/

int getWords(char **Words, char *l)
{
	int i=0;
	char *tokens;

	tokens = (char *)malloc(100);
	memset(tokens,'\0', 100);
	tokens = strtok(l, " ");

	while(tokens != NULL)
	{
		strcpy(Words[i],tokens);
		printf("\nTokens: %s", Words[i]);					

		tokens = strtok(NULL, " ");
		i++;

	}

	return i;
}

/******************************************************
 *  
 * Function Name   : displayWords
 * Description     : display line without whitespaces
 * Returns         : Success
 *    
 ******************************************************/

void displayWords(char **Words, int NofWords, int flag)
{
	int i;
			 
			
	if(flag == 1){
		printf("\nWords Without WhiteSpaces are,\n");
		for(i=0;i<NofWords;i++)
		{
			printf("%s",Words[i]);
		}
	}
	else
	{
		printf("\nWords are,\n");
		for(i=0;i<NofWords;i++)
		{

			printf("\n%s",Words[i]);																	}	
	}
}

/*********************************************************
 * 
 * Function Name   : LWord
 * Description     : display the longest word in the line
 * Returns         : Success
 *      
 *********************************************************/

int LWord(char **Words, int NofWords)
{
	int i, lWord = 0;
	int tsize=0;

	for(i=0;i<NofWords;i++)
	{
		tsize = strlen(Words[i]);
		if(lWord < tsize)
		{	
			lWord = tsize;
		}
	}
	return lWord;
}

/*************************************************************
 *  
 * Function Name   : RepSubStr
 * Description     : remove specify word and display the line
 * Returns         : Success
 *      
 * ***********************************************************/

int RepSubStr(char *tempLine)
{

	char subStr[20];
	int len_front=0;
	char *tokens;
	char Line[100];
	char *tmp=NULL;

	strcpy(Line, tempLine);

	tokens = (char *)malloc(100);
	memset(tokens,'\0', 100);

	printf("\nEnter Sub String to be searched: ");
	scanf("%s", subStr);

	tokens =  strstr(tempLine, subStr);
	if(tokens == NULL)
		return 0;
	len_front = tokens - tempLine;
	memmove(tokens, tokens + strlen(subStr)+1, strlen(tokens + 0) + 1);															
	tmp = (char *)malloc(100);
	memset(tmp,'\0',100);
	strncpy(tmp, Line, len_front);														
	strcat(tmp, tokens);			

	printf("\nLine after removing %s\n%s\n",subStr, tmp);
}

/*****************************************************************************
 *  
 * Function Name   : dispWordsch
 * Description     : Write a function to replace all the whitespaces with "!" 
 * Returns         : Success
 *      
 *****************************************************************************/

void dispWordsch(char *tempLine, char ch)
{
	char *tokens;
	tokens = (char *)malloc(100);
	memset(tokens,'\0', 100);

	tokens = strtok(tempLine, " ");
	printf("\nLine is with ! marks instead of white spaces\n");
	while(tokens != NULL)
	{

		printf("%s", tokens);
		tokens = strtok(NULL, " ");
		if(tokens != NULL)
			printf("%c",ch);
		else					
			continue;																		
	}
}


