#include <common.h>
/*
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int iv;

	int *ptr = NULL;


	ptr = arr;

	for(iv=0;iv<5;iv++, ptr++)
		printf("\n%d\n",*ptr);
		
	//BA + iv*sizeof(dt)

	
	//printf("\n%d",*(arr+1));
	printf("\n\n");
	return 0;
}

*/

int main()
{
	int resMulTab[10];

	int Val = 2, it;
	int *arrPtr;

	arrPtr = resMulTab;

	for(it=0;it<10;it++)
	{
		resMulTab[it] = Val*(it+1);
	}


	for(it=0;it<10;it++,arrPtr++)
	{
		printf("\n%d\n",*arrPtr);
	}

	return 0;

}