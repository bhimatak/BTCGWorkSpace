/*****************************************************************************************************************
 * * FILENAME : assign2b.c
 * *
 * * DESCRIPTION : This file contains functions to perform given operations in a sentence
 * *
 * * REVISION HISTORY:
 * * DATE              NAME                       REFERENCE                       REASON
 * * --------------------------------------------------------------------------------------------------------------
 * * 3 Nov 2022    Nadigatla Parimala Rani                 NEW                         New Code To perform given operations
 * *
 * * **************************************************************************************************************/
#include <common.h>

#define MAX_BUFF 1024      /*defining MAX_BUFF using macros*/


/****************declaring functions**********************/
char *getLine(char *);
int getWords(char **, char *);

void displayWords(char **, int, int);

int LWord(char **, int); 
int RepSubStr(char *);
void dispWordsch(char *, char );

/************************************************************************************************
 * * FUNCTION NAME : main()
 * *
 * * DESCRIPTION : This function calls other defined functions to perform the given operations
 * *
 * * RETURNS : SUCCESS in case of failure ERROR
 * * **************************************************************************************************/
int main()
{
	char *Line = NULL; //[100] = {'\0', };
	char *tempLine=NULL;
	char **Words=NULL;//[30][100] = {'\0', };
	int i, NofWords=0;
	int lWord=0;
	
	char **tempWords=NULL;//[30][100];
	


	//allocate mem reqd vaiables

	Line = (char *)malloc(100);
	tempLine = (char *)malloc(100);
	
	Words = (char **)malloc(100);
	for(i=0;i<100;i++){
		Words[i] = (char *)malloc(100);
		memset(Words[i],'\0', 100);
	}

	tempWords = (char **)malloc(100);
	for(i=0;i<100;i++){
		tempWords[i] = (char *)malloc(100);
		memset(tempWords[i],'\0', 100);
	}


	
	if(getLine(Line)==NULL){
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

/************************************************************************************************
 * * FUNCTION NAME : getLine()
 * *
 * * DESCRIPTION : This function accepts a sentence from user
 * *
 * * RETURNS : SUCCESS in case of failure ERROR
 * * **************************************************************************************************/
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

/************************************************************************************************
 * * FUNCTION NAME : getWords()
 * *
 * * DESCRIPTION : This function prints one word in a line of a sentence
 * *
 * * RETURNS : individual words in new line ,in case of failure ERROR
 * * **************************************************************************************************/
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

/************************************************************************************************
 * * FUNCTION NAME : displayWords()
 * *
 * * DESCRIPTION : This function prints words without whitespace
 * *
 * * RETURNS : words without whitespace ,in case of failure ERROR
 * * **************************************************************************************************/
void displayWords(char **Words, int NofWords, int flag)
{
	int i;
	 
	
	if(flag == 1){
		printf("\nWords Without WhiteSpaces are,\n");
		for(i=0;i<NofWords;i++){

			printf("%s",Words[i]);
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

/************************************************************************************************
 * * FUNCTION NAME : LWord()
 * *
 * * DESCRIPTION : This function contains code to calculate size of longest word
 * *
 * * RETURNS : size of longest word ,in case of failure ERROR
 * * **************************************************************************************************/
int LWord(char **Words, int NofWords)
{
	int i, lWord = 0;
	int tsize=0;

	for(i=0;i<NofWords;i++)
	{
		tsize = strlen(Words[i]);
		if(lWord < tsize)
			lWord = tsize;
	}

	return lWord;
}


/************************************************************************************************
 * * FUNCTION NAME : RepSubStr()
 * *
 * * DESCRIPTION : This function prompts and read a substring and print the first word containing that substring
 * 		   then displays the sentence without that word
 * *
 * * RETURNS : SUCCESS in case of failure ERROR
 * * **************************************************************************************************/
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
	return 0;
}

/************************************************************************************************
 * * FUNCTION NAME : dispWordsch()
 * *
 * * DESCRIPTION : This function replaces all the whitespace with '!' 
 * *
 * * RETURNS : the number of replacement done ,in case of failure ERROR
 * * **************************************************************************************************/
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