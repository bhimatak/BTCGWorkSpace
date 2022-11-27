#include <stdio.h>
#include <stdlib.h>

struct node
{
	int key;
	struct node *left;
	struct node *right;
};

typedef struct node NODE;


NODE *newNode(int);
NODE *insertNode(NODE *, int);

void inOrderTras(NODE *);
void preOrderTras(NODE *);
void postOrderTras(NODE *);

int main()
{
	NODE *root = NULL;

	root = insertNode(root, 50);
	insertNode(root,30);
	insertNode(root,20);
	insertNode(root,40);
	insertNode(root,60);
	insertNode(root,70);
	insertNode(root,80);

	
	printf("\nInOrder\n");
	inOrderTras(root);
	
	printf("\nPreOrder\n");
	preOrderTras(root);

	printf("\nPostOrder\n");
	postOrderTras(root);

	insertNode(root,25);
	

	printf("\nInOrder\n");
	inOrderTras(root);
	
	printf("\nPreOrder\n");
	preOrderTras(root);

	printf("\nPostOrder\n");
	postOrderTras(root);


	printf("\n\n");
	return 0;
}


NODE *newNode(int _key)
{
	NODE *tmp = (NODE *)malloc(sizeof(NODE));
	tmp->key = _key;
	tmp->left = NULL;
	tmp->right = NULL;

	return tmp;
}

NODE *insertNode(NODE *node, int _key)
{
	if(node == NULL) //list or tree is empty
	{
		return (newNode(_key));
	}

	/* if the list/tree is already present */

	if(_key < node->key)
	{
		//placing _key in left of the node
		node->left = insertNode(node->left, _key);
	}
	else
	{
		//place _key in right of the node
		node->right = insertNode(node->right, _key);
	}

	return (node); 

}


// LNR 
void inOrderTras(NODE *node)
{
	if(node != NULL)
	{
		inOrderTras(node->left);
		printf("%d->",node->key);
		inOrderTras(node->right);
	}
}


// NLR 
//50,30,20,40,60,70,80
void preOrderTras(NODE *node)
{
	if(node != NULL)
	{
		printf("%d->",node->key);
		preOrderTras(node->left);
		preOrderTras(node->right);
	}
}


// LRN 
//20, 40, 30, 60, 80, 70, 50
void postOrderTras(NODE *node)
{
	if(node != NULL)
	{
		postOrderTras(node->left);
		postOrderTras(node->right);
		printf("%d->",node->key);
	}
}