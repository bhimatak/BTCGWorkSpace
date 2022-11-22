#include <common.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_BUFF 1024

char *getLine(char *);
int getWords(char **, char *);
//void trim(char *);

int SizeOfLWord(char **, int); 

int main()
{
	//char *Line = NULL;
	char Line[100] = "This is a C Programming Class";
	char **Words = NULL;
	//char Words[30][30];
	char *findStr;
	char tempLine[100];
	char sstr[30];
	int NofWords = 0, i;

	
	Words = (char **)malloc(30);
	for(i=0;i<30;i++)
		Words[i] = (char *)malloc(30);

	
	/*if(getLine(Line)==NULL){
		printf("\nSomething Went Wrong!\n");
		exit(EXIT_FAILURE);
	}*/

	printf("\nLine : %s\n", Line);
	strcpy(tempLine, Line);
	NofWords = getWords(Words, tempLine);
	
	printf("\nNo of Words : %d", NofWords);
	for(i=0;i<NofWords;i++)
		printf("\n%s",Words[i]);
	
	printf("\nSize of the longest Word=%d\n",SizeOfLWord(Words, NofWords));

	printf("\nEnter the SubString to be found: ");
	scanf("%s",sstr);
	printf("\nLine: %s", Line);
	//strcpy(Line, "This is a C Programming Class");
	findStr = strstr(Line,sstr);
	printf("\nString: %s",findStr);
	if(findStr == NULL)
		printf("\nString not found");
	else
		printf("\nString Found");

	printf("\n\n");
	return 0;
}

char *getLine(char *Line)
{
	bzero(Line,MAX_BUFF);
	if(fgets(Line, MAX_BUFF, stdin)){
		Line[strlen(Line)-1] = '\0';
		if(strlen(Line)==0)
			return NULL;
	}
	else
		return NULL;
	return Line;


}

int getWords(char **Words, char *Line)
{
	int i;
	char *tokens =NULL;//[30]={'\0',};
	tokens = (char *)malloc(30);

	tokens = strtok(Line," ");
	i=0;
	printf("\n%s",tokens);
	
	while(tokens != NULL)
	{
		// trim(Words[i]);
		printf("\n%s",tokens);
		strcpy(Words[i],tokens);
		
		 tokens = strtok(NULL, " ");
		i++;
	}

	return i;
}

/*
void trim(char *Word)
{
	int count=0, noWSL=0, noWSR=0,i;
	char tempWord[30] = {'\0', };
	for(i=0;i<strlen(Word);i++)
	{
		if(isspace(Word[i]))
		{
			noWSL++;
		}
	}
	printf("\nLWS: %d", noWSL);
}
*/

int SizeOfLWord(char **Words, int NofWords)
{
	int lSize = 0;
	int i;
	for(i=0;i<NofWords;i++)
	{
		if(lSize < strlen(Words[i]))
			lSize = strlen(Words[i]);

	}

	return lSize;
}

