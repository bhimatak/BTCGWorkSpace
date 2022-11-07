#include <stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int *ptr=NULL;
	int iv;
	for(iv=0;iv<5;iv++,ptr++)
	{
		printf("%d",*ptr);
	}
	return 0;
}
