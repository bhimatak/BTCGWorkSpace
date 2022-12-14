/* demo on linked list */

#include <stdio.h>
#include <stdlib.h>


typedef struct node 
{
	int val;
	struct node *next;
}LList;

void dispList(LList *);

int updateList(LList*, int, int);

int sortListA(LList *);
int revListA(LList *); // rev the existing list
int deleteNode(LList *, int);
int insertNewNode(LList *, LList *, int, int);


int main()
{
	LList *newNode = NULL; // whenever new node is reqd create it and assign it to the existing list
	LList *tempNode = NULL;
	LList *head = NULL; // => always pointing to BA of the firstnode/list

	int ch=1,val, repValue; // 1 for always true 0=flase
	int firstVal, secVal;

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
	/* search and update */
	/*
	printf("\nEnter the value in the list to be updated: ");
	scanf("%d",&val);
	printf("\nEnter the value to be updated: ");
	scanf("%d",&repValue);
	if(updateList(head, val, repValue)==1){
		printf("\nFound and Updated the list\n");
		dispList(head);
	}
	else
		printf("\nDidn't find the %d value in the list\n", val);
	*/
	/* end of search and update */

	// sort the LList in ascending order
	sortListA(head);
	dispList(head);

	newNode = (LList *)malloc(sizeof(LList));
	printf("\nInsert New Node Value: ");
	scanf("%d",&newNode->val);
	newNode->next = NULL;

	printf("\nEnter the values of List where you want to insert the NN: ");
	printf("\nFirst Value: ");
	scanf("%d",&firstVal);
	printf("\nSecond Value: ");
	scanf("%d", &secVal);

	if(insertNewNode(head, newNode, firstVal, secVal)==0)
		printf("\nUnable to find the location\n");
	else
		printf("\nInserted the new node successfully\n");
	dispList(head);

	printf("\nEnter the node value to be deleted: ");
	scanf("%d",&firstVal);

	if(deleteNode(head, firstVal) == 0)
		printf("\nUnable to find the value in list to be deleted\n");
	else
		printf("\nDeleted the node with the value: %d", firstVal);
	dispList(head);

	printf("\n\n");

	free(newNode);
	free(head);
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


int updateList(LList *head, int findValue, int repValue)
{
	int flag =0;
	while(head != NULL)
	{
		if(head->val == findValue){
			head->val = repValue;
			flag = 1;
			break;		
		}
		head = head->next;

	}

	if(flag == 1)
		return 1;

	return 0;

}

int sortListA(LList *head)
{
	int tempVal = 0;
	LList *tempNode = NULL;


	tempVal = 0;
	tempNode = head->next;

	while(head != NULL)
	{
		tempNode = head->next;
		while(tempNode != NULL)
		{
			printf("\nCompare %d with %d\n",head->val, tempNode->val);
			if(head->val > tempNode->val)
			{
				tempVal = tempNode->val;
				tempNode->val = head->val;
				head->val = tempVal;
			}
			tempNode = tempNode->next;
		}
		head = head->next;
	}
	

	return 0;
}

int insertNewNode(LList *head, LList *nn, int firstVal, int secVal)
{
	LList *prevNode;
	LList *nextNode;
	int flag = 0;

	while(head != NULL)
	{
		if((head->val == firstVal) && (head->next->val == secVal))
		{
			prevNode = head;
			nextNode = head->next;

			prevNode->next = nn;
			nn->next = nextNode;
			flag = 1;
			break;
		}
		head = head->next;
	}

	return flag;
}


int deleteNode(LList *head, int val)
{
	LList *prevNode;
	LList *currNode;
	int flag = 0;

	if(head != NULL){
		currNode = head;
		prevNode = head;

		while(currNode != NULL)
		{

			if(currNode->val == val)
			{
				prevNode->next = currNode->next;
				flag = 1;
				break;
			}
			else
			{
				prevNode = currNode;
			}
			currNode = currNode->next;
		}
	}
	return flag;
}