#include "header.h"
int getFirstNames(char arr1[][MAX_LEN], int rowcount, char str1[][MAX_LEN])
{
    for (int i = 0; i < ROW; i++)
    {
        const char s[2] = ":";
        char *token;
        token = strtok(arr1[i], s);
        strcpy(str1[i], token);
    }
    for (int i = 0; i < ROW; i++)
    {
        printf("%s\n", str1[i]);
    }
    return EXIT_SUCCESS;
}
char getLastNames(char arr1[][MAX_LEN], int rowcount, char str2[][MAX_LEN])
{

    char *las;
    char arr[ROW][MAX_LEN] = {"Antony:Joseph", "Lata:Mary", "Rajesh:Kumar", "Joly:Akbar"};
    for (int i = 0; i < ROW; i++)
    {
        las = strrchr(arr[i], ':');
        las++;
        printf("%s\n", las);
    }
    return EXIT_SUCCESS;
}
