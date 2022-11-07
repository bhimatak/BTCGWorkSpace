#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_BUFFER 512
int Sort(char **,int);
void display(char **,int);
int main(int argc,char *argv[])
{
	printf("Before Sorting:");
	display(argv,argc);
	printf("\n\n");
	Sort(argv, argc);
	printf("After Sorting:");
	display(argv,argc);
	printf("\n\n");
	return 0;
}
int Sort(char *Name[], int count)
{
	int i;
	int j;
	char temp[MAX_BUFFER]={'\0', };
	for(i=1;i<count;i++)
	{
		for(j=i+1;j<count;j++)
		{
			bzero(temp ,MAX_BUFFER);
			if(strcmp(Name[i], Name[j])>0)
			{
				strcpy(temp,Name[i]);
				strcpy(Name[i],Name[j]);
				strcpy(Name[j],temp);
			}
		}
	}

}
void display(char *Name[], int count)
{
	int iv;
	printf("\nName, \n");
	for(iv=1;iv<count;iv++)
		printf("\n%s",Name[iv]);
}
