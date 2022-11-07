/*************************************************************************************************************
 * * FILE NAME: Day11.c
 * * 
 * * DESCRIPTION: This file defines to read a line of text of max length 80 from user, to extract 
 * * the words, store them in double pointer dynamically allocating memory and perform the certain operations.
 * *
 * * DATE               NAME           REFERENCE         REASON
 * * ---------------------------------------------------------------------------------------------------------
 * * 6 OCT 2022         RASHMI         CAPG12345        CODE TO PERFORM
 * *
 * * Copyright @ 2022 Altran Group All Rights Reserved
 * *
 * **********************************************************************************************************/

#include<common.h>/*header file*/

/************************************************************************************************************
 * * FUNCTION NAME: countstring
 * * DESCRIPTION: The function performs certain operations.
 * *
 * **********************************************************************************************************/

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
void printWords(char** words)
{
	int i;
	for(i = 0; words[i]!= NULL; i++)
		printf("%s\n", words[i]);
}
void free_all(char* ptr)
{
	free(ptr); 
}
int main()
{
	char text[80];
	char **words;
	int n = 0;
	char search[80];
	char replace[80];
	printf("Enter a line of text (max 80 characters):");
	fgets(text, sizeof(text), stdin);
	char sub1[80];
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

