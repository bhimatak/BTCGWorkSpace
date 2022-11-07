#include<stdio.h>
#include<string.h>
#define MAX 500

int main()
{
	char arr[MAX];
	printf("\n enter sentence:\n");
	fgets(arr,MAX,stdin);
	printf("\n sentence is : %s\n", arr);
	return 0;
}

