#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char**argv)
{
	int i,j;
	char s[100];
	printf("\n name %s ",argv[0]);
	if(argc==1)
		printf("\n extra command need");
	else if(argc > 2)
	{
		printf("\n No of arguments %d", argc);
		for(i=0;i<argc;i++)
		{
			printf("\n argv[%d]: %s",(i+1),argv[i]);
		}	
		for (i=1;i<argc;i++)
		{
			for(j=i+1;j<argc;j++)
			{
				if(strcmp(argv[i],argv[j])>0)
				{
					strcpy(s,argv[i]);
					strcpy(argv[i],argv[j]);
					strcpy(argv[j],s);
				}
			}
		}
		printf("\n sorted order:\n");
		for(i=1;i<argc;i++)
		{
			printf("\n%s",argv[i]);
		}
	}
	else
	{
		printf("not enough\n");
	}
	return 0;
}

