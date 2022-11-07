#include<common.h>
#define MAX 100
void strcopy(char str1[], char *str2)
{
	for(int i=0;str1[i] != '\0';i++)
	{
		str2[i]=str1[i];
	}		
}
int main()
{
	char s1[MAX]={'\0',};
	char s2[MAX];
	printf("\nEnter a string :");
	fgets(s1, sizeof(s1),stdin);
	printf("\nOriginal String :%s\n",s1);
	strcopy(s1,s2);
	printf("\nCopied String :%s\n",s2);
	return 0;
}

