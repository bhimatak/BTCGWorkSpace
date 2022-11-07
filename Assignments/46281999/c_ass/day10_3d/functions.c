#include "header.h"
void access_array()
{
    int arr[][MAX_COLS] = {{1, 2, 3}, {4, 5, 6}};
    int(*ptr)[MAX_COLS];
    ptr = &arr[0];

    for (int i = 0; i < MAX_COLS - 1; i++)
    {
        for (int j = 0; j < MAX_COLS; j++)
        {
            printf("%d ", (*ptr)[j]);
        }
        for (int j = 0; j < MAX_COLS; j++)
        {
            printf("%p ", &(*ptr)[j]);
        }
        ptr++;
        printf("\n");
    }
}