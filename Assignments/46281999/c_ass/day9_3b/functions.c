#include "header.h"
char *swap_elements(char arrl[][MAX_LEN], int index)
{
    char temp[20];
    strcpy(temp, arrl[0]);
    strcpy(arrl[0], arrl[index]);
    strcpy(arrl[index], temp);
    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", arrl[i]);
    }
    return *arrl;
}
int isVowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' ||
        x == 'E' || x == 'I' || x == '0' || x == 'U')
    {
        return EXIT_SUCCESS;
    }
    else
    {
        return EXIT_FAILURE;
    }
}
char *remove_vowel(char arrl[][MAX_LEN], int index)
{
    char large[MAX_LEN];
    int d = 0;
    for (int i = 0; arrl[index][i] != '\0'; i++)
    {
        if (isVowel(arrl[index][i]) == 1)
        {
            large[d] = arrl[index][i];
            d++;
        }
    }
    large[d] = '\0';
    printf("After removing vowels %s\n", large);
}
int display(char arrl[][MAX_LEN])
{
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        printf("%s\n", arrl[i]);
    }
    return EXIT_SUCCESS;
}