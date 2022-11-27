#ifndef _COMMON_H
#define _COMMON_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#endif /end of ifndef _COMMON_H/
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
	

