/*************************************************************************
 *  
 * FILE NAME    : assign3e.c
 *    
 * DESCRIPTION  : Extract first name and last name from 2D Array
 *      
 * DATE      		NAME   		 REFERENCE          REASON
 *        
 * 06 NOV 2022  	ANNAYASHA    	  DAY11      	Dynamic Memory allocation
 *      
 * Copyright 2010, Aricent Technologies (Holdings) Ltd
 *            
 *************************************************************************/

/*************************************************************************
 *                               HEADER FILES
 *************************************************************************/
#include <common.h>

/*************************************************************************
 * *                               MACROS
 * *************************************************************************/
#define MAX_LEN 80

/******************************************************************
 * *
 * *       Function Name   : countWords
 * *       Description     : count the number of words in a string
 * *       Returns         : Success 
 * *
 * ****************************************************************/
int countWords(char* str)
{
	int count = 0;
	char* token=strtok(str," ");
	while(token != NULL)
	{
		count ++;
		token=strtok(NULL, " ");
	}
	printf("Count of words: %d\n",count);
}

/******************************************************************************
 * *
 * *       Function Name   : searchReplace
 * *       Description     : search words for replace
 * *       Returns         : Success 
 * *
 * *******************************************************************************/
int searchReplace(char **str, char *search, char *replace)
{
	int i;
	for(i=0; str[i]!=NULL; i++)
	{
		if(strcmp(str[i],search)==0)
		{
			printf("%s%s\n",str[i],search);
			str[i]=replace;
			return EXIT_SUCCESS;
		}
	}
	return EXIT_FAILURE;
}

/******************************************************************************
 * *
 * *       Function Name   : printWords
 * *       Description     : display the words which stored
 * *       Returns         : Success 
 * *
 * *******************************************************************************/
void printWords(char** words)
{
	int i;
	for(i=0;words[i]!=NULL;i++)
		printf("%s\n",words[i]);
}

/******************************************************************************
 * *
 * *       Function Name   : freeAll
 * *       Description     : free all the allocated memory
 * *       Returns         : Success 
 * *
 * *******************************************************************************/
void freeAll(char* ptr)
{
	free(ptr);
}

/******************************************************************************
 * *
 * *       Function Name   : main
 * *       Description     : main method of the program
 * *       Returns         : Success 
 * *
 * *******************************************************************************/
int main()
{
	char str[80];
	char **words;
	int n=0;
	char search[80];
	char replace[80];
	printf("Enter the string: ");
	fgets(str, sizeof(str), stdin);
	char sub1[80];
	strcpy(sub1,str);
	words=(char **)malloc(sizeof(char *));
	char *p=strtok(str," ");
	while(p)
	{
		n++;
		words=(char **)realloc(words, n * sizeof(char *));
		words[n-1]=p;
		p=strtok(NULL," ");
	}
	countWords(sub1);
	fgets(search,sizeof(search),stdin);
	fgets(replace,sizeof(replace),stdin);
	printf("%d\n",searchReplace(words,search,replace));
	printWords(words);
	freeAll(sub1);

	printf("\n");
	return 0;
}
