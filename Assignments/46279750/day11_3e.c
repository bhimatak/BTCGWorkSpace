/**************************************************************************************************************
 * * FILE NAME : day11_3e.c
 * *
 * * DESCRIPTION :This file defines to read a line of text of max length 80 from user, to extract the words, 
 *                     store them in double pointer d allocating memory and perform the certain operations. 
 * *
 * * Revision History:
 * * DATE            NAME                       REFERENCE                           REASON
 * *
 * * 05 OCT 2022    SAAHERA                      NEW                               New Code to Perform Function
 * *
 * * Copyright 2022 Altran Group All Rights Reserved
 * *
 * *****************************************************************************************************************
 *                                      STANDARD HEADER FILES
 * *****************************************************************************************************************/                                      
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*****************************************************************************************************************
 * *
 * * FUNCTION NAME : access_array with pointer 
 * *
 * * DESCRIPTION : access elements in array and perform certain operations
 * *
 * * RETURN: SUCCESS or FAILURE
 * */
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
int search_replace(char **str, char *search, char *replace)
{
	int i;
	for (i = 0; str[i] != NULL; i++)
	{
		if (strcmp(str[i], search) == 0)
		{
			printf("%s%s\n",str[i],search);
			str[i] = replace;
			return EXIT_SUCCESS;
		}
	}
	return EXIT_FAILURE;
}
void printWords(char** words)
{
	int i;
	for (i = 0; words[i]!= NULL; i++)
		printf("%s\n", words[i]);
}
void free_all(char* ptr)
{
	free(ptr); /* Free the allocated memory */
}
/*************************************************************************************************
 * *
 * * FUNCTION NAME: main
 * *
 * * DESCRIPTION: This funtin calls the array and perform operations on pointer
 * *
 * * RETURN: SUCCESS or FAILURE
 * **********************************************************************************************/
int main()
{
	char text[81];
	char **words;
	int n = 0;
	char search[81];
	char replace[81];
	printf("Enter a line of text (max 80 characters): ");
	fgets(text, sizeof(text), stdin);
	char sub1[81];
	strcpy(sub1,text);
	words = (char **)malloc(sizeof(char *));
	char *p = strtok(text, " ");
	while (p)
	{
		n++;
		words = (char **)realloc(words, n * sizeof(char *));
	        words[n - 1] = p;
		p = strtok(NULL, " ");
	}
	countstring(sub1);
	fgets(search, sizeof(search), stdin);
	fgets(replace, sizeof(replace), stdin);
	printf("%d\n",search_replace(words,search,replace));
	printWords(words);
	free_all(sub1);
	return 0;
}




