#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
	int id;
	char temp;
	int ind;
	printf("\n num of arg supply %d\n",argc);
        for(id=0;id<argc;id++)
	{
		printf("%s",argv[id]);
	}
	for(id=0;id<(argc-1);id++)
	{
		for(ind=id; ind<argc;ind++)
		{
			if((atoi(argv[id]))>(atoi(argv[ind])))
			{
				temp=argv[id];
				argv[id]=argv[ind];
				argv[ind]=temp;
			}

		}
	}
	for(id=0;id<argc;id++)
		printf("%s",argv[id]);
	return 0;
}
