#include <common.h>

#define MAX_LEN 80

int countWords(char* str)
{
	char* strCp;
	int strLength;
	int count = 0;

	strLength = strlen(str);
	strCp = malloc((strLength+1)*sizeof(char));
	strcpy(strCp,str);

	if( strtok(strCp," ") != NULL)
	{
		count++;
		while(strtok(NULL," \t") != NULL)
			count++;
	}

	return count;
}

int main()
{
	char str[]="My name is Annayasha Paul";
	printf("Input String: \n%s\n",str);	
	printf("Count of words: \n%u\n",countWords(str));

	printf("\n");
	return 0;
}
