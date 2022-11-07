#include <stdio.h>
#include "strcopy.h"
#include <string.h>
int main()
{
	char string[10]={'\0',};
	int it;
	printf("enter a string:");
	scanf("%s",string);
        copy(string);
	return 0;
}
