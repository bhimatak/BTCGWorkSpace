/*
Queue demo

FIFO

bottom -> front = 0 => begining of the list
top ->  rear => pointer => tail

que is full=> when rear == CAP
que is empty => when front == rear

push => enqueue
pop => dequeue 

*/


#include <stdio.h>
#include <stdlib.h>

#define CAP 5

int rear, front;

int enQueue(int [], int);
void dispQueue(int []);
void deQueue(int []);

int main()
{
	int arr[CAP];
	int ch=1, ele;
	rear = 0;
	front = 0;

	while(ch)
	{
		printf("\n\tPress,");
		printf("\n\t1. Enqueue Operation");
		printf("\n\t2. DeQueue Operation");
		printf("\n\t3. Display Queue");
		printf("\n\t4. Exit");
		printf("\n\tChoice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				printf("\n\tEnter the Value to be insert in Queue: ");
				scanf("%d",&ele);

				enQueue(arr, ele);
				break;
			case 2:
				deQueue(arr);
				break;
			case 3:
				printf("\n");
				dispQueue(arr);
				break;
			case 4:
				printf("\n\tThank You for using Queue app\n");
				exit(EXIT_SUCCESS);	
			default:
				printf("\n\tEnter the correct choice");	
		}
		
	}

	printf("\n\n");
	return 0;
}

int enQueue(int queueArr[], int ele)
{
	if(rear > (CAP-1))
	{
		printf("\n\tQueue is full\n");
		return 0;
	}
	queueArr[rear] = ele;
	rear++;
	return 1;
}


void deQueue(int queueArr[])
{
	if(front == rear)
	{
		printf("\n\tQueue is Empty\n");
		return ;
	}
	else
	{
		printf("\n\t%d element is deQueued out successfully",queueArr[front]);
		front++;
	}
}

void dispQueue(int queueArr[])
{
	int i;
	if(front == rear)
	{
		printf("\n\tQueue is Empty\n");
		return ;
	}
	printf("\n\tELements in the Queue are\n");
	printf("\t\t");
	for(i=front;i<rear;i++)
		printf("%d ",queueArr[i]);

	printf("\n\n");
}