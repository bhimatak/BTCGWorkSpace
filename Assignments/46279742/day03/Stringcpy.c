#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()

{
	char str1[20]={'\0'};
	char str2[20]={'\0'};
	printf("/n enter string 1:");
	scanf("%s",str1);
	strcpy(str2, str1);
	printf("/n the string 2 is :%s\n",str2);
	return 0;
}


