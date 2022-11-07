#include<stdio.h>
#include<string.h>
int main()
{
	char sourcestr[30]= "Have a nice day";
	char destinationstr[30];

	printf("sourcestr before swapping=%s\n",sourcestr);
	printf("destinationstr before swapping=%s\n\n",destinationstr);

	strcpy(destinationstr, sourcestr);

	printf("sourcestr after swapping=%s\n",sourcestr);
	printf("destinationstr after swapping=%s\n\n",destinationstr);
	return 0;
}
