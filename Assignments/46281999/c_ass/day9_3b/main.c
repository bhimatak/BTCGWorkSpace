#include "header.h"
int main()
{
    char arr[][MAX_LEN] = {"user1", "user2", "user3", "user4"};
    int n;
    char a;
    printf("Enter any letter: \n");
    scanf("%c", &a);
    int d = isVowel(a);
    if (d == EXIT_SUCCESS)
    {
        printf("\nThe entered letter is a vowel\n");
    }
    else
    {
        printf("\nThe entered letter is not a vowel\n");
    }
    printf("The contents of array before swapping:\n");
    display(arr);
    printf("enter the index number: \n");
    scanf("%d", &n);
    printf("The swapped element at given index is %s\n", swap_elements(arr,
                                                                       n));
    remove_vowel(arr, n);
    return EXIT_SUCCESS;
}