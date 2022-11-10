#include <common.h>

int main(int argc, char*argv[])
{
	FILE *fp1, *fp2;
	char fileName1[256];
	char fileName2[256];
	int ret=0;
	char buff[1024] = {'\0', };

	if(argc != 3)
	{
		fprintf(stderr,"Usage: ./app srcFile destFile\n");
		exit(EXIT_FAILURE);
	}
	
   	//absolute path
	strcpy(fileName1, argv[1]);
	strcpy(fileName2, argv[2]);
	fp1 = fopen(fileName1, "r");

	if(fp1 == NULL)
	{
		perror("fopen() ");
		exit(EXIT_FAILURE);
	}

	fp2 = fopen(fileName2, "w+");

	if(fp2 == NULL)
	{
		perror("fopen() ");
		exit(EXIT_FAILURE);
	}

	fclose(fp1);
	ret = fseek(fp1, 810L, SEEK_SET);
	if(ret < 0){
		perror("fseek() ");
		exit(EXIT_FAILURE);
	}

	printf("\nThe File Pointer is at: %d location\tret=%d", ftell(fp1), ret);
	while(fgets(buff, 256, fp1)){
		//fprintf(fp2,"%s",buff);
		fputs(buff, fp2);
		if(ftell(fp1) >= 300)
			break;
	}
	
	printf("\nCopied %s to %s", fileName1, fileName2);
	fclose(fp1);
	fclose(fp2);

	printf("\n\n");
	return 0;
}