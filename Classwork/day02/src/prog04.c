#include <common.h>


int main()
{
	int it=0;
	int bt;

	/*
	while(it<=10)
	{
		printf("\n%d", it);
		it++;
	}
*/
	
/*
	do{
		printf("\n%d", it);
		it++;
	}while(it<=10);
	
*/
	

/*
	for(it=0,bt=10;(it<=10)&& (bt>=0);it++, bt--)
	{
		printf("\n%d %d", it, bt);
	}
	*/

	for(;;it++)
	{
		printf("\n%d", it);
		if(it >= 11)
			break;
	}

	printf("\nProg Ends");

	return 0;
}