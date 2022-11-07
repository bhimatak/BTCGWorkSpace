#include <stdio.h>
#include "list.h"
int main()
{
	int array[10];
	int sz;
	int i;
	printf("enter size:");
	scanf("%d",&sz);
	printf("Enter element:");
	for(i=0;i<sz;i++)
	{
		scanf("%d",&array[i]);
	}
	arrange(array,sz);
	return 0;
}
