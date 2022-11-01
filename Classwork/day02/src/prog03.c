#include <common.h>


int main()
{
	int a;
	printf("\nEnter the value of a: ");
	scanf("%d",&a);

	switch(a)
	{
		default:
			printf("\nDefault is executed\n");
			break;
		case 1:
			printf("\ncase 1 is executed");
			break;
		case 2:
			printf("\ncase 2 is executed");
			break;
		case 3:
			printf("\ncase 3 is executed");
			break;
		

	}

	printf("\nProgram Ends\n");

	return 0;
}