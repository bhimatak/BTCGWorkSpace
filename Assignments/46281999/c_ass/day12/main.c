#include "header.h"
int main(int argc, char const *argv[])
{
    int arr[MAX_SIZE] = {0};
    int totalElements = 0;
    int number = 0,
        sum = 0,
        item = 0,
        count = 0,
        elements = 0;
    char str[MAX_SIZE];

    do
    {
        printf("\nNo. of Elements you want to Store : ");
        scanf("%d", &elements);
        totalElements = inputElements(arr, elements, MAX_SIZE);

    } while (totalElements == EXIT_FAILURE);

    printf("\nNo. of Elements Stored are: %d ", totalElements);
    printf("\nEnter No. of elements to print : ");
    scanf("%d", &number);

    display(arr, number);
    sumOf_Max_and_MinEle(arr, totalElements);

    printf("\nSum Of Min and Max Elements is : %d", sumOf_Max_and_MinEle(arr, totalElements));
    printf("\nEnter element to count occurences : ");
    scanf("%d", &item);
    count = myCount(arr, item, totalElements);
    printf("No of Occurences of %d is : %d\n", item, count);

    myrev(arr, totalElements);

    printf("\nEnter the your name: ");
    scanf("%s", str);
    printf(" \n Before reversing the string: %s \n", str);

    revstr(str);

    printf(" After reversing the string: %s", str);

    return EXIT_SUCCESS;
}