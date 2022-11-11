#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50];
	char str2[50];
	printf("Enter the string 1:");
	scanf("%s" , str1);
	strcpy(str2 , str1);
	printf("\n The string2 is : %s\n",str2);
	return 0;
}
