#include <common.h>
#define MAX_BUFF 256

int main()
{
	char *eName = NULL; 
	char buffer[MAX_BUFF] = {'\0', };
	int NoofBytes;
	int iv;

	printf("\nEnter Name: ");
	fgets(buffer, MAX_BUFF, stdin);
	printf("\n%s\n",buffer);

	/*
	printf("\nEnter the Number of bytes reqd: ");
	scanf("%d", &NoofBytes);
	*/
	eName = (char *)malloc((strlen(buffer)*sizeof(char)+1));
	if(eName == NULL)
	{
		printf("\nError in malloc\n");
		exit(EXIT_FAILURE);
	}
	//bzero(eName,NoofBytes*sizeof(char));
	memset(eName,'\0', (strlen(buffer)*sizeof(char)+1));
	
	strcpy(eName,buffer);
	printf("\neName: %s\n",eName);

	for(iv=0;iv<strlen(eName);iv++)
		printf("%c ",eName[iv]);

	bzero(buffer,MAX_BUFF);
	free(eName);
	
	printf("\n\n");
	return 0;
}