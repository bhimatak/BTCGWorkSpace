#include<stdio.h>
#include<stdlib.h>

struct Node
{
        int val;
        struct Node *next;
};

struct Node* top = NULL;



void push(int value)
{

        struct Node *nNode;
        nNode = (struct Node *)malloc(sizeof(struct Node));
        nNode->val = value;
        if(top == NULL)
        {
                nNode->next = NULL;
        }
        else
        {
                nNode->next =top;
        }
        top=nNode;
        printf("Updation Done\n\n");

        }
int pop()
{
        if(top==NULL)
        {
                printf("no elements\n");
                return 0;
        }
        else
        {
                struct Node *t = top;
                int td = top->val;
                top = top->next;
		 return td;
        }
}
void display()
{
        if(top==NULL)
        {
                printf("stack empty\n");
        }
        else
        {
                printf("Stack:");
                struct Node *t = top;
                while(t->next != NULL)
                {
                        printf("%d->",t->val);
                        t=t->next;
                }
                printf("%d ",t->val);
        }
}
int main()
{
        int ch ;
        int value;
        while(1)
        {
                printf("WELCOME\n");
                printf("1.push\n 2.pop \n 3.display\n 4.exit\n");
                printf("enter ur choice : ");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1:
                                printf("enter the value : ");
                                scanf("%d",&value);
                                push(value);
                                break;
                        case 2:
                                printf("poped value:%d\n ",pop());
                                break;
                        case 3:
                                display();
                                break;
                        case 4:
                                exit(0);
                                break;
                        default:
                                printf("Invalid Choice");
                }
        }
}
                                                                                                                                         
