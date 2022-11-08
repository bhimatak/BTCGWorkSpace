#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_BUFF 512

int StrSortAsc(char **, int);
void displayStr(char **, int);


int main(int argc, char *argv[])
{

	printf("\nBefore Sorting\n");
	displayStr(argv, argc);
	printf("\n\n");
	StrSortAsc(argv, argc);
	printf("\nAfter Sorting\n");
	displayStr(argv, argc);

	printf("\n\n");
	return 0;
}


int StrSortAsc(char *Names[], int count)
{
	int i,j;
	char strTemp[MAX_BUFF] = {'\0', };

	for(i=1;i<count;i++)
	{
		for(j=i+1;j<count;j++)
		{
			bzero(strTemp, MAX_BUFF);
			if(strcmp(Names[i], Names[j])>0)
			{
				strcpy(strTemp, Names[i]);
				strcpy(Names[i], Names[j]);
				strcpy(Names[j], strTemp);

			}
		}
	}
}

void displayStr(char *Names[], int count)
{
	int iv;
	printf("\nNames are, \n");
	for(iv = 1; iv<count;iv++)
		printf("\n%s",Names[iv]);

}
