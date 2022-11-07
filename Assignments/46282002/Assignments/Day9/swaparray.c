#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 20

char* swap_element(char arr1[MAX_LEN],int index);
char *remove_vowel(char arr1[MAX_LEN],int index);
int isVowel(char txt[20]);
char *mystrcat(char *s1,char *s2);
int display();
int main()
{
	char arr[MAX_LEN]={"user1","ser2","usr3","uer4"};
	int i;
	char text[20];
	char  *string1;
        char *string2;
	printf("Enter a index number:");
	scanf("%d\n",&i);
	printf("Enter a text:");
	scanf("%s\n",text);
	printf("Enter a string1:");
	scanf("%s\n",string1);
	printf("Enter another String2:");
	scanf("%s\n",string2);
	swap_element(arr,i);
	isVowel(text);
	remove_vowel(arr,i);
	mystrcat(*string1,*string2);
	return 0;
}
char* swap_element(char arr1[MAX_LEN],int index)
{
	char temp[100];
	int i;
	strcpy(temp,arr1[0]);
	strcpy(arr1[0],arr1[index]);
	strcpy(arr1[index],temp);
	for(i=0;i<4;i++)
	{
		printf("%s\n",arr1[i]);
	}
	return arr1;
}
int isVowel(char txt[20])
{
	int len =0;
	int i;
	len=strlen(txt);
	for(i=0;i<len;i++)
	{
		if(txt[i]=='A'||txt[i]=='E'||txt[i]=='I'||txt[i]=='O'||txt[i]=='U'||txt[i]=='a'||txt[i]=='e'||txt[i]=='i'||txt[i]=='o'||txt[i]=='u')
		{
			return EXIT_SUCCESS;
		}
		else
			return EXIT_FAILURE;
	}
}
char *remove_vowel(char arr1[MAX_LEN],int index)
{
	char Array[MAX_LEN];
	int k=0;	
	for(int i=0;arr1[index][i]!='\0';i++)
	{
		if(isVowel(arr1[index][i]==1))
	        	{
			Array[k]=arr1[index][k];
			k++;
			}	

	}
	Array[k]='\0';
	printf("After removing:%s \n",Array);
}
char *mystrcat(char *s1,char *s2)
{
	   char *s3[MAX_LEN];
	   int i;
	   int j;
	   int len;
	   strcpy(&s3,&s1);
	   strcpy(&s3,&s2);
	   len=strlen(*s3);
			  
	   s3[len]='\0';
	   printf("After concat:%d",&s3);
}
int display()
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("%s\n",arr[i]);
	}
	return EXIT_SUCCESS;
}

