#include "header.h"
int main()
{
    char first[ROW][MAX_LEN];
    char last[ROW][MAX_LEN];
    char arr[ROW][MAX_LEN] = {"Antony:Joseph", "Lata:Mary", "Rajesh:Kumar", "Joly:Akbar"};
    int rowcount = 4;
    printf("FirstNames: \n");
    getFirstNames(arr, rowcount, first);
    printf("\n\n");
    printf("LastNames: \n");
    printf("%s", arr[0]);
    getLastNames(arr, rowcount, last);
    return 0;
}