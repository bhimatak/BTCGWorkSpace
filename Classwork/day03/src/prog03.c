#include <common.h>

int main()
{

	char line[100] = {'\0',};
	char tokens[10][100] = { '\0', };
	char *strToken;
	int countTks = 0, iv;

	strcpy(line,"001 | bhima | 22-12-2022 | 100000");

	printf("%s\n",line);

	strToken = strtok(line,"|");
	/*
	printf("Captured token:%s\n", strToken);

	strToken = strtok(NULL,"|");
	printf("Captured token:%s\n", strToken);
	strToken = strtok(NULL,"|");
	printf("Captured token:%s\n", strToken);
	strToken = strtok(NULL,"|");
	printf("Captured token:%s\n", strToken);
	strToken = strtok(NULL,"|");
	printf("Captured token:%s\n", strToken);
	*/
	
	while(strToken != NULL)
	{	
		strcpy(tokens[countTks], strToken);
		printf("Captured token:%s\n", strToken);
		strToken = strtok(NULL,"|");
		countTks++;
	}

	printf("\nTokens in the arrays are\n");
	for(iv = 0; iv <countTks;iv++)
	{
		printf("\ntokens[%d] = %s\tLength=%d", iv, tokens[iv], strlen(tokens[iv]));
	}
	
	printf("\n\n");

	return 0;
}