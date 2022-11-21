
#include <stdio.h>


void q(int n)

{
	if(n <= 0)
		return;

	q(n-1);
	printf("\tn = %d",n);

}

int main()
{

	q(5);
	printf("\n\n");
	return 0;
}