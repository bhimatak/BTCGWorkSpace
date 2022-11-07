#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 80
int getFirstName(char arr[MAX_LEN],int rowcount,char *firstnames[]);
int getLastName(char arr[MAX_LEN],int rowcount,char *lastnames[]);



int main()
{
	char Name[MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};
	char  *first[100];
	char *last[100];
	int len=0;
	int llen=0;
	printf("Enter a name:");
	fgets(Name,MAX_LEN,stdin);
	while(Name!=" ")
	{
		len++;
	}	
	llen=strlen(Name)-(len+1);
	getFirstName(Name,len,first);
	getLastName(Name,llen,last);
	return 0;
}
int getFirstName(char arr[MAX_LEN],int rowcount,char **firstnames[])
{
	int i;
	firstnames =strtok(arr,":");
	for(i=0;i<4;i++)
	{
        
	 	printf("%s\n",firstnames);
		firstnames=strtok(NULL,":");
	}
}

int getLastName(char arr[MAX_LEN],int rowcount,char **lastnames[])
{
	lastnames=strtok(NULL, " ");
	printf("%s\n",lastnames);
}

