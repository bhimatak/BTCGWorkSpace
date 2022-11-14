/* demo on linked list */

#include <stdio.h>
#include <stdlib.h>


typedef struct node 
{
	int val;
	struct node *next;
}LList;

void dispList(LList *);



int main()
{
	LList *newNode = NULL; // whenever new node is reqd create it and assign it to the existing list
	LList *tempNode = NULL;
	LList *head = NULL; // => always pointing to BA of the firstnode/list

	int ch=1,i; // 1 for always true 0=flase

	while(ch)
	{
		//create new node, allocate mem and assign it to list
		
		newNode = (LList *)malloc(sizeof(LList));
		printf("\n\tEnter the Value : ");
		scanf("%d",&newNode->val);
		newNode->next = NULL;
		
		//end of creating new node
		if(head == NULL) // list is empty
		{
			
			head = newNode;
			tempNode = newNode;
			
		}
		else  // list is present and assign newnode to existing list
		{
			// making relating ship or list is prepared
			
			tempNode->next = newNode;
			tempNode = tempNode->next;
				
		}


		printf("\n\tDo you want to add new element (0/1): ");
		scanf("%d",&ch);
	}
	
	dispList(head);
	
	
	printf("\n\n");
	return 0;
}


void dispList(LList *head)
{	
	printf("\n\tList is\n");
	while(head != NULL)
	{
		printf("%d->",head->val);
		head = head->next;
	}
	printf("NULL");
	printf("\n");
}