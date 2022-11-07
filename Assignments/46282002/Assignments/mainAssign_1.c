#include <stdio.h>
#define MAX 100



int main(int argc,char **argv)
{
	char sent[MAX];
	printf("Enter a sentence:");
	fgets(sent,MAX,stdin);
	return 0;
}
