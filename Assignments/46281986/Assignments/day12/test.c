#include <stdio.h>
#include<stdlib.h>


int main()
{

	int a[5] = { 1,2,3,4,5};
	int *head = NULL;
	head = &a[0];// a 

	printf("\n%d",*head);
	head = head + 1; // head++;
	printf("\n%d",*head);
	head++;
	printf("\n%d",*head);
	head++;
	printf("\n%d",*head);
	head++;
	printf("\n%d",*head);
	
	printf("\n\n");

	return 0;

}