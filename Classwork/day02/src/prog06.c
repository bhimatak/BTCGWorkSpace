#include <stdio.h>

int main()
{
	int arr[10] = {0,};
	int iv;
	
	for(iv=0;iv<10;iv++){
		printf("\nEnter value of a[%d]", iv);
		scanf("%d",&arr[iv]);
	}

	printf("\nArray Elements are\n");

	for(iv=0;iv<10;iv++){
		printf("\nvalue of a[%d] = ", iv);
		printf("%d",arr[iv]);
	}
	printf("\n");
	return 0;
}