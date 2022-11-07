#include<common.h>
#define MAX 100
int main()
{
	int arr[MAX];
	int num;
	int *ptr=arr;
	printf("Enter the number for multiplication table : ");
	scanf("%d",&num);
	for(int i=0;i<10;i++)
	{
		arr[i]=num*(i+1);
	}
	for(int i=0;i<10;i++)
	{
		printf("%d\n"  ,*ptr++);
	}
	return 0;
}
