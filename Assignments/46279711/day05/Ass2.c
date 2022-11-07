#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int n,i,j;
	char str[100][100],s[100];
	printf("enter no of names:");
	scanf("%d",&n);
	printf("enter names:");
	for(i=0;i<n;i++)
	{
		scanf("%s", str[i]);
	}
	for (i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(s,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],s);
				
			}
		}
	}
	printf("\n sorted order:\n");
	for(i=0;i<n;i++)
	{
		printf("\n%s\n ",str[i]);
	}

	return 0;
}

