#include "header.h"
int main(int argc, char const *argv[])
{
    char linecpy[MAX_SIZE], line[MAX_SIZE];
    char **heap;
    printf("Enter a line:");
    fgets(linecpy, sizeof(line), stdin);
    strcpy(line, linecpy);

    int wordcount = getWordCount(linecpy);
    printf("Wordcount:%d\n", wordcount);

    strcpy(linecpy, line);
    heap = malloc(wordcount * sizeof(char *));
    extractWords(heap, linecpy, wordcount);

    char searchKey[MAX_SIZE];
    char replaceKey[MAX_SIZE];
    printf("Enter Search word:");
    fgets(searchKey, sizeof(searchKey), stdin);
    searchKey[strlen(searchKey) - 1] = '\0';
    printf("Enter Replacement word:");
    fgets(replaceKey, sizeof(replaceKey), stdin);
    replaceKey[strlen(replaceKey) - 1] = '\0';
    int status = searhAndReplace(heap, searchKey, replaceKey, wordcount);
    if (status == EXIT_SUCCESS)
        printf("Replacement Success\n");
    else
        printf("Replacement Failure\n");

    display(heap, wordcount);
    freeMem(heap);
    return EXIT_SUCCESS;
}