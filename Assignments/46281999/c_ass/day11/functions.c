#include "header.h"
int getWordCount(char *line)
{
    int count = 0;
    char *token = strtok(line, " ");
    while (token != NULL)
    {
        count++;
        token = strtok(NULL, " ");
    }

    return count;
}

void extractWords(char **heap, char *line, int wordcount)
{
    int k = 0;
    char *token = strtok(line, " ");
    while (token != NULL)
    {
        heap[k] = malloc(MAX_SIZE * sizeof(char));
        strcpy(heap[k], token);
        k++;
        token = strtok(NULL, " ");
    }
}

int searhAndReplace(char **heap, char *searchkey, char *replacekey, int wordcount)
{
    for (int i = 0; i < wordcount; i++)
    {
        if (strcmp(searchkey, heap[i]) == 0)
        {
            strcpy(heap[i], replacekey);
            return EXIT_SUCCESS;
        }
    }
    return EXIT_FAILURE;
}

void display(char **heap, int wordcount)
{
    for (int i = 0; i < wordcount; i++)
    {
        printf("%s ", heap[i]);
    }
    printf("\n");
}

void freeMem(char **heap)
{
    free(heap);
}