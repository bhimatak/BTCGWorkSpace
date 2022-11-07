#include<stdio.h>
#include<stdlib.h>
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
