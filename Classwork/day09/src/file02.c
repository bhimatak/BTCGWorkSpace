#include <common.h>

typedef struct EmpDetails
{
	int eID;
	char eName[20];
	
}EMP;

int main(int argc, char*argv[])
{
	FILE *fp;
	char fileName[1024];

	char cwd[1024];
	char buff[1024] = {'\0', };
	char *tokens;
	int ret=0;

	EMP E;
	
	
	

	

   	if (getcwd(cwd, sizeof(cwd)) != NULL) {
       printf("Current working dir: %s\n", cwd);
   	} else {
       perror("getcwd() error");
       return 1;
   	}
	// relative paths
	//fp = fopen("test.txt", "r");
	//fp = fopen("./data/test.txt", "r");
	//fp = fopen("../data/test.txt", "r");

	//absolute path
	strcpy(fileName, cwd);
	strcat(fileName, "/data/test.txt");
	fp = fopen(fileName, "r");
	printf("\n%s\n",fileName);
	if(fp == NULL)
	{
		printf("\nUnable to Open the File\n");
		perror("fopen ");
		exit(EXIT_FAILURE);
	}

	printf("\nFile is Present and Opened for read only mode\n");

	//ret = fprintf(fp, "\nDetails\nName: %s\nID: %d", E.eName, E.eID);

	//ret = fprintf(fp, "%s %d\n", E.eName, E.eID);

	//ret = fgets(buff, 100, fp);
	if(fgets(buff, 100, fp) == NULL)
		perror("fgets() ");

	printf("buff: %s\n",buff);
	tokens = strtok(buff, "|");
	//printf("\n%s\n",tokens);
	strcpy(E.eName, tokens);
	tokens = strtok(NULL, "|");
	//printf("\n%s\n",tokens);
	E.eID = atoi(tokens);

	fprintf(stdout, "\nEmp Name: %s\nEmp ID: %d\n", E.eName, E.eID);

	//
	/*
	if(fgets(buff, 100, fp) == NULL)
		perror("fgets() ");

	printf("buff: %s\n",buff);

	if(fgets(buff, 100, fp) == NULL)
		perror("fgets() ");

	printf("buff: %s\n",buff);
	*/
	fclose(fp);


	printf("\n\n");
	return 0;
}