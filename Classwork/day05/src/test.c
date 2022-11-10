#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getLine(char *);
int main()
{
	char *line;
	line = (char*)malloc(100);

	if(getLine(line)==NULL)
		printf("Error");


	//strcpy(line,"Hello World");
	printf("\nLine: %s",line);
	printf("\n\n");

	return 0;
}

char *getLine(char *l)
{
	char *pos;
	fgets(l,1024, stdin);
	if ((pos=strchr(l, '\n')) != NULL) 
    	*pos = '\0';
    if(strlen(l)==0)
    	return NULL;
    return l;
}