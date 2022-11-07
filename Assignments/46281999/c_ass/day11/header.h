#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 80

int getWordCount(char *line);
void extractWords(char **heap, char *line, int wordcount);
int searhAndReplace(char **heap, char *searchkey, char *replacekey, int wordcount);
void display(char **heap, int wordcount);
void freeMem(char **hear);