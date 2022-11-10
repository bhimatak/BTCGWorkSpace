#include <common.h>

#define DBPATH "~/BTCGWorkSpace/Classwork/day08/data"

int main()
{
	FILE *fp;
	char *fileName;

	char cwd[1024];
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
	strcat(cwd, "/data/test.txt");
	fp = fopen(cwd, "r");
	printf("\n%s\n",cwd);
	if(fp == NULL)
	{
		printf("\nUnable to Open the File\n");
		exit(EXIT_FAILURE);
	}

	printf("\nFile is Present and Opened for read only mode\n");

	return 0;
}