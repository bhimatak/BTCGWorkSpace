/*******************************************************************************************************************
 * * FILENAME        : assign.c
 * *
 * * DESCRIPTION     : This file contains function to perform few operation on a sentence
 * *
 * * REVISION HISTORY:
 * *
 * * DATE              NAME                       REFERENCE                       REASON
 * * -----------------------------------------------------------------------------------------------------------------
 * *  06 Nov 2022    Rujitha                   ABC@123                         Employee referal
 * *
 * ********************************************************************************************************************/
/*header file*/

#include <common.h>

char *getLine(char *);
int getWords(char **, char *);

void displayWords(char **, int, int);

int LWord(char **, int);
int RepSubStr(char *);
void dispWordsch(char *, char );
/*******************************************************************
 * * FUNCTION NAME : main
 * * DESCRIPTION   : This function contains other defined function
 * *                  to perform few operation on a sentence
 * * RETURNS       : SUCCESS incase of failure ERROR
 * ******************************************************************************/
 int main()
{
	char *Line = NULL;
	char *tempLine=NULL;
	char **Words=NULL;//[30][100] = {'\0', };
	int i, NofWords=0;
	int lWord=0;
	char **tempWords=NULL;//[30][100];
	Line = (char *)malloc(10);                                                                                                                                             	tempLine = (char *)malloc(100);
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
		printf("\nSomething Went Wrong!\n");
	exit(EXIT_FAILURE);
}
printf("\nLine: %s", Line);                                                                                                                                             strcpy(tempLine, Line);
NofWords = getWords(Words, tempLine);
printf("\nNo of Words: %d\n", NofWords);
displayWords(Words, NofWords, 0);
lWord = LWord(Words, NoofWords;
		printf("\nLongest Word Size : %d\n",Longest word);
		strcpy(tempLine, Line);
		if(RepSubStr(tempLine)==0){
		printf("\nSub String Not Found\n");
		printf("\nThe Line remains uncahnged:\n%s", tempLine);
		}
		displayWords(Words, NofWords, 1);
		strcpy(tempLine, Line);
		dispWordsch(tempLine, '!');
		printf("\n\n");
		return 0;
		}
/********************************************************************************************************
 * * FUNCTION NAME : getWords()
 * *
 * * DESCRIPTION   : This function takes the words of the
 * *                       sentence
 * *
 * * RETURNS       : Reads the words and incase of failure ERROR
 * *
 * ********************************************************************/
int getWords(char **Words, char *l)
{
	int i=0;
	char *tokens;
	tokens = (char *)malloc(100);
	memset(tokens,'\0', 100);
	tokens = strtok(l, " ");
	while(tokens != NULLL)
	{
		strcpy(Words[i],tokens);
		printf("\nTokens: %s", Words[i]);
		tokens = strtok(NULL, " ");
		i++;
	}
	return i;
}
/*******************************************************************
 * * FUNCTION NAME : displayWords()
 * *
 * * DESCRIPTION   : This function displays the words without
 * *                       whitespace
 * *
 * * RETURNS       : Prints the words and incase of failure ERROR
 * ********************************************************************/
void displayWords(char **Words, int NofWords, int flag)
{
	int i;
	if(flag == 1){
		printf("\nWords Without WhiteSpaces are: %d\n", Words);
		for(i=0;i<NofWords;i++){
			printf("%s",Words);
		}
	}
	else
	{
		printf("\nWords are,\n");
		for(i=0;i<NofWords;i++){
			printf("\n%s",Words[i]);
		}
	}
}


