#include <stdio.h>
#include <stdlib.h>

#define CAP 5

int top, bottom;

int push(int [], int);
void dispStack(int []);
void pop();

int main()
{
	int arr[CAP];
	int ch=1, ele;
	top = 0;
	bottom = 0;

	while(ch)
	{
		printf("\n\tPress,");
		printf("\n\t1. Push Operation");
		printf("\n\t2. Pop Operation");
		printf("\n\t3. Display Stack");
		printf("\n\t4. Exit");
		printf("\n\tChoice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				printf("\n\tEnter the Value to be insert in stack: ");
				scanf("%d",&ele);

				push(arr, ele);
				break;
			case 2:
				pop(arr);
				break;
			case 3:
				printf("\n");
				dispStack(arr);
				break;
			case 4:
				printf("\n\tThank You for using Stack app\n");
				exit(EXIT_SUCCESS);	
			default:
				printf("\n\tEnter the correct choice");	
		}
		
	}

	printf("\n\n");
	return 0;
}

int push(int stackArr[], int ele)
{
	if(top > (CAP-1))
	{
		printf("\n\tStack is full\n");
		return 0;
	}
	stackArr[top] = ele;
	top++;
	return 1;
}


void pop(int a[])
{
	if(top == bottom)
	{
		printf("\n\tStack is Empty\n");
		return ;
	}
	else
	{
		printf("\n\t%d element is popped out successfully",a[top-1]);
		top--;
	}
}

void dispStack(int stackArr[])
{
	int i;
	if(top == bottom)
	{
		printf("\n\tStack is Empty\n");
		return ;
	}
	printf("\n\tELements in the stack are\n");
	printf("\t\t");
	for(i=top-1;i>=0;i--)
		printf("%d ",stackArr[i]);

	printf("\n\n");
}