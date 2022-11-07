#include <stdio.h>
#define MAX 100
int get_max(int array1[],int size)
{
	int in;
	int max=array1[0];
	for(in=0;in<size;in++)
	{
		if(max<array1[in])
			max=array1[in];
	}
        printf("%d is maximum",max);
}
int main()
{
	int arr1[MAX];
	int size1;
	int id;
	printf("enter size:");
	scanf("%d",&size1);
	printf("Enter element:");
	for(id=0;id<size1;id++)
	{
		scanf("%d",&arr1[id]);
	}
	get_max(arr1,size1);
	return 0;
}
