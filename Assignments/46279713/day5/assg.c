#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_BUFF 1024
char *getLine(char *);
int *getWords(char **, char *);
int main()
{
	    char *Line =NULL;
	    char **Words=NULL;
	    int Noofwrds=0,i;
	    Line=(char *)malloc(MAX_BUFF);
	    Words=(char **)malloc(30);
	    for(i=0;i<30;i++)
		    Words[i]=(char *)malloc(50);
	    if(getLine(Line==NULL)) {
		printf("\n something went wrong!\n");
                exit(EXIT_FAILURE);
	       	}
	    printf("\nLine: %s\n", Line);
	    Noofwrds=getWords(Words,Line);
	    printf("\n no of words : %d" , Noofwrds);
	    for(i=0;i<Noofwrds;i++)
	    printf("\n%s", Words[i]);     
	    printf("\n\n");
	    return 0;
}
char *getLine(char *Line)
{
	bzero(Line,MAX_BUFF);
	if (fgets(Line, MAX_BUFF, stdin))
	{
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
	char *tokens;
	tokens=strtok(Line," ");
	i=0;
	while(tokens !=NULL)
	{
		strcpy(Words[i] ,tokens);
		tokens=strtok(NULL, " ");
		i++;
	}
	return i;
}
		

