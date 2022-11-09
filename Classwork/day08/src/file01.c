#include <common.h>

int main()
{
	FILE *fp;

	// relative paths
	//fp = fopen("test.txt", "r");
	//fp = fopen("./data/test.txt", "r");
	//fp = fopen("../data/test.txt", "r");

	//absolute path
	fp = fopen("/home/bhima/BTCGWorkSpace/Classwork/day08/data/test.txt", "r");

	if(fp == NULL)
	{
		printf("\nUnable to Open the File\n");
		exit(EXIT_FAILURE);
	}

	printf("\nFile is Present and Opened for read only mode\n");

	return 0;
}