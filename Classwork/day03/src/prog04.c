/*

Pointers


int a=10; => 65518

int *ptr;
char *ptr;
float *ptr;

struct Emp{
	int _id;
	char eName[20];	
};

struct Emp *ptr;


*/

#include <common.h>

int main()
{
	int qty=10;
	int *ptr;

	ptr = &qty;


	printf("\nAddress of qty=%u and value stroed =%d\n",&qty,qty);
	printf("\nAddress of ptr=%u and value stroed =%u\n",&ptr,ptr);

	printf("\nQty = %d",*ptr);

	*ptr = 101;

	printf("\nQty = %d",qty);

	printf("\n\n");

	return 0;
}