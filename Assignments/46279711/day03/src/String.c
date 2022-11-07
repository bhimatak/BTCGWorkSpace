#include<stdio.h>
int main()
{
	char stcp[20] ;
	char st1[20] = {'\0',};
	int i;
	printf("\n Enter string : ");
	scanf("%s", &st1[0]);
	for(i=0;st1[i] !='\0';i++)
	{
		stcp[i]=st1[i];
	}
	stcp[i]='\0';
	printf("Destination : %s\n",stcp);
	
}
