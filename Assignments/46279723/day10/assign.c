/**************************************************
 * * FUNCTION NAME : assign.c
 * *
 * * DESCRIPTION   : this function return the "NAMES"
 * *
 * * Return        : This function return first and second name.
 * *********************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_LEN 100
#define ROW 3
char first[ROW][MAX_LEN];
char last[ROW][MAX_LEN];
char
arr[ROW][MAX_LEN]={"Nandini:Spurti","Supriya:Kumari","Gopika:Ramya"};

int* getFirstName(char arr1[][MAX_LEN], int rowcount, char str1[][MAX_LEN])
{
	for(int i=0; i<ROW; i++)
	{
		const char s[3] = ":";
		char *token;
		token = strtok(arr1[i], s);
		strcpy(str1[i], token);
	}
	for(int i=0; i<ROW; i++)
	{
		printf("%s\n", str1[i]);
	}
	return EXIT_SUCCESS;
}
char* getLastName(char arr1[][MAX_LEN], int rowcount, char str2[][MAX_LEN])
{
	char* last;
	char arr[ROW][MAX_LEN]={"Nandini:Spurti","Supriya:Kumari","Gopika:Ramya"};

	for(int i=0; i<ROW; i ++)
	{
		last=strchr(arr[i],':');
		last++;
		printf("%s\n",last);
	}


	return EXIT_SUCCESS;
}
int main()
{
	int rowcount=3;
	printf("FirstName: \n");
	getFirstName(arr,rowcount,first);
	printf("\n\n");
	printf("LastName: \n");
	getLastName(arr,rowcount,last);
	return EXIT_SUCCESS;
}

