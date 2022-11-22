#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
struct node{
	char *str;
	struct node *next;
};
struct node *start=NULL;
struct node *nw,*temp;
struct node* read(FILE *fp)
{
	char line[128];
	if(fp==NULL)
	{
		perror("ERROE");
		return 0;
	}
	while(fgets(line,sizeof(line),fp))
	{
		nw=(struct node*)malloc(sizeof(struct node));
		nw->str=strdup(line);
		nw->next=NULL;

		if(start==NULL)
		{
			temp=start=nw;
		}
		else
		{
			temp=temp->next=nw;
		}
	}

	fclose(fp);
	printf("Sorted words from file to linked list Successfully\n");
	return nw;
}
void display(struct node* list)
{
	if(start==NULL)
	{
		printf("List is Empty");
	}
	else
	{
		printf("Displaying items:\n");
		for(temp=start;temp;temp=temp->next)
		{
			printf("%s",temp->str);
		}
	}
}
void search(char word[10])
{
	int c=0;
	for(temp=start;temp;temp=temp->next)
         {
		 if(strcmp(word,temp->str)==0)
			 c++;
	 }
         printf("Number of time word %sis repeated is %d times",word,c);
}
void search_delete(char word[10])
{
	struct node *p,*t;
	t=start;
	for(temp=start;temp;temp=temp->next)
	{        
              if(strcmp(word,t->string)==0)
	      {

	       	printf("Deleted succesfully\n");
		p->next=t->next;
		free(t);
		break;

                }
	      p=t;
	      t-t->next;
	}
	if(temp--NULL)
	{
		printf("Word is not present");
	}
	else
	{
		printf("After deleting\n");
	}
}
struct node* copyList(struct node* start)
{
	if(start==NULL)
	{
		return NULL;
	}
	else
	{
		struct node* newNode=(struct node*)malloc(sizeof(struct node));
		newNode->str=start->str;
		newNode->next=copyList(start->next);
		return newNode;
	}
	printf("\ncopied in new list successfully");
}
void delete()
{
	struct node*temp;
	while(start!=NULL)
	{
		temp=start;
		start=start->next;
		free(temp);
	}
	printf("\n List deleted succesfully:\n");
}



int main(int argc,char* argv[])
{
	FILE *fp;
	char word[20];
	char w[20];
	fp=fopen(argv[1],"r");
	struct node* orig=read(fp);
	display(orig);
	printf("\nEnter a word to be searched:");
	fgets(word,20,stdin);
	search(word);
	printf("\nEnter a word to be searched and deleted:");
	fgets(w,20,stdin);
	search_delete(w);
	display(orig);
	struct node* dup=copyList(start);
	printf("\nItems in origin list:");
	display(orig);
	printf("\nItems in duplicate list:");
	display(dup);
	delete();
	display(dup);
}
	
