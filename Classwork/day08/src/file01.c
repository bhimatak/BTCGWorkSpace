#include <common.h>

int main()
{
	FILE *fp;

	fp = fopen("/home/bhima/BTCGWorkSpace/Classwork/day08/data/test.txt", "r");

	if(fp == NULL)
	{
		printf("\nUnable to Open the File\n");
		exit(EXIT_FAILURE);
	}

	printf("\nFile is Present and Opened for read only mode\n");

	return 0;
}