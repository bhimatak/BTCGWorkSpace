#include<stdio.h>
#include<string.h>
#define MAX 100

int main()
{
	char str[MAX];
	fgets(str,MAX,stdin);
	printf("\n the string is :%s",str);
	int i,end,start =0;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]== ' ' ||i == strlen(str)-1)
		{
			end =i;
			printf("%.*s\n",(end-start),str+start);
			start=i+1;
		}
	}
	return 0;
}

