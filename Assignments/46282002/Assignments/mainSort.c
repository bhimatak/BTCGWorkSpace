#include <stdio.h>
#include "Sort.h"
int main()
{
	int array[10];
	int sz;
	int it;
	printf("enter size:");
	scanf("%d",&sz);
	printf("enter element");
	for(it=0;it<sz;it++)
		scanf("%d",&array[it]);
	sorting(array,sz);
	printf("%d",sorting(array,sz));
	return 0;
}

