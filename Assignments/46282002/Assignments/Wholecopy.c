#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str1[100];
	char str2[100];
	printf("Enter string");
	fgets(str1,100,stdin);

	strcpy(str2,str1);
	printf("copied string %s  length is %ld",str2,strlen(str2));
	return 0;
}
