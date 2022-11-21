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
	/*
	char buff[1024] = {'\0', };
	char *tokens;
	*/
	int ret=0;
	
	EMP E;
	
   	if (getcwd(cwd, sizeof(cwd)) != NULL) {
       printf("Current working dir: %s\n", cwd);
   	} else {
       perror("getcwd() error");
       return 1;
   	}
	

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

	printf("\nFile is Present\n");

	ret = fscanf(fp,"%s%d",E.eName, &E.eID);
	if(ret != 2){
		printf("\nNot Successfully scanned\n");
		exit(EXIT_FAILURE);
	}

	
	fprintf(stdout, "\nEmp Name: %s\nEmp ID: %d\n", E.eName, E.eID);

	
	fclose(fp);


	printf("\n\n");
	return 0;
}