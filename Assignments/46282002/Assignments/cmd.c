#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
	int id;
	char temp[100];
	int ind;
	printf("\n num of arg supply %d\n",argc);
	
        for(id=0;id<argc;id++)
	{
	    printf("\n%s\t",argv[id]);
	}
	
	for(id=0;id<argc-1;id++)
	{
		for(ind=id+1;ind<argc;ind++)
		{
			if(strcmp(argv[id],argv[id+1])>0)
			{
				strcpy(temp,argv[id]);
				strcpy (argv[id],argv[id+1]);
				strcpy(argv[id+1],temp);
			}
		}
	}
        printf("\nEnter sorted array:");	
	for(id=0;id<argc;id++)
		printf("\n%s\n",argv[id]);
	return 0;
}
