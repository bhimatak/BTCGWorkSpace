/* demo on linked list */

#include <stdio.h>
#include <stdlib.h>


typedef struct home 
{
	int val;
	struct home *next;
}HOME;


int main()
{
	HOME h1, h2, h3,h4;
	HOME *head;

	h1.val = 10;
	h2.val = 20;
	h3.val = 30;
	h4.val = 40;

	h1.next = &h2;
	h2.next = &h3;
	h3.next = &h4;
	h4.next = NULL;

	printf("\n%d %d %d\n",h1.val, h2.val, h3.val);

	printf("\nh1 address = %u\n", &h1);
	printf("\nh2 address = %u\n", &h2);
	printf("\nh3 address = %u\n", &h3);
	printf("\nh3 address = %u\n", &h4);

	printf("\nh2 address using h1.next = %u\n", h1.next);
	printf("\nh3 address using h2.next = %u\n", h2.next);
	printf("\nh4 address using h3.next = %u\n", h3.next);
	
	/*
	head = &h1; // BA of the list
	if(head != NULL)
		printf("\n%d\n",head->val);

	head = head->next; //h1.next; // &h2;
	if(head != NULL)
		printf("\n%d\n",head->val);

	head = head->next; //h2.next; //&h3;
	if(head != NULL)
		printf("\n%d\n",head->val);

	head = head->next; //h2.next; //&h3;
	if(head != NULL)
		printf("\n%d\n",head->val);

	*/

	head = &h1;
	while(head != NULL)
	{
		printf("\n%d\n",head->val);
		head = head->next;
	}

	printf("\n\n");
	return 0;
}