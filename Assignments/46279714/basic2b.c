#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
int main()
{
	char str[MAX];
	printf("\n enter sentance: \n");
	fgets(str,MAX,stdin);
	printf("\n the sentence is : %s \n",str);
	return 0;
}

