#include <common.h>

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int iv;

	int *ptr = NULL;


	ptr = arr;

	for(iv=0;iv<5;iv++, ptr++)
		printf("\n%d\n",*ptr);
		
	//BA + iv*sizeof(dt)

	/*for(iv = 0;iv<5;iv++){
		ptr = &arr[iv];
		
	}*/

	//printf("\n%d",*(arr+1));
	printf("\n\n");
	return 0;
}