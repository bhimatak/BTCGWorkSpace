#include <multiTab.h>
void mulTab(int a[10], int mv)
{
	int i;
	for(i=0;i<10;i++)
		a[i] = (i+1)*mv;
}


int *mulTabR(int mv)
{
	int i;
	int *arr = (int *)malloc(10*sizeof(int));
	for(i=0;i<10;i++)
		arr[i] = (i+1)*mv;

	free(arr);
	return arr;
}