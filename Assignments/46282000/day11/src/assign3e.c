/*******************************************************************************************************************************************
 * * FILENAME : assign3e.c
 * * 
 * * DESCRIPTION : This file defines to read a line of text of max length 80 from user, and perform the required operations mentioned below.
 * *
 * * REVISION HISTORY :
 * * DATE                      NAME                            REFERENCE                         REASON
 * * -----------------------------------------------------------------------------------------------------------------------------------------
 * * 05 Nov 2022              ABHILIPSA SWAIN                   NEW                              NEW CODE TO PERFORM OPERATIONS
 * *
 * *******************************************************************************************************************************************/

#include "common.h"

/********************************************************************************************************************************************
 * * FUNCTION NAME : countstring()
 * * 
 * * DESCRIPTION : It counts the number of string characters
 * *
 * * RETURNS : SUCCESS and in case of failure ERROR
 * *
 * *****************************************************************************************************************************************/

void countstring(char *str)
{
	int count = 0;
	char* token = strtok(str, " ");
	while(token != NULL)
	{
		count++;
		token = strtok(NULL, " ");
	}
	printf("Number of words: %d\n", count);
}

/*******************************************************************************************************************************************
 * * FUNCTION NAME : search_replace()
 * *
 * * DESCRIPTION : It searches for a particular character and replaces it with another
 * * 
 * * RETURNS : SUCCESS and in case of failure ERROR
 * *
 * ****************************************************************************************************************************************/

int search_replace(char **str, char *search, char *replace)
{
	int i;
	for(i = 0; str[i] != NULL; i++)
	{
		if(strcmp(str[i], search) == 0)
		{
			printf("%s%s\n", str[i], search);
			str[i] = replace;
			return EXIT_SUCCESS;
		}
	}
	return EXIT_FAILURE;
}

/****************************************************************************************************************************************
 * * FUNCTION NAME : printWords()
 * *
 * * DESCRIPTION : It prints the words of the string
 * *
 * * RETURNS : SUCCESS and in case of failure ERROR
 * *
 * *************************************************************************************************************************************/

void printWords(char** words)
{
	int i;
	for(i = 0; words[i] != NULL; i++)
		printf("%s\n", words[i]);
}

/***************************************************************************************************************************************
 * * FUNCTION NAME : free_all()
 * *
 * * DESCRIPTION : It free the allocated memory
 * *
 * * RETURNS : SUCCESS and in case of failure ERROR
 * *
 * ************************************************************************************************************************************/

void free_all(char * ptr)
{
	free(ptr); /*Free the allocated memory */
}

/**************************************************************************************************************************************
 * * FUNCTION NAME : main()
 * * 
 * * DESCRIPTION : All the above functions are called here
 * *
 * * RETURNS : SUCCESS and in case of failure ERROR
 * *
 * ***********************************************************************************************************************************/

int main()
{
	char text[81];
	char **words;
	int n = 0;
	char search[81];
	char replace[81];
	printf("Enter a line of text(max 80 characters): ");
	fgets(text, sizeof(text), stdin);
	char sub1[81];
	strcpy(sub1, text);
	words = (char **)malloc(sizeof(char *));
	char *p = strtok(text, " ");
	while(p)
	{
		n++;
		words = (char **)realloc(words, n * sizeof(char *));
		words[n - 1] = p;
		p = strtok(NULL, " ");
	}
	countstring(sub1);
	fgets(search, sizeof(search), stdin);
	fgets(replace, sizeof(replace), stdin);
	printf("%d\n", search_replace(words, search, replace));
	printWords(words);
	free_all(sub1);
	return 0;
}
