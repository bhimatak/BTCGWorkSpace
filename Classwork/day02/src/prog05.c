#include <common.h>

int main()
{
	/*
	int a=10,b=20;
	char ch[20];
	int c=30;
	float f;
	int d=40;
	

	printf("\naddress of a = %u and value = %d \n",&a,a);
	printf("\naddress of b = %u and value = %d \n",&b,b);
	printf("\naddress of c = %u and value = %d \n",&c,c);
	printf("\naddress of d = %u and value = %d \n",&d,d);
	
	*/

	int MathMarks[100] = {65,66,67,68};

	MathMarks[0] = 88;

	printf("\naddress of MM[0] = %u and value = %d \n",&MathMarks[0],MathMarks[0]);
	printf("\naddress of MM[1] = %u and value = %d \n",&MathMarks[1],MathMarks[1]);
	printf("\naddress of MM[2] = %u and value = %d \n",&MathMarks[2],MathMarks[2]);
	printf("\naddress of MM[3] = %u and value = %d \n",&MathMarks[3],MathMarks[3]);

	return 0;
}