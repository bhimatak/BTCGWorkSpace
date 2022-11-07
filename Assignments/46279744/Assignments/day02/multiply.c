#include<stdio.h>
int main()
{
	int num,i;
	int *ptr;
	printf("Enter the number :\n");
	scanf("%d", &num);
	ptr=&num;
	printf("The multiplication table of %d are:\n",num);
	for(i=1;i<=10;i++)
	{
		printf("%d \n",*ptr*i);
	}
	return 0;
}
