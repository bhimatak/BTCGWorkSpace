#include <stdio.h>
int main()
{
	int id;
	int size;
	int array[100];
	int *ptr;
	printf("Enter a size:");
	scanf("%d",&size);
	for(id=0;id<size;id++)
	{
		scanf("%d",&array[id]);
	}
	for(id=0;id<size;id++)
	{
		ptr=&array[id];
		printf("%u\t%d\n",ptr,*ptr);
	}
	for(id=0;id<size;id++)
	{
		ptr=&*(array+id);
		printf("\n%d",*ptr);
		printf("\n%d",*(array+id));
	}
	printf("\n%ld\n",sizeof(array));
	printf("size of ptr %ld\n",sizeof(ptr));
	return 0;
}
