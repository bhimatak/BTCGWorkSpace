#include <common.h>

/*

Functions

1. built-in
2. user defined

1. built-in => printf, scanf, sin,tan

2. user defined => user is defining his/her own task which could be repeatative

function => 1. easier debug, error, optimize, readable, reduce

declaration
return_dt FunctName(input args);

defination => actual logic is applied

return_dt FunctName(input args)
{
	//logic
}


1. with input args
2. without input args
3. with return type of the function


1. ex: void function1(int, int);
2. ex: void function1();
3. ex: char *getName();



*/
/*
2. ex:


void display();

int main()
{
	display();

	return 0;
}

void display()
{
	printf("\nHello\nWelcome to C Programming Class\n");
}

*/
//ex: 1,3

int add(int, int);

int main()
{

	printf("\nRet: %d",add(5,6));

	return 0;
}

int add(int a, int b)
{
	printf("\nAddition: %d",(a+b));
	return (a+b);
}