#include <stdio.h>

enum fruits
{
	mango=1001, pineapple, apple=5001, sb
};


int main()
{
	enum fruits f;
	f = pineapple;

	printf("\n%d\n", mango);

	f = sb;

	printf("\n%d\n", sb);


}