#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
int main()
{
	char str[SIZE];
	int count=0;
	printf("Enter string:\n");
	fgets(str,SIZE,stdin);
	printf(" %s is the string\n",str);
	char *token=strtok(str," ");
	while(token!=NULL)
	{
	    printf("%s\n",token);
            count++;
	    token=strtok(NULL," ");
	}
	printf("%d is word\n",count);
	return 0;
}
