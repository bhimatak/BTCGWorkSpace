/* demo on linked list */

#include <stdio.h>
#include <stdlib.h>


typedef struct home 
{
	int val;
	struct home *ptr;
}HOME;


int main()
{
	HOME h1, h2, h3;
	HOME *head;

	h1.val = 10;
	h2.val = 20;
	h3.val = 30;

	h1.ptr = &h2;
	h2.ptr = &h3;
	h3.ptr = NULL;

	printf("\n%d %d %d\n",h1.val, h2.val, h3.val);

	printf("\nh1 address = %u\n", &h1);
	printf("\nh2 address = %u\n", &h2);
	printf("\nh3 address = %u\n", &h3);

	printf("\nh2 address using h1.ptr = %u\n", h1.ptr);
	printf("\nh3 address using h2.ptr = %u\n", h2.ptr);
	

	head = &h1; // BA of the list
	printf("\n%d\n",head->val);

	head = h1.ptr; // &h2;
	printf("\n%d\n",head->val);

	head = h2.ptr; //&h3;
	printf("\n%d\n",head->val);

	printf("\n\n");
	return 0;
}