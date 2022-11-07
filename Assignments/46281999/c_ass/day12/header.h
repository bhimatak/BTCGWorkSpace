#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 50

extern void display(int arr[MAX_SIZE], int number);
extern int inputElements(int arr[MAX_SIZE], int elements, int max);
extern int sumOf_Max_and_MinEle(int arr[MAX_SIZE], int totalElements);
extern int myCount(int arr[MAX_SIZE], int item, int totalElements);
extern void myrev(int arr[MAX_SIZE], int totalElements);
extern void revstr(char *str1);