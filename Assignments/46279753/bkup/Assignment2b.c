#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdlibh>
#define MAX_BUFF 1024

char *getLine(char *);
int getWords(char**, char *);
// void trim(char *);

int sizeofLword(char**, int);

int main()
{

	//char *Line = NULL;
	char Line[100]="This is a c programming Class";
	char **Word = NULL;
	//char Words[30][30];
	char *findStr;
	char tempLine[100];
	char sstr[30];
	int NofWords = 0, i;

	words = (char **)malloc(30);
	for(i=0;i<30;i++)

		Words[i]= (char *)malloc(30);
        /*if(getLine(Line)==NULL){
	        printf("\nSomething Went Wrong!\n");
	       exit(EXIT_FAILURE);
	       }*/
	printf("\nLine : %s\n",Line);
	strcpy(tempLine, Line);
	NofWords = getwords(Words, tempLine);

	printf("\nNo of Words : %d", NofWords);
	for(i=0;i<NofWords;i++)
		printf("\n%s",Words[i]);
	printf("\nSize of the longest word=%d\n",SizeOfLWord(Words, NofWords));
	printf("\nEnter the substring to be found :");
	scanf("%s",sstr);
	printf("\nLine:%s", Line);

