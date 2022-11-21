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
		printf("\n\tEnter the Value to be insert in stack: ");
		scanf("%d",&ele);

		push(arr, ele);

		printf("\nDo you want to add/insert new element to the stack (0/1): ");
		scanf("%d",&ch);
	}

	dispStack(arr);

	pop(arr);
	dispStack(arr);
	pop(arr);
	dispStack(arr);
	pop(arr);
	dispStack(arr);
	pop(arr);
	dispStack(arr);
	pop(arr);
	dispStack(arr);

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