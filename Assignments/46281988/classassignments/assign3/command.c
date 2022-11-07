#include<stdio.h>
#include<stdlib.h>
#define MAX_BUFF 512
int StrSortAsc(char**,int);
void displayStr(char**,int);
int main(int argc , char*argv[])
{
	printf("\n Before Sorting\n");
	displayStr(argv,argc);
	printf("\n\n");
	printf("\n After Sorting\n");
	displayStr(argv,argc);
	return 0;
}
void displayStr(char*Names[],int count)
{
	int i=0;
	printf("\n No of arguments : \n");
	for(i=0;i<count;i++)
		printf("\n%s", Names [i]);
}
