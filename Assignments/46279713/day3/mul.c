#include<stdio.h>
int main()
{
	int resMulTab[10];
	int Val=2;
	int a;
	int *arrPtr;
	arrPtr=resMulTab;
	for(a=0;a<10;a++)
	{
		resMulTab[a]=Val*(a+1);
	}
	for(a=0;a<10;a++,arrPtr++)
	{
		printf("\n%d\n" , *arrPtr);
	}
	return 0;
}
