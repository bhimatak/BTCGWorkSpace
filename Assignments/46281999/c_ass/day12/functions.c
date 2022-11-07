#include "header.h"
int inputElements(int arr[MAX_SIZE], int elements, int max)
{
    if (elements <= max)
    {
        int i = 0;
        for (i = 0; i < elements; i++)
        {
            printf("\nEnter the element arr[%d] : ", i);
            scanf("%d", &arr[i]);
        }
        return i;
    }
    else
    {
        printf("\nWarning ! Limit of Array Exceeded");

        return EXIT_FAILURE;
    }
}
void display(int arr[MAX_SIZE], int number)
{
    int i = 0;
    for (i = 0; i < number; i++)
    {
        printf("\n%d", arr[i]);
    }
}
int sumOf_Max_and_MinEle(int arr[MAX_SIZE], int totalElements)
{
    int minimum = arr[0],
        maximum = arr[0],
        sum = 0,
        i = 0;

    for (i = 0; i < totalElements; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }

    sum = minimum + maximum;

    return sum;
}
int myCount(int arr[MAX_SIZE], int item, int totalElements)
{
    int count = 0,
        i = 0;

    for (i = 0; i < totalElements; i++)
    {
        if (arr[i] == item)
        {
            count++;
        }
    }
    return count;
}
void myrev(int arr[MAX_SIZE], int totalElements)
{
    int temp = 0,
        start = 0,
        end = totalElements - 1,
        i = 0;

    printf("\nElements Before Reversing : \n");

    for (i = 0; i < totalElements; i++)
    {
        printf("%d \t", arr[i]);
    }

    printf("\nElements after Reversing : \n");

    for (i = totalElements - 1; i >= 0; i--)
    {
        printf("%d \t", arr[i]);
    }
}
void revstr(char *str1)
{

    int i, len, temp;
    len = strlen(str1);
    for (i = 0; i < len / 2; i++)
    {

        temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }
}