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
	int ret=0;

	EMP E;
	
	
	E.eID = atoi(argv[1]);
	strcpy(E.eName, argv[2]);

	

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
	fp = fopen(fileName, "r+");
	printf("\n%s\n",fileName);
	if(fp == NULL)
	{
		printf("\nUnable to Open the File\n");
		perror("fopen ");
		exit(EXIT_FAILURE);
	}

	printf("\nFile is Present and Opened for read only mode\n");

	//ret = fprintf(fp, "\nDetails\nName: %s\nID: %d", E.eName, E.eID);

	ret = fprintf(fp, "%s %d\n", E.eName, E.eID);

	if(ret < 0)
		perror("fprintf ");

	fclose(fp);


	printf("\n\n");
	return 0;
}