#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_BUFF 512

int StrSortAsc(char *[], int);
char ** copyStr(char **, char**, int);
void displayStr(char **, int);


int main(int argc, char *argv[])
{
	char **Names = NULL;
	char **srcStr = NULL;
	int i,j;

	Names = (char **)malloc(50); // we are allocating rows first
	
	for(i=0;i<50;i++)
		Names[i] = (char *)malloc(100);
	if(copyStr(argv, Names, argc)!=NULL){
	
		printf("\nBefore Sorting\n");
		
		displayStr(Names, argc);
		printf("\n\n");
		StrSortAsc(Names, argc);
		printf("\nAfter Sorting\n");
		displayStr(Names, argc);
	}
	else
		printf("\nSource String is Empty\n");

	printf("\n\n");
	return 0;
}


int StrSortAsc(char *name[], int n)
{
	int i,j;
	char strTemp[MAX_BUFF] = {'\0', };

	for (i = 0; i < n - 1 ; i++)
        {
        	bzero(strTemp, MAX_BUFF);
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(name[i], name[j]) > 0) 
                {
                    strcpy(strTemp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], strTemp);
                }
            }
        }
}


char ** copyStr(char **srcStr, char**descStr, int Cap)
{
	int i;
	if(srcStr == NULL){
		
		return NULL;
	}
	for(i=1;i<Cap;i++)
		bzero(descStr[i],100);
	for(i=1;i<Cap;i++)
		strcpy(descStr[i-1],srcStr[i]);
		
	

	return descStr;
}

void displayStr(char *Names[], int count)
{
	int iv;
	printf("\nNames are, \n");
	for(iv = 0; iv<count;iv++)
		printf("\n%s",Names[iv]);

}


