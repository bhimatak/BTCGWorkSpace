#include <stdio.h>
#include <stdlib.h>

int main()
{
	const int a = 10;

	int *ptr=&a;

	printf("\na=%d",a);

	//a = 21;
	*ptr = 21;

	printf("\na=%d",a);

	printf("\n\n");
	return 0;
}