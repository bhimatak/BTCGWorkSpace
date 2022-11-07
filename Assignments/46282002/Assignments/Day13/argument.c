#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char**argv)
{
	int i;
	printf("\n no of arguments supply :%d\n",argc);
	for(i=0;i<argc;i++)
		printf("\n %s",argv[i]);
}
