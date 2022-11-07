#include "strcopy.h"
#include <string.h>
int copy(char str[])
{
	char str1[10]={'\0',};
	strcpy(str1,str);
	printf("%s is copy  string1\n",str1);
        return 0;
}


