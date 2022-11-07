#include<stdio.h>
#include<string.h>
#define MAX 100
int main()
{
	int i;
	char buf[MAX];
	fgets(buf,MAX,stdin);
	printf("string is :%s\n",buf);
	for(i=0;buf[i]!='\0';i++)
	{
		printf("%c\n",buf[i]);
		if(buf[i]==' ')
		{
			printf("\n");
		}
	}
	return 0;
}

