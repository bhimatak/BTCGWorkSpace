#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	char Line[100] = {'\0', };
	char tempLine[100];
	char Words[30][100] = {'\0', };
	int i, NofWords=0;
	int lWord=0;
	int tsize=0;
	char tempWords[30][100];
	char *tokens;
	int len_front=0;


	fgets(Line,1024,stdin);
	Line[strlen(Line)-1] = '\0'; //bug is fgets for last char with enter key
	printf("\nLine: %s", Line);
	strcpy(tempLine, Line);
	i=0;

	tokens = strtok(tempLine, " ");

	while(tokens != NULL)
	{
		strcpy(Words[i],tokens);
		tokens = strtok(NULL, " ");
		i++;
	}
	NofWords = i;
	printf("\nNo of Words: %d\n", NofWords);

	printf("\nWords are,\n");
	for(i=0;i<NofWords;i++)
		printf("\n%s",Words[i]);

	lWord = 0;

	for(i=0;i<NofWords;i++)
	{
		tsize = strlen(Words[i]);
		if(lWord < tsize)
			lWord = tsize;
	}
	printf("\nLongest Word Size : %d", lWord);
	printf("\nEnter Sub String to be searched: ");
	char subStr[20];
	scanf("%s", subStr);
	strcpy(tempLine, Line);
	tokens =  strstr(tempLine, subStr);
	
	len_front = tokens - tempLine;
	memmove(tokens, tokens + strlen(subStr)+1, strlen(tokens + 0) + 1);
	printf("\n\nTokens:%s", tokens);
	
	printf("\nlen=%d ",len_front );
	char *tmp=NULL;
	tmp = (char *)malloc(100);
	
	memset(tmp,'\0',100);
	strncpy(tmp, Line, len_front);
	strcat(tmp, tokens);
	
	printf("\ntmp%s",tmp);
	

	printf("\nWords are,\n");
	for(i=0;i<NofWords;i++)
		printf("%s",Words[i]);

	strcpy(tempLine, Line);
	tokens = strtok(tempLine, " ");
	printf("\nLine is with ! marks instead of white spaces\n");
	while(tokens != NULL)
	{
		printf("%s", tokens);

		tokens = strtok(NULL, " ");
		if(tokens != NULL)
			printf("!");
		else
			continue;
		i++;
	}

	printf("\n\n");

	return 0;


}