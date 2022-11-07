#include<stdio.h>
#include<string.h>
int main()
{
	char a[50]= "Linux Programming";
	char b[100];
	printf("Before copying\n");
	printf("Source string is :%s \n",a);
	strcpy(b,a);
	printf("After copying \n");
	printf("destination string is :%s\n",b);
	return 0;
}
