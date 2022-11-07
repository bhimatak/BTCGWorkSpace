/***************************************************************************************************************
 * * FILE NAME   :   arr3b.c
 * * 
 * * DESCREPTION  :   Finds out the swap_elements,isVowel,Remove Vowel
 * *
 * *  DATE                   NAME           REFERNCE               REASON
 * --------------------------------------------------------------------------------------------------------------
 * * 5 NOV 2022           YAMINI TALLA        NEW              initial Creation
 * *
 * * Copyright@2022, Aricent Technologies (Holdings) Ltd
 * *
 * *****************************************************************************************************************/

/********************************************************************************************************************
 *                                         HEADER FILE                                               
 * *****************************************************************************************************************/
#include<common.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_LEN 20
/*******************************************************************************************************************
 * *  FUNCTION NAME :  main function
 * *
 * * DESCRIPTION   :  swap_elements, vowels
 * *
 * * RETURN        :  SUCCESS OR FAILURE
 * ******************************************************************************************************************/
char arr[][MAX_LEN]={"user1","user2","user3","user4"};
char* swap_elements(char arr1[][MAX_LEN],int index) 
{

	char temp[20];            
	strcpy(temp,arr1[0]);
	strcpy(arr1[0],arr1[index]);            /*string copy decleration*/
	strcpy(arr1[index],temp);

	for(int x=0;x<4;x++)
	{
		printf("%s\n",arr1[x]);
	}
	return *arr1;
}


int isVowel(char x)                /*isVowel function is used to search vowel characters*/
{
	if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' ||x=='U')
	{
		return EXIT_SUCCESS;
	}
	else
	{
		return EXIT_FAILURE;
	}
}


char *remove_vowel(char arr1[][MAX_LEN],int index)    /*consonant or remove_voowel*/
{
char large[MAX_LEN];                    
int e=0;

for(int x=0;arr1[index][x]!='\0';x++)
{
	if(isVowel(arr1[index][x])==1)                  /*condition for removing vowels */
	{
		large[e]=arr1[index][x];                             
		e++;
	}
}
large[e]='\0';
printf("Atfer the removing vowels %s\n",large);
}


char* mystrcat(const char* str1,const char* str2)
{
	int  i=0,j=0;
	char* result = malloc(strlen(str1)+strlen(str2)+1);
	while (*str1){
		result[i++]=*str1++;
	}
	while (*str2){
		result[i+j++]=*str2++;
	}
	result[i+j]='\0';
	return result;
}

int display()           /* dispaly the function*/
{
	int x=0;
	for(x=0;x<4;x++)
	{
		printf("%s\n",arr[x]);
	}
	return EXIT_SUCCESS;
}

int main()             /* main funtion*/
{
	int n;            /*variable for index*/
	char a;           /*variable for character*/
	printf("Enter the letter:\n");
	scanf("%c",&a);
	int e=isVowel(a);
	if(e==EXIT_SUCCESS)
	{
		printf("\nletter is vowel\n");
	}
	else
	{
		printf("\n It is not vowel\n");
	}
	
		printf("Befor swapping:\n");
		display();

		printf("enter Index number:\n");
		scanf("%d",&n);
		printf("Index swaped elements %s\n",swap_elements(arr,n));
		remove_vowel(arr,n);                             
		printf("The address of character is %p\n",&mystrcat);

		return EXIT_SUCCESS;
}

