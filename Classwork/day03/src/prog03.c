#include <common.h>

int main()
{

	char line[100] = {'\0',};
	char *strToken;

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
		printf("Captured token:%s\n", strToken);
		strToken = strtok(NULL,"|");
	}
	

	return 0;
}