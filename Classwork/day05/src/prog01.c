#include <stdio.h>
#include <stdlib.h>

int add(int, int);

int main(int argc, char**argv)
{
	int ret=0;
	
	ret = add(atoi(argv[1]), atoi(argv[2]));

	printf("\nAddition of two numbers : %d", ret);

	printf("\n\n");
	return 0;
}

int add(int var1, int var2)
{
	return (var1+var2);
}
