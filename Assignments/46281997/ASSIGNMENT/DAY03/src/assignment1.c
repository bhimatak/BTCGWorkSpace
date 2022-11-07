#include"common.h"
void strcpy(char dest[], const char *src)
{
	for(int i=0;dest[i] != '\0';i++)
	dest[i]=src[i];
	
}
int main()
{
	char src[MAX]={'\0',};
	char dest[MAX];
	printf("\n Enter a string :");
	scanf("%s",src);
	strcpy(dest,src);
	printf("Original String :%s\n",src);
	printf("Copied String :%s\n",dest);
	return 0;
}	
