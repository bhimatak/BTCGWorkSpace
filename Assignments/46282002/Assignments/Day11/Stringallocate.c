#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1296
int main()
{
	char **string;
	int total =0;
	int i;
	int len=0;
	char buffer[BUFFER_SIZE]; 
	int count=0;
	printf("Enter num of Strings:");
	scanf("%d",&total);
	string=malloc(sizeof(char *) * total);
	while(getchar()!='\n');
        for(i=0;i<total;i++)
	{

      		printf("Enter string %d:",i +1);
		fgets(buffer,BUFFER_SIZE,stdin);
		len=strlen(buffer);
		buffer[len-1]='\0';
		string[i]=malloc(len * sizeof(char));
		strcpy(string[i],buffer);
	}
	printf("\nString Array:\n\n");
	for(i=0;i<total;i++)
	{
		printf("string[%d] =%s\n",i, string[i]);
	}
	printf("\n");
	free(string);
	return 0;
}
