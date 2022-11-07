/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_LEN 20*/
#include<common.h>
char arr[][MAX_LEN]={"susmitha","sravani","sampragna","divya"};
char* swap_elements(char arr1[][MAX_LEN],int index)
{
	int i;
	char swap[MAX_LEN];
	strcpy(swap,arr1[0]);
	strcpy(arr1[0],arr1[index]);
	strcpy(arr1[index],swap);
	for(i=0;i<4;i++)
	{
		printf("%s\n",arr1[i]);
	}
	return *arr1;
}
int isVowel(char x)
{
	if(x== 'a'|| x== 'A' || x == 'e' || x == 'E' || x == 'i' || x == 'I' || x == 'o' || x == 'O' ||x == 'u' || x =='U')
	{
		return EXIT_SUCCESS;
	}
	else
	{
		return EXIT_FAILURE;
	}
}
char *remove_vowel(char arr1[][MAX_LEN],int index)
{
	char large[MAX_LEN];
	int e=0;
	for(int x=0;arr1[index][x] !='\0';x++)
	{
		if(isVowel(arr1[index][x])==1)
		{
			large[e]=arr1[index][x];
			e++;
		}
	}
	large[e]='\0';
	printf("After removing vowels %s\n",large);
}
char* mystrcat(const char* str1,const char* str2)
{
	int i=0,j=0;
	char* result=malloc(strlen(str1)+strlen(str2)+1);
	while(*str1)
	{
		result[i++]=*str1++;
	}
	while(*str2)
	{
		result[i+j++]=*str2++;
	}
	result[i+j]='\0';
	return result;
}
int display()
{
	int x=0;
	for(x=0;x<4;x++)
	{
		printf("%s\n",arr[x]);
	}
	return EXIT_SUCCESS;
}
int main()
{
	int n;
	char a;
	printf("Enter any letter:\n");
	scanf("%c",&a);
	int e=isVowel(a);
	if(e== EXIT_SUCCESS)
	{
		printf("The entered element is vowel\n");
	}
	else
	{
		printf(" the entered element is not vowel\n");
	}
	printf(" the content of array are\n");
	display();
	printf(" enter the index number\n");
	scanf("%d",&n);
	printf(" the swapped element at given index is %s\n",swap_elements(arr,n));
	remove_vowel(arr,n);
	printf("The address of character is %p\n",&mystrcat);
	return EXIT_SUCCESS;
}


