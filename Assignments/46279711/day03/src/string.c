#include<stdio.h>
#include<string.h>
#define MAX 100
void main()
{
	char str1[MAX];
	char str2[MAX];
	printf("Enter the source string:");
	scanf("%s",str1);
	strcpy(str2,str1);
	printf("Destination is:%s\n", str2);
}
