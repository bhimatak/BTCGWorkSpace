/****************************************************************************************
 * * 
 * * FILE NAME     : day113e.c
 * *
 * * DESCRIPTION   : This file defines to read a line of text of max length 80 from user, t
 * *                 o extract the words, store them in double pointer dynamically allocating
 * *                  memory and perform the certain operations.
 * *
 * * Revision History:
 * * DATE		NAME			REFERENCE		REASON
 * * 05-11-2022         Vasanthi                  New                   new code to perform
 * *									functions
 * *
 * * Copyright 2022, Altran Group All Rights Reserved
 * *
 * **************************************************************************************
 * *				STANDARD HEADER FILES
 * ***************************************************************************************/
#include<common.h>
/******************************************************************************************
 * *
 * * FUNCTION NAME : countstring
 * *
 * * DESCRIPTION   : to display the no. of words in a line
 * *
 * * RETURNS       : SUCCESS or FAILURE
 * ***************************************************************************************/
void countstring(char *str)
{
	int count = 0;/*initializing value to count words*/
	char* token = strtok(str, " ");/*token initialization*/
	while(token != NULL)/*if token is not  NULL*/
	{
		  count++;/*incrementing the count*/
		  token = strtok(NULL, " ");/*value assigning to token*/
	}
	printf("Number of words: %d\n", count);/*prints the no. of words in a line*/
}
/******************************************************************************************
 * *
 * * FUNCTION NAME : search_replace
 * *
 * * DESCRIPTION   : to replace the search string with new string
 * *
 * * RETURNS       : SUCCESS or FAILURE
 * *****************************************************************************************/
int search_replace(char **str, char *search, char *replace)
{
	int i;/*initialize value to search string*/
	for (i = 0; str[i] != NULL; i++)/*traverse the loop through the words*/
	{
		if (strcmp(str[i], search) == 0)/*string comparison whether the word is present*/
		{
			printf("%s%s\n",str[i],search);/*reads the sesrch string*/
			str[i] = replace;/*replace the string with new*/
			return EXIT_SUCCESS;/*returns SUCCESS*/
		}
	}
	return EXIT_FAILURE;/*returns FAILURE*/
}
/************************************************************************************************
 * *
 * * FUNCTION NAME : printWords
 * *
 * * DESCRIPTION  : prints the words in a line
 * *
 * * RETURNS      : SUCCESS or FAILURE
 * *********************************************************************************************/
void printWords(char** words)
{
	int i;/*initialize i value*/
	for (i = 0; words[i]!= NULL; i++)/*traverse through the line*/
		printf("%s\n", words[i]);/*prints the words*/
}
/***********************************************************************************************
 * *
 * * FUNCTION NAME : free_all
 * *
 * * DESCRIPTION   : function to free all the allocated memory
 * *********************************************************************************************/
void free_all(char* ptr)
{
	free(ptr);/*frees the allocated memory*/
}
/***********************************************************************************************
 * *
 * * FUNCTION NAME : main
 * *
 * * DESCRIPTION   : this function carry out all the operations mentioned here
 * *
 * * RETURNS       : SUCCESS or FAILURE
 * *********************************************************************************************/
int main()
{
	char text[81];/*intialize the text with max 81 characters*/
	char **words;/*initializing the words with char type*/
	int n = 0;/*value assigning with 0*/
	char search[81];/*search of 81 characters*/
	char replace[81];/*replace of 81 characters*/
	printf("Enter a line of text (max 80 characters): ");/*asks the user to print 81 characters*/
	fgets(text, sizeof(text), stdin);/*prints the characters*/
	char sub1[81];/*substring of line*/
	strcpy(sub1,text);/*copying of text to sub1*/
	words = (char **)malloc(sizeof(char *));/*size allocation to memory*/
	char *p = strtok(text, " ");/*pointer intiliaze to text*/
	while (p)
	{
		n++;/*incrementing the words*/
		words = (char **)realloc(words, n * sizeof(char *));/*words reallocating*/
		words[n - 1] = p;/*assigning to pointer*/
		p = strtok(NULL, " ");/*token assigning to NULL*/
	}
	countstring(sub1);/*string count*/
	fgets(search, sizeof(search), stdin);/*search the words*/
	fgets(replace, sizeof(replace), stdin);/*replace the word*/
	printf("%d\n",search_replace(words,search,replace));/*prints the replaced words*/
	printWords(words);/*words print*/
	free_all(sub1);/*free up memory*/
	return 0;
}
